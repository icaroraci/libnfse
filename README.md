# libnfse

[![CI](https://github.com/icaroraci/libnfse/actions/workflows/ci.yml/badge.svg)](https://github.com/icaroraci/libnfse/actions/workflows/ci.yml)
[![Licença: LGPL v3+](https://img.shields.io/badge/licen%C3%A7a-LGPLv3%2B-blue.svg)](LICENSE)

Biblioteca C para emissão de NFS-e (Nota Fiscal de Serviço eletrônica) do padrão nacional, pela API da Sefin Nacional do Sistema Nacional NFS-e.

A libnfse é construída sobre a [libnfe](https://github.com/icaroraci/tooldoce), de quem usa o certificado A1, a assinatura XMLDSig, a conexão TLS com certificado cliente e a validação contra XSD. Aqui fica o que é próprio da NFS-e: o XML da DPS e dos pedidos de evento (leiaute v1.01), a chave de acesso de 50 posições, as chamadas à API REST da Sefin Nacional e a leitura da NFS-e devolvida. Ficam fora do escopo o DANFSe (impressão) e os padrões municipais (ABRASF e outros). O roteiro está em [`docs/ROTEIRO.md`](docs/ROTEIRO.md).

## Situação

Início do projeto (0.1.0-dev): estrutura, dependência da libnfe e CI. Nada da NFS-e está pronto ainda.

## Dependências

- [libnfe](https://github.com/icaroraci/tooldoce) 1.x, encontrada pelo `pkg-config` (`libnfe.pc`, instalado pelo `make install` do tooldoce), com as dependências dela (libxml2, xmlsec1 com OpenSSL e libcurl).
- libxml2, OpenSSL (`libssl-dev`) e zlib (`zlib1g-dev`, para a DPS compactada em gzip), usadas diretamente.
- Compilador C99 (gcc ou clang) e GNU make.

```sh
# libnfe num prefixo, com o script do CI
sh .github/scripts/instalar_libnfe.sh "$HOME/.local/libnfe" v1.0.0-rc4
export PKG_CONFIG_PATH="$HOME/.local/libnfe/lib/pkgconfig"
```

## Compilação

```sh
make                      # lib/libnfse.so (SONAME libnfse.so.0)
make test                 # testes com AddressSanitizer e UBSan
make install PREFIX=/usr  # biblioteca, headers em include/libnfse e libnfse.pc
```

Quem usa a biblioteca compila com `pkg-config --cflags --libs libnfse` e inclui `<libnfse/...>`.

## Contribuindo

Veja [`CONTRIBUTING.md`](CONTRIBUTING.md) e as [convenções de código](docs/CONVENCOES.md).

## Licença

LGPLv3 ou posterior ([`LICENSE`](LICENSE), que complementa a GPLv3 em [`COPYING`](COPYING)), a mesma da libnfe: a biblioteca pode ser usada em programas de qualquer licença.
