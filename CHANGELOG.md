# Histórico de mudanças

As mudanças relevantes de cada versão ficam registradas aqui. O formato segue o [Keep a Changelog](https://keepachangelog.com/pt-BR/1.1.0/) e as versões seguem o [versionamento semântico](https://semver.org/lang/pt-BR/): a versão maior muda quando a API ou a ABI deixam de ser compatíveis, e com ela o `SONAME` da biblioteca. Enquanto a versão maior for 0, a API pode mudar a cada versão menor.

## [Não lançado]

### Adicionado

- Estrutura do projeto, no modelo da [libmdf](https://github.com/icaroraci/libmdf): Makefile (biblioteca `libnfse.so.0`, testes, `make install` com `libnfse.pc`), testes com AddressSanitizer e UBSan, CI com gcc e clang e `.clang-format`.
- Dependência da libnfe 1.x pelo `pkg-config`, e da libxml2, OpenSSL e zlib.
- Versão da biblioteca em `<libnfse/versao.h>` (`NFSE_VERSAO`) e em tempo de execução (`nfse_versao()`).
- Roteiro em `docs/ROTEIRO.md`.
- Schemas oficiais da NFS-e 1.01 (pacote de 09/02/2026) em `tests/schemas/nfse`, sem alteração, conferidos pelo CI.
- `tools/documento.json` e, gerados dele pelos geradores da libnfe, as tabelas do motor de grupos (prestador, tomador, intermediário, serviço, valores, IBS/CBS, substituição e eventos de cancelamento), os padrões do leiaute, os diagramas e o `TODO.md`.

[Não lançado]: https://github.com/icaroraci/libnfse/commits/main
