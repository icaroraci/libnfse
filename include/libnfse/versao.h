/* Copyright (c) 2026 Gabriel Lampa da Cunha <gabriellampa@gmail.com>
 *
 * This file is part of libnfse.
 *
 * libnfse is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * libnfse is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with libnfse.  If not, see <https://www.gnu.org/licenses/>.
 * */

#ifndef LIBNFSE_VERSAO_H
#define LIBNFSE_VERSAO_H

/* Versão da biblioteca, no formato MAIOR.MENOR.REVISÃO[-PRÉ] (versionamento
 * semântico): a versão maior muda quando a API ou a ABI deixam de ser
 * compatíveis; enquanto ela for 0, a API ainda pode mudar a cada versão
 * menor. NFSE_VERSAO_PRE marca uma pré-versão (ex.: "dev") e fica vazio
 * numa versão final. O Makefile lê estas macros para nomear libnfse.so. */
#define NFSE_VERSAO_MAIOR   0
#define NFSE_VERSAO_MENOR   1
#define NFSE_VERSAO_REVISAO 0
#define NFSE_VERSAO_PRE     "dev"
#define NFSE_VERSAO         "0.1.0-dev"

/* Versão da biblioteca carregada em tempo de execução (ex.: "0.1.0-dev"),
 * que pode diferir de NFSE_VERSAO, a dos headers usados na compilação. */
const char *nfse_versao(void);

#endif /* LIBNFSE_VERSAO_H */
