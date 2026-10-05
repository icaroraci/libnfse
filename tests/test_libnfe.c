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

/* Testes da dependência libnfe: os headers são encontrados e a biblioteca
 * certa (1.x) é ligada. A chave de acesso da NFS-e (50 posições) não é a
 * da NF-e, por isso não é conferida pela libnfe. */

#include <libnfe/assinatura.h>
#include <libnfe/erros.h>
#include <libnfe/validar.h>
#include <libnfe/versao.h>

#include "teste.h"

int main(void)
{
	/* libnfe 1.x (SONAME libnfe.so.1) */
	VERIFICA_INT(NFE_VERSAO_MAIOR, 1);
	VERIFICA(nfe_versao() != NULL && nfe_versao()[0] == '1');

	/* Funções da libnfe que a NFS-e usa, ligadas de verdade */
	VERIFICA(nfe_validador_xsd(NULL) == NULL);
	VERIFICA_INT(nfe_assinar_elemento(NULL, NULL, 0, "infDPS", NULL, NULL),
	             E_ISNULL);
	TESTE_FIM();
}
