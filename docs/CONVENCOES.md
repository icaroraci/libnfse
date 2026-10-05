# Convenções de código

A libnfse segue as [convenções da libnfe](https://github.com/icaroraci/tooldoce/blob/master/docs/CONVENCOES.md) (objetos opacos com `_new`/`_free`, setters validados, retorno `0` ou código de erro negativo, nenhuma impressão, textos UTF-8 com limite de tamanho), trocando o prefixo:

| Elemento | Padrão | Exemplo |
|---|---|---|
| Funções públicas | `nfse_<grupo>_<ação>[_<campo>]` | `nfse_versao` |
| Tipos opacos | `typedef struct nfse_<grupo> nfse_<grupo>;` | |
| Constantes de enum | `NFSE_<NOME>_<VALOR>` | |
| Macros e constantes | `NFSE_<NOME>` | `NFSE_VERSAO` |
| Guardas de header | `LIBNFSE_<ARQUIVO>_H` | `LIBNFSE_VERSAO_H` |

- Headers públicos em `include/libnfse/`, incluídos como `<libnfse/arquivo.h>`; cada um compila sozinho (o CI confere).
- Tipos e funções da libnfe são usados diretamente (`nfe_nfe`, `nfe_grupo`, `nfe_sefaz`), sem embrulhá-los. Os códigos de erro também são os de `<libnfe/erros.h>`, até haver um erro próprio da NFS-e.
- **A biblioteca não imprime nada**; o CI falha se ela usar funções de saída da libc.

## Formatação

`.clang-format` na raiz (o mesmo da libnfe). Aplique com `make formatar`; o CI confere com `make verificar-formato`.
