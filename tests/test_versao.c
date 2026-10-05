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

/* Testes da versão da biblioteca */

#include <stdio.h>

#include <libnfse/versao.h>

#include "teste.h"

int main(void)
{
	char esperado[32];

	snprintf(esperado, sizeof esperado, "%d.%d.%d%s%s", NFSE_VERSAO_MAIOR,
	         NFSE_VERSAO_MENOR, NFSE_VERSAO_REVISAO,
	         NFSE_VERSAO_PRE[0] ? "-" : "", NFSE_VERSAO_PRE);
	VERIFICA_STR(NFSE_VERSAO, esperado);
	VERIFICA_STR(nfse_versao(), NFSE_VERSAO);
	TESTE_FIM();
}
