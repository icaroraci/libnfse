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

/* Schemas oficiais da NFS-e em tests/schemas/nfse: cada schema de
 * documento é carregado pelo validador da libnfe, e um pedido de
 * cancelamento é validado contra o seu schema */

#include <stdio.h>
#include <string.h>

#include <libnfe/erros.h>
#include <libnfe/validar.h>

#include "teste.h"

static const char *const schemas[] = {
	"DPS_v1.01.xsd",    "NFSe_v1.01.xsd", "pedRegEvento_v1.01.xsd",
	"evento_v1.01.xsd", "CNC_v1.00.xsd",  NULL,
};

static nfe_validador *carrega(const char *dir, const char *xsd)
{
	char caminho[1024];

	snprintf(caminho, sizeof caminho, "%s/schemas/nfse/%s", dir, xsd);
	return nfe_validador_xsd(caminho);
}

#define CHAVE "33045572211222333000181000000000000126100000000011"
#define PEDIDO(amb)                                                            \
	"<pedRegEvento xmlns=\"http://www.sped.fazenda.gov.br/nfse\""          \
	" versao=\"1.01\"><infPedReg Id=\"PRE" CHAVE "101101\"><tpAmb>" amb    \
	"</tpAmb><verAplic>libnfse</verAplic>"                                 \
	"<dhEvento>2026-10-05T10:00:00-03:00</dhEvento>"                       \
	"<CNPJAutor>11222333000181</CNPJAutor><chNFSe>" CHAVE "</chNFSe>"      \
	"<e101101><xDesc>Cancelamento de NFS-e</xDesc><cMotivo>1</cMotivo>"    \
	"<xMotivo>Erro na emissao da nota</xMotivo></e101101></infPedReg>"     \
	"</pedRegEvento>"

int main(int argc, char **argv)
{
	const char *dir = argc > 1 ? argv[1] : "tests";
	static const char pedido[] = PEDIDO("2");
	static const char pedido_errado[] = PEDIDO("3");
	nfe_validador *v;
	int i;

	for (i = 0; schemas[i]; i++) {
		v = carrega(dir, schemas[i]);
		if (!v)
			fprintf(stderr, "não carregou %s\n", schemas[i]);
		VERIFICA(v != NULL);
		nfe_validador_free(v);
	}

	v = carrega(dir, "pedRegEvento_v1.01.xsd");
	VERIFICA(v != NULL);
	VERIFICA_INT(nfe_validar_xsd(v, pedido, strlen(pedido), 0, NULL), 0);
	VERIFICA_INT(nfe_validar_xsd(v, pedido_errado, strlen(pedido_errado), 0,
	                             NULL),
	             E_VALOR);
	nfe_validador_free(v);
	TESTE_FIM();
}
