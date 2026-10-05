# Roteiro

A libnfse depende da [libnfe](https://github.com/icaroraci/tooldoce) 1.x e não duplica nada dela. Esta página separa o que a libnfe já entrega para a NFS-e do que falta construir, aqui ou na libnfe. Versões de leiaute, códigos de evento e endereços devem ser conferidos na [documentação técnica do Sistema Nacional NFS-e](https://www.gov.br/nfse/pt-br/biblioteca/documentacao-tecnica) antes de virarem código.

A NFS-e do padrão nacional não segue o padrão SEFAZ dos outros documentos: o contribuinte envia uma DPS (Declaração de Prestação de Serviço) assinada a uma API REST única, a Sefin Nacional, que devolve a NFS-e já gerada e assinada. A mensagem é JSON, com o XML compactado em gzip e codificado em base64, e a chave de acesso tem 50 posições.

## O que a libnfe já faz pela NFS-e

| Recurso | Onde, na libnfe |
|---|---|
| Certificado A1 | `nfe_certificado_pfx` (`assinatura.h`) |
| Assinatura XMLDSig de `infDPS` e `infPedReg` (RSA-SHA1) | `nfe_assinar_elemento` (`assinatura.h`); conferir se a Sefin aceita SHA-1 |
| Validação contra os XSD da NFS-e | `nfe_validador_xsd`, `nfe_validar_xsd` (`validar.h`) |
| Motor de grupos e geradores | `<libnfe/esquema.h>`, `<libnfe/grupo.h>`, `gerar_*.py --config` (`docs/ESQUEMAS.md` do tooldoce) |

## O que falta na libnfe

1. **Chamada HTTPS genérica** (método, caminho, `Content-Type`, corpo; status HTTP e corpo da resposta) sobre a mesma conexão com certificado cliente de `nfe_sefaz`.
2. **gzip e base64** no núcleo (hoje a libmdf tem a sua cópia).
3. **Leitura de JSON** mínima para o retorno da API.
4. **Assinatura RSA-SHA256**, se a Sefin exigir.

## O que falta, na libnfse

1. **Schemas** v1.01 sem alteração em `tests/schemas/` e o mapa do leiaute gerado por `tools/documento.json`.
2. **DPS mínima**: prestador, tomador, serviço (`cTribNac`, local da prestação), valores e tributação municipal; Id da DPS (45 caracteres); validação e assinatura.
3. **Emissão** (`POST /nfse`) contra um servidor REST falso no CI, leitura da NFS-e e da chave de acesso de 50 posições.
4. **Consulta** pela chave e pela DPS.
5. **Eventos**: cancelamento (101101) e cancelamento por substituição (105102).
6. **Homologação** na produção restrita, registrada em `docs/HOMOLOGACAO.md` (só chaves, números e códigos de retorno).
7. Grupo `IBSCBS` e demais grupos pelo motor de grupos; parâmetros municipais; distribuição pelo ADN; manifestação das partes.

O DANFSe (impressão) fica fora do escopo: é responsabilidade do programa emissor, que recebe a NFS-e autorizada. Desde 03/08/2026 a API da Sefin não gera mais o PDF, e o emissor segue o leiaute da NT 008/2026.

Se algum item exigir mudança no que é comum aos documentos fiscais (assinatura, comunicação, validação), a mudança vai para a libnfe, e a libnfse passa a exigir a versão que a trouxer.
