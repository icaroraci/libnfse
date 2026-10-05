# Schemas da NFS-e

`nfse/` contém os schemas oficiais da NFS-e do padrão nacional, **versão 1.01**, do pacote `nfse-esquemas_xsd-v1-01-20260209.zip` (pasta `Schemas/1.01`, arquivos de 11/02/2026), publicado na [documentação técnica do Sistema Nacional NFS-e](https://www.gov.br/nfse/pt-br/biblioteca/documentacao-tecnica). Os 10 arquivos são mantidos **sem alteração**:

| Grupo | Schemas |
|---|---|
| Documento | `DPS_v1.01.xsd` (declaração enviada pelo contribuinte), `NFSe_v1.01.xsd` (nota gerada pela Sefin), `tiposComplexos_v1.01.xsd` (leiaute, tipos `TCDPS` e `TCNFSe`), `tiposSimples_v1.01.xsd`, `xmldsig-core-schema.xsd` |
| Eventos | `pedRegEvento_v1.01.xsd` (pedido de registro), `evento_v1.01.xsd` (evento registrado), `tiposEventos_v1.01.xsd` (os 16 eventos, de `e101101` a `e305103`) |
| Cadastro | `CNC_v1.00.xsd`, `tiposCnc_v1.00.xsd` (cadastro nacional de contribuintes, usado pelos municípios) |

O pacote também traz a versão 1.00 (pasta `Schemas/1.00`), anterior ao grupo `IBSCBS` da reforma tributária, que não é usada aqui.

`SHA256SUMS` guarda o hash de cada arquivo; o CI confere (`sha256sum -c`) que nenhum foi alterado. `tests/test_schemas.c` carrega os schemas de documento com o validador da libnfe e valida um pedido de cancelamento.

A configuração em [`tools/documento.json`](../../tools/documento.json) descreve estes schemas para os geradores da libnfe (tabelas do motor de grupos, padrões, diagramas e TODO), conforme o `docs/ESQUEMAS.md` do tooldoce.

## Problema conhecido: série da DPS

O tipo `TSSerieDPS` de `tiposSimples_v1.01.xsd` usa o padrão `^0{0,4}\d{1,5}$`. Na sintaxe do XML Schema, `^` e `$` não são âncoras, e sim caracteres comuns, então um validador que segue a norma (como a libxml2, usada pela libnfe) recusa qualquer série de verdade (`1`, `00001`) e só aceita o texto `^1$`. A Sefin Nacional usa outra implementação, que trata `^` e `$` como âncoras. Até isso ser resolvido na libnfe (icaroraci/tooldoce#291), uma DPS completa não passa no `nfe_validar_xsd` com o schema oficial.

## Atualizar

1. Baixe o pacote novo na documentação técnica do Sistema Nacional NFS-e.
2. Substitua os arquivos de `nfse/` pelos da pasta da versão nova, sem alterar, e atualize o nome e a data do pacote acima.
3. Regere os hashes: `cd tests/schemas && find . -name '*.xsd' | sort | xargs sha256sum > SHA256SUMS`.
4. Rode `make test` e os geradores (`docs/ESQUEMAS.md` do tooldoce).

Os manuais e os anexos (leiaute e regras de validação em planilhas) não ficam no repositório; consulte-os no portal.
