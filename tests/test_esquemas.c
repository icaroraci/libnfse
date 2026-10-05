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

/* Tabelas do motor de grupos geradas dos schemas da NFS-e
 * (tools/documento.json): o grupo do prestador é preenchido pelo caminho
 * dos campos e gravado em XML */

#include <string.h>

#include <libnfe/erros.h>
#include <libnfe/esquema.h>
#include <libnfe/grupo.h>
#include <libxml/xmlwriter.h>

#include "../src/libnfse/esquemas.h"
#include "teste.h"

/* XML do grupo, alocado num buffer da libxml2 (libere com xmlBufferFree) */
static xmlBufferPtr grava(const nfe_grupo *g, int *rc)
{
	xmlBufferPtr buf = xmlBufferCreate();
	xmlTextWriterPtr w = xmlNewTextWriterMemory(buf, 0);

	*rc = nfe_grupo_write_xml(w, g);
	xmlTextWriterFlush(w);
	xmlFreeTextWriter(w);
	return buf;
}

int main(void)
{
	nfe_grupo *prest = nfe_grupo_new(&nfse_esq_prest);
	xmlBufferPtr buf;
	int rc;

	VERIFICA(prest != NULL);
	VERIFICA_INT(nfe_grupo_set(prest, "CNPJ", "11222333000181"), 0);
	VERIFICA_INT(nfe_grupo_set(prest, "CNPJ", "1122233300018"), E_VALOR);
	VERIFICA_INT(nfe_grupo_set(prest, "endNac/cMun", "3304557"), 0);
	VERIFICA_INT(nfe_grupo_set(prest, "endNac/CEP", "20000000"), 0);
	VERIFICA_INT(nfe_grupo_set(prest, "end/xLgr", "Rua Teste"), 0);
	VERIFICA_INT(nfe_grupo_set(prest, "end/nro", "1"), 0);
	VERIFICA_INT(nfe_grupo_set(prest, "end/xBairro", "Centro"), 0);
	VERIFICA_INT(nfe_grupo_set(prest, "regTrib/opSimpNac", "1"), 0);

	/* falta regEspTrib, obrigatório */
	buf = grava(prest, &rc);
	VERIFICA_INT(rc, E_VALOR);
	xmlBufferFree(buf);

	VERIFICA_INT(nfe_grupo_set(prest, "regTrib/regEspTrib", "0"), 0);
	buf = grava(prest, &rc);
	VERIFICA_INT(rc, 0);
	VERIFICA(strstr((const char *)xmlBufferContent(buf),
	                "<prest><CNPJ>11222333000181</CNPJ>") != NULL);
	VERIFICA(strstr((const char *)xmlBufferContent(buf),
	                "<regTrib><opSimpNac>1</opSimpNac><regEspTrib>0"
	                "</regEspTrib></regTrib></prest>") != NULL);
	xmlBufferFree(buf);

	nfe_grupo_free(prest);
	TESTE_FIM();
}
