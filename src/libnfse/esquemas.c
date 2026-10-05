/* Gerado por tools/gerar_esquemas.py a partir de tests/schemas/nfse.
 * Não edite à mão: rode `python3 "$(pkg-config --variable=ferramentas libnfe)/gerar_esquemas.py" --config tools/documento.json`. */

#include <stddef.h>

#include "esquemas.h"

#if NFE_ESQ_VERSAO != 1
#error "tabelas geradas para outra versão do motor de grupos da libnfe"
#endif

/* clang-format off */
static const char *const valores_0[] = { "01", "02", "03", "04", "05", "99", NULL };
static const char *const valores_1[] = { "0", "1", "2", NULL };
static const char *const valores_2[] = { "1", "2", "3", NULL };
static const char *const valores_3[] = { "0", "1", "2", "3", "4", "5", "6", "9", NULL };
static const char *const valores_4[] = { "0", "1", "2", "3", "4", NULL };
static const char *const valores_5[] = { "00", "01", "02", "03", "04", "05", "06", "07", "08", NULL };
static const char *const valores_6[] = { "00", "01", "02", "03", "04", "05", "06", "07", "08", "09", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", NULL };
static const char *const valores_7[] = { "0", "1", "2", "3", NULL };
static const char *const valores_8[] = { "0", "1", NULL };
static const char *const valores_9[] = { "1", "2", "3", "4", NULL };
static const char *const valores_10[] = { "Cancelamento de NFS-e", NULL };
static const char *const valores_11[] = { "1", "2", "9", NULL };
static const char *const valores_12[] = { "Cancelamento de NFS-e por Substitui\xC3\xA7\xC3\xA3o", NULL };

static const struct nfe_esq_no nos_subst[] = {
	{ "subst", ESQ_ELEM, 1, 1, NULL, NULL, 0, 0, 0, -1, 1, -1, -1, 0, 3, -1, 0, 0, NULL },
	{ NULL, ESQ_SEQ, 1, 1, NULL, NULL, 0, 0, 0, 0, 2, -1, -1, 0, 3, -1, 0, 0, NULL },
	{ "chSubstda", ESQ_ELEM, 1, 1, "[0-9]{50}", NULL, 0, 50, 0, 1, -1, 3, 0, 0, 1, -1, 0, 0, NULL },
	{ "cMotivo", ESQ_ELEM, 1, 1, NULL, valores_0, 0, 0, 0, 1, -1, 4, 1, 1, 2, -1, 0, 0, NULL },
	{ "xMotivo", ESQ_ELEM, 0, 1, "[!-\xC3\xBF]{1}[ -\xC3\xBF]{0,}[!-\xC3\xBF]{1}|[!-\xC3\xBF]{1}", NULL, 15, 255, 0, 1, -1, -1, 2, 2, 3, -1, 0, 0, NULL },
};

const struct nfe_esq nfse_esq_subst = { "subst", nos_subst, 5, 3, 0 };

static const struct nfe_esq_no nos_prest[] = {
	{ "prest", ESQ_ELEM, 1, 1, NULL, NULL, 0, 0, 0, -1, 1, -1, -1, 0, 22, -1, 0, 0, NULL },
	{ NULL, ESQ_SEQ, 1, 1, NULL, NULL, 0, 0, 0, 0, 2, -1, -1, 0, 22, -1, 0, 0, NULL },
	{ NULL, ESQ_CHOICE, 1, 1, NULL, NULL, 0, 0, 0, 1, 3, 7, -1, 0, 4, -1, 0, 0, NULL },
	{ "CNPJ", ESQ_ELEM, 1, 1, "[0-9]{14}", NULL, 0, 14, 0, 2, -1, 4, 0, 0, 1, -1, 0, 0, NULL },
	{ "CPF", ESQ_ELEM, 1, 1, "[0-9]{11}", NULL, 0, 11, 0, 2, -1, 5, 1, 1, 2, -1, 0, 0, NULL },
	{ "NIF", ESQ_ELEM, 1, 1, NULL, NULL, 1, 40, 0, 2, -1, 6, 2, 2, 3, -1, 0, 0, NULL },
	{ "cNaoNIF", ESQ_ELEM, 1, 1, NULL, valores_1, 0, 0, 0, 2, -1, -1, 3, 3, 4, -1, 0, 0, NULL },
	{ "CAEPF", ESQ_ELEM, 0, 1, "[0-9]{14}", NULL, 0, 14, 0, 1, -1, 8, 4, 4, 5, -1, 0, 0, NULL },
	{ "IM", ESQ_ELEM, 0, 1, NULL, NULL, 1, 15, 0, 1, -1, 9, 5, 5, 6, -1, 0, 0, NULL },
	{ "xNome", ESQ_ELEM, 0, 1, NULL, NULL, 1, 300, 0, 1, -1, 10, 6, 6, 7, -1, 0, 0, NULL },
	{ "end", ESQ_ELEM, 0, 1, NULL, NULL, 0, 0, 0, 1, 11, 27, -1, 7, 17, -1, 0, 0, NULL },
	{ NULL, ESQ_SEQ, 1, 1, NULL, NULL, 0, 0, 0, 10, 12, -1, -1, 7, 17, -1, 0, 0, NULL },
	{ NULL, ESQ_CHOICE, 1, 1, NULL, NULL, 0, 0, 0, 11, 13, 23, -1, 7, 13, -1, 0, 0, NULL },
	{ "endNac", ESQ_ELEM, 1, 1, NULL, NULL, 0, 0, 0, 12, 14, 17, -1, 7, 9, -1, 0, 0, NULL },
	{ NULL, ESQ_SEQ, 1, 1, NULL, NULL, 0, 0, 0, 13, 15, -1, -1, 7, 9, -1, 0, 0, NULL },
	{ "cMun", ESQ_ELEM, 1, 1, "[0-9]{7}", NULL, 0, 0, 0, 14, -1, 16, 7, 7, 8, -1, 0, 0, NULL },
	{ "CEP", ESQ_ELEM, 1, 1, "[0-9]{8}", NULL, 0, 0, 0, 14, -1, -1, 8, 8, 9, -1, 0, 0, NULL },
	{ "endExt", ESQ_ELEM, 1, 1, NULL, NULL, 0, 0, 0, 12, 18, -1, -1, 9, 13, -1, 0, 0, NULL },
	{ NULL, ESQ_SEQ, 1, 1, NULL, NULL, 0, 0, 0, 17, 19, -1, -1, 9, 13, -1, 0, 0, NULL },
	{ "cPais", ESQ_ELEM, 1, 1, "[A-Z]{2}", NULL, 0, 0, 0, 18, -1, 20, 9, 9, 10, -1, 0, 0, NULL },
	{ "cEndPost", ESQ_ELEM, 1, 1, NULL, NULL, 1, 11, 0, 18, -1, 21, 10, 10, 11, -1, 0, 0, NULL },
	{ "xCidade", ESQ_ELEM, 1, 1, NULL, NULL, 1, 60, 0, 18, -1, 22, 11, 11, 12, -1, 0, 0, NULL },
	{ "xEstProvReg", ESQ_ELEM, 1, 1, NULL, NULL, 1, 60, 0, 18, -1, -1, 12, 12, 13, -1, 0, 0, NULL },
	{ "xLgr", ESQ_ELEM, 1, 1, "[!-\xC3\xBF]{1}[ -\xC3\xBF]{0,}[!-\xC3\xBF]{1}|[!-\xC3\xBF]{1}", NULL, 1, 255, 0, 11, -1, 24, 13, 13, 14, -1, 0, 0, NULL },
	{ "nro", ESQ_ELEM, 1, 1, "[!-\xC3\xBF]{1}[ -\xC3\xBF]{0,}[!-\xC3\xBF]{1}|[!-\xC3\xBF]{1}", NULL, 1, 60, 0, 11, -1, 25, 14, 14, 15, -1, 0, 0, NULL },
	{ "xCpl", ESQ_ELEM, 0, 1, "[!-\xC3\xBF]{1}[ -\xC3\xBF]{0,}[!-\xC3\xBF]{1}|[!-\xC3\xBF]{1}", NULL, 1, 156, 0, 11, -1, 26, 15, 15, 16, -1, 0, 0, NULL },
	{ "xBairro", ESQ_ELEM, 1, 1, "[!-\xC3\xBF]{1}[ -\xC3\xBF]{0,}[!-\xC3\xBF]{1}|[!-\xC3\xBF]{1}", NULL, 1, 60, 0, 11, -1, -1, 16, 16, 17, -1, 0, 0, NULL },
	{ "fone", ESQ_ELEM, 0, 1, "[0-9]{6,20}", NULL, 0, 0, 0, 1, -1, 28, 17, 17, 18, -1, 0, 0, NULL },
	{ "email", ESQ_ELEM, 0, 1, "[!-\xC3\xBF]{1}[ -\xC3\xBF]{0,}[!-\xC3\xBF]{1}|[!-\xC3\xBF]{1}", NULL, 1, 80, 0, 1, -1, 29, 18, 18, 19, -1, 0, 0, NULL },
	{ "regTrib", ESQ_ELEM, 1, 1, NULL, NULL, 0, 0, 0, 1, 30, -1, -1, 19, 22, -1, 0, 0, NULL },
	{ NULL, ESQ_SEQ, 1, 1, NULL, NULL, 0, 0, 0, 29, 31, -1, -1, 19, 22, -1, 0, 0, NULL },
	{ "opSimpNac", ESQ_ELEM, 1, 1, NULL, valores_2, 0, 0, 0, 30, -1, 32, 19, 19, 20, -1, 0, 0, NULL },
	{ "regApTribSN", ESQ_ELEM, 0, 1, NULL, valores_2, 0, 0, 0, 30, -1, 33, 20, 20, 21, -1, 0, 0, NULL },
	{ "regEspTrib", ESQ_ELEM, 1, 1, NULL, valores_3, 0, 0, 0, 30, -1, -1, 21, 21, 22, -1, 0, 0, NULL },
};

const struct nfe_esq nfse_esq_prest = { "prest", nos_prest, 34, 22, 0 };

static const struct nfe_esq_no nos_toma[] = {
	{ "toma", ESQ_ELEM, 1, 1, NULL, NULL, 0, 0, 0, -1, 1, -1, -1, 0, 19, -1, 0, 0, NULL },
	{ NULL, ESQ_SEQ, 1, 1, NULL, NULL, 0, 0, 0, 0, 2, -1, -1, 0, 19, -1, 0, 0, NULL },
	{ NULL, ESQ_CHOICE, 1, 1, NULL, NULL, 0, 0, 0, 1, 3, 7, -1, 0, 4, -1, 0, 0, NULL },
	{ "CNPJ", ESQ_ELEM, 1, 1, "[0-9]{14}", NULL, 0, 14, 0, 2, -1, 4, 0, 0, 1, -1, 0, 0, NULL },
	{ "CPF", ESQ_ELEM, 1, 1, "[0-9]{11}", NULL, 0, 11, 0, 2, -1, 5, 1, 1, 2, -1, 0, 0, NULL },
	{ "NIF", ESQ_ELEM, 1, 1, NULL, NULL, 1, 40, 0, 2, -1, 6, 2, 2, 3, -1, 0, 0, NULL },
	{ "cNaoNIF", ESQ_ELEM, 1, 1, NULL, valores_1, 0, 0, 0, 2, -1, -1, 3, 3, 4, -1, 0, 0, NULL },
	{ "CAEPF", ESQ_ELEM, 0, 1, "[0-9]{14}", NULL, 0, 14, 0, 1, -1, 8, 4, 4, 5, -1, 0, 0, NULL },
	{ "IM", ESQ_ELEM, 0, 1, NULL, NULL, 1, 15, 0, 1, -1, 9, 5, 5, 6, -1, 0, 0, NULL },
	{ "xNome", ESQ_ELEM, 1, 1, NULL, NULL, 1, 300, 0, 1, -1, 10, 6, 6, 7, -1, 0, 0, NULL },
	{ "end", ESQ_ELEM, 0, 1, NULL, NULL, 0, 0, 0, 1, 11, 27, -1, 7, 17, -1, 0, 0, NULL },
	{ NULL, ESQ_SEQ, 1, 1, NULL, NULL, 0, 0, 0, 10, 12, -1, -1, 7, 17, -1, 0, 0, NULL },
	{ NULL, ESQ_CHOICE, 1, 1, NULL, NULL, 0, 0, 0, 11, 13, 23, -1, 7, 13, -1, 0, 0, NULL },
	{ "endNac", ESQ_ELEM, 1, 1, NULL, NULL, 0, 0, 0, 12, 14, 17, -1, 7, 9, -1, 0, 0, NULL },
	{ NULL, ESQ_SEQ, 1, 1, NULL, NULL, 0, 0, 0, 13, 15, -1, -1, 7, 9, -1, 0, 0, NULL },
	{ "cMun", ESQ_ELEM, 1, 1, "[0-9]{7}", NULL, 0, 0, 0, 14, -1, 16, 7, 7, 8, -1, 0, 0, NULL },
	{ "CEP", ESQ_ELEM, 1, 1, "[0-9]{8}", NULL, 0, 0, 0, 14, -1, -1, 8, 8, 9, -1, 0, 0, NULL },
	{ "endExt", ESQ_ELEM, 1, 1, NULL, NULL, 0, 0, 0, 12, 18, -1, -1, 9, 13, -1, 0, 0, NULL },
	{ NULL, ESQ_SEQ, 1, 1, NULL, NULL, 0, 0, 0, 17, 19, -1, -1, 9, 13, -1, 0, 0, NULL },
	{ "cPais", ESQ_ELEM, 1, 1, "[A-Z]{2}", NULL, 0, 0, 0, 18, -1, 20, 9, 9, 10, -1, 0, 0, NULL },
	{ "cEndPost", ESQ_ELEM, 1, 1, NULL, NULL, 1, 11, 0, 18, -1, 21, 10, 10, 11, -1, 0, 0, NULL },
	{ "xCidade", ESQ_ELEM, 1, 1, NULL, NULL, 1, 60, 0, 18, -1, 22, 11, 11, 12, -1, 0, 0, NULL },
	{ "xEstProvReg", ESQ_ELEM, 1, 1, NULL, NULL, 1, 60, 0, 18, -1, -1, 12, 12, 13, -1, 0, 0, NULL },
	{ "xLgr", ESQ_ELEM, 1, 1, "[!-\xC3\xBF]{1}[ -\xC3\xBF]{0,}[!-\xC3\xBF]{1}|[!-\xC3\xBF]{1}", NULL, 1, 255, 0, 11, -1, 24, 13, 13, 14, -1, 0, 0, NULL },
	{ "nro", ESQ_ELEM, 1, 1, "[!-\xC3\xBF]{1}[ -\xC3\xBF]{0,}[!-\xC3\xBF]{1}|[!-\xC3\xBF]{1}", NULL, 1, 60, 0, 11, -1, 25, 14, 14, 15, -1, 0, 0, NULL },
	{ "xCpl", ESQ_ELEM, 0, 1, "[!-\xC3\xBF]{1}[ -\xC3\xBF]{0,}[!-\xC3\xBF]{1}|[!-\xC3\xBF]{1}", NULL, 1, 156, 0, 11, -1, 26, 15, 15, 16, -1, 0, 0, NULL },
	{ "xBairro", ESQ_ELEM, 1, 1, "[!-\xC3\xBF]{1}[ -\xC3\xBF]{0,}[!-\xC3\xBF]{1}|[!-\xC3\xBF]{1}", NULL, 1, 60, 0, 11, -1, -1, 16, 16, 17, -1, 0, 0, NULL },
	{ "fone", ESQ_ELEM, 0, 1, "[0-9]{6,20}", NULL, 0, 0, 0, 1, -1, 28, 17, 17, 18, -1, 0, 0, NULL },
	{ "email", ESQ_ELEM, 0, 1, "[!-\xC3\xBF]{1}[ -\xC3\xBF]{0,}[!-\xC3\xBF]{1}|[!-\xC3\xBF]{1}", NULL, 1, 80, 0, 1, -1, -1, 18, 18, 19, -1, 0, 0, NULL },
};

const struct nfe_esq nfse_esq_toma = { "toma", nos_toma, 29, 19, 0 };

static const struct nfe_esq_no nos_interm[] = {
	{ "interm", ESQ_ELEM, 1, 1, NULL, NULL, 0, 0, 0, -1, 1, -1, -1, 0, 19, -1, 0, 0, NULL },
	{ NULL, ESQ_SEQ, 1, 1, NULL, NULL, 0, 0, 0, 0, 2, -1, -1, 0, 19, -1, 0, 0, NULL },
	{ NULL, ESQ_CHOICE, 1, 1, NULL, NULL, 0, 0, 0, 1, 3, 7, -1, 0, 4, -1, 0, 0, NULL },
	{ "CNPJ", ESQ_ELEM, 1, 1, "[0-9]{14}", NULL, 0, 14, 0, 2, -1, 4, 0, 0, 1, -1, 0, 0, NULL },
	{ "CPF", ESQ_ELEM, 1, 1, "[0-9]{11}", NULL, 0, 11, 0, 2, -1, 5, 1, 1, 2, -1, 0, 0, NULL },
	{ "NIF", ESQ_ELEM, 1, 1, NULL, NULL, 1, 40, 0, 2, -1, 6, 2, 2, 3, -1, 0, 0, NULL },
	{ "cNaoNIF", ESQ_ELEM, 1, 1, NULL, valores_1, 0, 0, 0, 2, -1, -1, 3, 3, 4, -1, 0, 0, NULL },
	{ "CAEPF", ESQ_ELEM, 0, 1, "[0-9]{14}", NULL, 0, 14, 0, 1, -1, 8, 4, 4, 5, -1, 0, 0, NULL },
	{ "IM", ESQ_ELEM, 0, 1, NULL, NULL, 1, 15, 0, 1, -1, 9, 5, 5, 6, -1, 0, 0, NULL },
	{ "xNome", ESQ_ELEM, 1, 1, NULL, NULL, 1, 300, 0, 1, -1, 10, 6, 6, 7, -1, 0, 0, NULL },
	{ "end", ESQ_ELEM, 0, 1, NULL, NULL, 0, 0, 0, 1, 11, 27, -1, 7, 17, -1, 0, 0, NULL },
	{ NULL, ESQ_SEQ, 1, 1, NULL, NULL, 0, 0, 0, 10, 12, -1, -1, 7, 17, -1, 0, 0, NULL },
	{ NULL, ESQ_CHOICE, 1, 1, NULL, NULL, 0, 0, 0, 11, 13, 23, -1, 7, 13, -1, 0, 0, NULL },
	{ "endNac", ESQ_ELEM, 1, 1, NULL, NULL, 0, 0, 0, 12, 14, 17, -1, 7, 9, -1, 0, 0, NULL },
	{ NULL, ESQ_SEQ, 1, 1, NULL, NULL, 0, 0, 0, 13, 15, -1, -1, 7, 9, -1, 0, 0, NULL },
	{ "cMun", ESQ_ELEM, 1, 1, "[0-9]{7}", NULL, 0, 0, 0, 14, -1, 16, 7, 7, 8, -1, 0, 0, NULL },
	{ "CEP", ESQ_ELEM, 1, 1, "[0-9]{8}", NULL, 0, 0, 0, 14, -1, -1, 8, 8, 9, -1, 0, 0, NULL },
	{ "endExt", ESQ_ELEM, 1, 1, NULL, NULL, 0, 0, 0, 12, 18, -1, -1, 9, 13, -1, 0, 0, NULL },
	{ NULL, ESQ_SEQ, 1, 1, NULL, NULL, 0, 0, 0, 17, 19, -1, -1, 9, 13, -1, 0, 0, NULL },
	{ "cPais", ESQ_ELEM, 1, 1, "[A-Z]{2}", NULL, 0, 0, 0, 18, -1, 20, 9, 9, 10, -1, 0, 0, NULL },
	{ "cEndPost", ESQ_ELEM, 1, 1, NULL, NULL, 1, 11, 0, 18, -1, 21, 10, 10, 11, -1, 0, 0, NULL },
	{ "xCidade", ESQ_ELEM, 1, 1, NULL, NULL, 1, 60, 0, 18, -1, 22, 11, 11, 12, -1, 0, 0, NULL },
	{ "xEstProvReg", ESQ_ELEM, 1, 1, NULL, NULL, 1, 60, 0, 18, -1, -1, 12, 12, 13, -1, 0, 0, NULL },
	{ "xLgr", ESQ_ELEM, 1, 1, "[!-\xC3\xBF]{1}[ -\xC3\xBF]{0,}[!-\xC3\xBF]{1}|[!-\xC3\xBF]{1}", NULL, 1, 255, 0, 11, -1, 24, 13, 13, 14, -1, 0, 0, NULL },
	{ "nro", ESQ_ELEM, 1, 1, "[!-\xC3\xBF]{1}[ -\xC3\xBF]{0,}[!-\xC3\xBF]{1}|[!-\xC3\xBF]{1}", NULL, 1, 60, 0, 11, -1, 25, 14, 14, 15, -1, 0, 0, NULL },
	{ "xCpl", ESQ_ELEM, 0, 1, "[!-\xC3\xBF]{1}[ -\xC3\xBF]{0,}[!-\xC3\xBF]{1}|[!-\xC3\xBF]{1}", NULL, 1, 156, 0, 11, -1, 26, 15, 15, 16, -1, 0, 0, NULL },
	{ "xBairro", ESQ_ELEM, 1, 1, "[!-\xC3\xBF]{1}[ -\xC3\xBF]{0,}[!-\xC3\xBF]{1}|[!-\xC3\xBF]{1}", NULL, 1, 60, 0, 11, -1, -1, 16, 16, 17, -1, 0, 0, NULL },
	{ "fone", ESQ_ELEM, 0, 1, "[0-9]{6,20}", NULL, 0, 0, 0, 1, -1, 28, 17, 17, 18, -1, 0, 0, NULL },
	{ "email", ESQ_ELEM, 0, 1, "[!-\xC3\xBF]{1}[ -\xC3\xBF]{0,}[!-\xC3\xBF]{1}|[!-\xC3\xBF]{1}", NULL, 1, 80, 0, 1, -1, -1, 18, 18, 19, -1, 0, 0, NULL },
};

const struct nfe_esq nfse_esq_interm = { "interm", nos_interm, 29, 19, 0 };

static const struct nfe_esq_no nos_serv_xItemPed[] = {
	{ "xItemPed", ESQ_ELEM, 1, 1, "[!-\xC3\xBF]{1}[ -\xC3\xBF]{0,}[!-\xC3\xBF]{1}|[!-\xC3\xBF]{1}", NULL, 1, 60, 0, -1, -1, -1, 0, 0, 1, -1, 0, 0, NULL },
};

static const struct nfe_esq nfse_esq_serv_xItemPed = { "xItemPed", nos_serv_xItemPed, 1, 1, 0 };

static const struct nfe_esq_no nos_serv[] = {
	{ "serv", ESQ_ELEM, 1, 1, NULL, NULL, 0, 0, 0, -1, 1, -1, -1, 0, 44, -1, 0, 1, NULL },
	{ NULL, ESQ_SEQ, 1, 1, NULL, NULL, 0, 0, 0, 0, 2, -1, -1, 0, 44, -1, 0, 1, NULL },
	{ "locPrest", ESQ_ELEM, 1, 1, NULL, NULL, 0, 0, 0, 1, 3, 6, -1, 0, 2, -1, 0, 0, NULL },
	{ NULL, ESQ_CHOICE, 1, 1, NULL, NULL, 0, 0, 0, 2, 4, -1, -1, 0, 2, -1, 0, 0, NULL },
	{ "cLocPrestacao", ESQ_ELEM, 1, 1, "[0-9]{7}", NULL, 0, 0, 0, 3, -1, 5, 0, 0, 1, -1, 0, 0, NULL },
	{ "cPaisPrestacao", ESQ_ELEM, 1, 1, "[A-Z]{2}", NULL, 0, 0, 0, 3, -1, -1, 1, 1, 2, -1, 0, 0, NULL },
	{ "cServ", ESQ_ELEM, 1, 1, NULL, NULL, 0, 0, 0, 1, 7, 13, -1, 2, 7, -1, 0, 0, NULL },
	{ NULL, ESQ_SEQ, 1, 1, NULL, NULL, 0, 0, 0, 6, 8, -1, -1, 2, 7, -1, 0, 0, NULL },
	{ "cTribNac", ESQ_ELEM, 1, 1, "[0-9]{6}", NULL, 0, 0, 0, 7, -1, 9, 2, 2, 3, -1, 0, 0, NULL },
	{ "cTribMun", ESQ_ELEM, 0, 1, "[0-9]{3}", NULL, 0, 0, 0, 7, -1, 10, 3, 3, 4, -1, 0, 0, NULL },
	{ "xDescServ", ESQ_ELEM, 1, 1, "[\\s\\S!-\xC3\xBF]{1}[\\s\\S -\xC3\xBF]{0,}[\\s\\S!-\xC3\xBF]{1}|[\\s\\S!-\xC3\xBF]{1}", NULL, 1, 2000, 0, 7, -1, 11, 4, 4, 5, -1, 0, 0, NULL },
	{ "cNBS", ESQ_ELEM, 0, 1, "[0-9]{9}", NULL, 0, 0, 0, 7, -1, 12, 5, 5, 6, -1, 0, 0, NULL },
	{ "cIntContrib", ESQ_ELEM, 0, 1, "[a-zA-Z0-9]{1,20}", NULL, 1, 20, 0, 7, -1, -1, 6, 6, 7, -1, 0, 0, NULL },
	{ "comExt", ESQ_ELEM, 0, 1, NULL, NULL, 0, 0, 0, 1, 14, 25, -1, 7, 17, -1, 0, 0, NULL },
	{ NULL, ESQ_SEQ, 1, 1, NULL, NULL, 0, 0, 0, 13, 15, -1, -1, 7, 17, -1, 0, 0, NULL },
	{ "mdPrestacao", ESQ_ELEM, 1, 1, NULL, valores_4, 0, 0, 0, 14, -1, 16, 7, 7, 8, -1, 0, 0, NULL },
	{ "vincPrest", ESQ_ELEM, 1, 1, NULL, valores_3, 0, 0, 0, 14, -1, 17, 8, 8, 9, -1, 0, 0, NULL },
	{ "tpMoeda", ESQ_ELEM, 1, 1, "[0-9]{3}", NULL, 0, 3, 0, 14, -1, 18, 9, 9, 10, -1, 0, 0, NULL },
	{ "vServMoeda", ESQ_ELEM, 1, 1, "0|0\\.[0-9]{2}|[1-9]{1}[0-9]{0,14}(\\.[0-9]{2})?", NULL, 0, 0, 0, 14, -1, 19, 10, 10, 11, -1, 0, 0, NULL },
	{ "mecAFComexP", ESQ_ELEM, 1, 1, NULL, valores_5, 0, 0, 0, 14, -1, 20, 11, 11, 12, -1, 0, 0, NULL },
	{ "mecAFComexT", ESQ_ELEM, 1, 1, NULL, valores_6, 0, 0, 0, 14, -1, 21, 12, 12, 13, -1, 0, 0, NULL },
	{ "movTempBens", ESQ_ELEM, 1, 1, NULL, valores_7, 0, 0, 0, 14, -1, 22, 13, 13, 14, -1, 0, 0, NULL },
	{ "nDI", ESQ_ELEM, 0, 1, "[!-\xC3\xBF]{1}[ -\xC3\xBF]{0,}[!-\xC3\xBF]{1}|[!-\xC3\xBF]{1}", NULL, 1, 12, 0, 14, -1, 23, 14, 14, 15, -1, 0, 0, NULL },
	{ "nRE", ESQ_ELEM, 0, 1, "[!-\xC3\xBF]{1}[ -\xC3\xBF]{0,}[!-\xC3\xBF]{1}|[!-\xC3\xBF]{1}", NULL, 1, 12, 0, 14, -1, 24, 15, 15, 16, -1, 0, 0, NULL },
	{ "mdic", ESQ_ELEM, 1, 1, NULL, valores_8, 0, 0, 0, 14, -1, -1, 16, 16, 17, -1, 0, 0, NULL },
	{ "obra", ESQ_ELEM, 0, 1, NULL, NULL, 0, 0, 0, 1, 26, 44, -1, 17, 28, -1, 0, 0, NULL },
	{ NULL, ESQ_SEQ, 1, 1, NULL, NULL, 0, 0, 0, 25, 27, -1, -1, 17, 28, -1, 0, 0, NULL },
	{ "inscImobFisc", ESQ_ELEM, 0, 1, NULL, NULL, 1, 30, 0, 26, -1, 28, 17, 17, 18, -1, 0, 0, NULL },
	{ NULL, ESQ_CHOICE, 1, 1, NULL, NULL, 0, 0, 0, 26, 29, -1, -1, 18, 28, -1, 0, 0, NULL },
	{ "cObra", ESQ_ELEM, 1, 1, NULL, NULL, 1, 30, 0, 28, -1, 30, 18, 18, 19, -1, 0, 0, NULL },
	{ "cCIB", ESQ_ELEM, 1, 1, NULL, NULL, 8, 8, 0, 28, -1, 31, 19, 19, 20, -1, 0, 0, NULL },
	{ "end", ESQ_ELEM, 1, 1, NULL, NULL, 0, 0, 0, 28, 32, -1, -1, 20, 28, -1, 0, 0, NULL },
	{ NULL, ESQ_SEQ, 1, 1, NULL, NULL, 0, 0, 0, 31, 33, -1, -1, 20, 28, -1, 0, 0, NULL },
	{ NULL, ESQ_CHOICE, 1, 1, NULL, NULL, 0, 0, 0, 32, 34, 40, -1, 20, 24, -1, 0, 0, NULL },
	{ "CEP", ESQ_ELEM, 1, 1, "[0-9]{8}", NULL, 0, 0, 0, 33, -1, 35, 20, 20, 21, -1, 0, 0, NULL },
	{ "endExt", ESQ_ELEM, 1, 1, NULL, NULL, 0, 0, 0, 33, 36, -1, -1, 21, 24, -1, 0, 0, NULL },
	{ NULL, ESQ_SEQ, 1, 1, NULL, NULL, 0, 0, 0, 35, 37, -1, -1, 21, 24, -1, 0, 0, NULL },
	{ "cEndPost", ESQ_ELEM, 1, 1, NULL, NULL, 1, 11, 0, 36, -1, 38, 21, 21, 22, -1, 0, 0, NULL },
	{ "xCidade", ESQ_ELEM, 1, 1, NULL, NULL, 1, 60, 0, 36, -1, 39, 22, 22, 23, -1, 0, 0, NULL },
	{ "xEstProvReg", ESQ_ELEM, 1, 1, NULL, NULL, 1, 60, 0, 36, -1, -1, 23, 23, 24, -1, 0, 0, NULL },
	{ "xLgr", ESQ_ELEM, 1, 1, "[!-\xC3\xBF]{1}[ -\xC3\xBF]{0,}[!-\xC3\xBF]{1}|[!-\xC3\xBF]{1}", NULL, 1, 255, 0, 32, -1, 41, 24, 24, 25, -1, 0, 0, NULL },
	{ "nro", ESQ_ELEM, 1, 1, "[!-\xC3\xBF]{1}[ -\xC3\xBF]{0,}[!-\xC3\xBF]{1}|[!-\xC3\xBF]{1}", NULL, 1, 60, 0, 32, -1, 42, 25, 25, 26, -1, 0, 0, NULL },
	{ "xCpl", ESQ_ELEM, 0, 1, "[!-\xC3\xBF]{1}[ -\xC3\xBF]{0,}[!-\xC3\xBF]{1}|[!-\xC3\xBF]{1}", NULL, 1, 156, 0, 32, -1, 43, 26, 26, 27, -1, 0, 0, NULL },
	{ "xBairro", ESQ_ELEM, 1, 1, "[!-\xC3\xBF]{1}[ -\xC3\xBF]{0,}[!-\xC3\xBF]{1}|[!-\xC3\xBF]{1}", NULL, 1, 60, 0, 32, -1, -1, 27, 27, 28, -1, 0, 0, NULL },
	{ "atvEvento", ESQ_ELEM, 0, 1, NULL, NULL, 0, 0, 0, 1, 45, 64, -1, 28, 40, -1, 0, 0, NULL },
	{ NULL, ESQ_SEQ, 1, 1, NULL, NULL, 0, 0, 0, 44, 46, -1, -1, 28, 40, -1, 0, 0, NULL },
	{ "xNome", ESQ_ELEM, 1, 1, "[!-\xC3\xBF]{1}[ -\xC3\xBF]{0,}[!-\xC3\xBF]{1}|[!-\xC3\xBF]{1}", NULL, 1, 255, 0, 45, -1, 47, 28, 28, 29, -1, 0, 0, NULL },
	{ "dtIni", ESQ_ELEM, 1, 1, "(((20(([02468][048])|([13579][26]))-02-29))|(20[0-9][0-9])-((((0[1-9])|(1[0-2]))-((0[1-9])|(1\\d)|(2[0-8])))|((((0[13578])|(1[02]))-31)|(((0[1,3-9])|(1[0-2]))-(29|30)))))", NULL, 0, 0, 0, 45, -1, 48, 29, 29, 30, -1, 0, 0, NULL },
	{ "dtFim", ESQ_ELEM, 1, 1, "(((20(([02468][048])|([13579][26]))-02-29))|(20[0-9][0-9])-((((0[1-9])|(1[0-2]))-((0[1-9])|(1\\d)|(2[0-8])))|((((0[13578])|(1[02]))-31)|(((0[1,3-9])|(1[0-2]))-(29|30)))))", NULL, 0, 0, 0, 45, -1, 49, 30, 30, 31, -1, 0, 0, NULL },
	{ NULL, ESQ_CHOICE, 1, 1, NULL, NULL, 0, 0, 0, 45, 50, -1, -1, 31, 40, -1, 0, 0, NULL },
	{ "idAtvEvt", ESQ_ELEM, 1, 1, NULL, NULL, 1, 30, 0, 49, -1, 51, 31, 31, 32, -1, 0, 0, NULL },
	{ "end", ESQ_ELEM, 1, 1, NULL, NULL, 0, 0, 0, 49, 52, -1, -1, 32, 40, -1, 0, 0, NULL },
	{ NULL, ESQ_SEQ, 1, 1, NULL, NULL, 0, 0, 0, 51, 53, -1, -1, 32, 40, -1, 0, 0, NULL },
	{ NULL, ESQ_CHOICE, 1, 1, NULL, NULL, 0, 0, 0, 52, 54, 60, -1, 32, 36, -1, 0, 0, NULL },
	{ "CEP", ESQ_ELEM, 1, 1, "[0-9]{8}", NULL, 0, 0, 0, 53, -1, 55, 32, 32, 33, -1, 0, 0, NULL },
	{ "endExt", ESQ_ELEM, 1, 1, NULL, NULL, 0, 0, 0, 53, 56, -1, -1, 33, 36, -1, 0, 0, NULL },
	{ NULL, ESQ_SEQ, 1, 1, NULL, NULL, 0, 0, 0, 55, 57, -1, -1, 33, 36, -1, 0, 0, NULL },
	{ "cEndPost", ESQ_ELEM, 1, 1, NULL, NULL, 1, 11, 0, 56, -1, 58, 33, 33, 34, -1, 0, 0, NULL },
	{ "xCidade", ESQ_ELEM, 1, 1, NULL, NULL, 1, 60, 0, 56, -1, 59, 34, 34, 35, -1, 0, 0, NULL },
	{ "xEstProvReg", ESQ_ELEM, 1, 1, NULL, NULL, 1, 60, 0, 56, -1, -1, 35, 35, 36, -1, 0, 0, NULL },
	{ "xLgr", ESQ_ELEM, 1, 1, "[!-\xC3\xBF]{1}[ -\xC3\xBF]{0,}[!-\xC3\xBF]{1}|[!-\xC3\xBF]{1}", NULL, 1, 255, 0, 52, -1, 61, 36, 36, 37, -1, 0, 0, NULL },
	{ "nro", ESQ_ELEM, 1, 1, "[!-\xC3\xBF]{1}[ -\xC3\xBF]{0,}[!-\xC3\xBF]{1}|[!-\xC3\xBF]{1}", NULL, 1, 60, 0, 52, -1, 62, 37, 37, 38, -1, 0, 0, NULL },
	{ "xCpl", ESQ_ELEM, 0, 1, "[!-\xC3\xBF]{1}[ -\xC3\xBF]{0,}[!-\xC3\xBF]{1}|[!-\xC3\xBF]{1}", NULL, 1, 156, 0, 52, -1, 63, 38, 38, 39, -1, 0, 0, NULL },
	{ "xBairro", ESQ_ELEM, 1, 1, "[!-\xC3\xBF]{1}[ -\xC3\xBF]{0,}[!-\xC3\xBF]{1}|[!-\xC3\xBF]{1}", NULL, 1, 60, 0, 52, -1, -1, 39, 39, 40, -1, 0, 0, NULL },
	{ "infoCompl", ESQ_ELEM, 0, 1, NULL, NULL, 0, 0, 0, 1, 65, -1, -1, 40, 44, -1, 0, 1, NULL },
	{ NULL, ESQ_SEQ, 1, 1, NULL, NULL, 0, 0, 0, 64, 66, -1, -1, 40, 44, -1, 0, 1, NULL },
	{ "idDocTec", ESQ_ELEM, 0, 1, NULL, NULL, 1, 40, 0, 65, -1, 67, 40, 40, 41, -1, 0, 0, NULL },
	{ "docRef", ESQ_ELEM, 0, 1, "[!-\xC3\xBF]{1}[ -\xC3\xBF]{0,}[!-\xC3\xBF]{1}|[!-\xC3\xBF]{1}", NULL, 1, 255, 0, 65, -1, 68, 41, 41, 42, -1, 0, 0, NULL },
	{ "xPed", ESQ_ELEM, 0, 1, "[!-\xC3\xBF]{1}[ -\xC3\xBF]{0,}[!-\xC3\xBF]{1}|[!-\xC3\xBF]{1}", NULL, 1, 60, 0, 65, -1, 69, 42, 42, 43, -1, 0, 0, NULL },
	{ "gItemPed", ESQ_ELEM, 0, 1, NULL, NULL, 0, 0, 0, 65, 70, 72, -1, 43, 43, -1, 0, 1, NULL },
	{ NULL, ESQ_SEQ, 1, 1, NULL, NULL, 0, 0, 0, 69, 71, -1, -1, 43, 43, -1, 0, 1, NULL },
	{ "xItemPed", ESQ_LISTA, 1, 99, NULL, NULL, 0, 0, 0, 70, -1, -1, -1, 43, 43, 0, 0, 1, &nfse_esq_serv_xItemPed },
	{ "xInfComp", ESQ_ELEM, 0, 1, "[!-\xC3\xBF]{1}[ -\xC3\xBF]{0,}[!-\xC3\xBF]{1}|[!-\xC3\xBF]{1}", NULL, 1, 2000, 0, 65, -1, -1, 43, 43, 44, -1, 1, 1, NULL },
};

const struct nfe_esq nfse_esq_serv = { "serv", nos_serv, 73, 44, 1 };

static const struct nfe_esq_no nos_valores[] = {
	{ "valores", ESQ_ELEM, 1, 1, NULL, NULL, 0, 0, 0, -1, 1, -1, -1, 0, 8, -1, 0, 0, NULL },
	{ NULL, ESQ_SEQ, 1, 1, NULL, NULL, 0, 0, 0, 0, 2, -1, -1, 0, 8, -1, 0, 0, NULL },
	{ "vCalcDR", ESQ_ELEM, 0, 1, "0|0\\.[0-9]{2}|[1-9]{1}[0-9]{0,14}(\\.[0-9]{2})?", NULL, 0, 0, 0, 1, -1, 3, 0, 0, 1, -1, 0, 0, NULL },
	{ "tpBM", ESQ_ELEM, 0, 1, NULL, valores_9, 0, 0, 0, 1, -1, 4, 1, 1, 2, -1, 0, 0, NULL },
	{ "vCalcBM", ESQ_ELEM, 0, 1, "0|0\\.[0-9]{2}|[1-9]{1}[0-9]{0,14}(\\.[0-9]{2})?", NULL, 0, 0, 0, 1, -1, 5, 2, 2, 3, -1, 0, 0, NULL },
	{ "vBC", ESQ_ELEM, 0, 1, "0|0\\.[0-9]{2}|[1-9]{1}[0-9]{0,14}(\\.[0-9]{2})?", NULL, 0, 0, 0, 1, -1, 6, 3, 3, 4, -1, 0, 0, NULL },
	{ "pAliqAplic", ESQ_ELEM, 0, 1, "0|[0-9]{1}(\\.[0-9]{2})?", NULL, 0, 0, 0, 1, -1, 7, 4, 4, 5, -1, 0, 0, NULL },
	{ "vISSQN", ESQ_ELEM, 0, 1, "0|0\\.[0-9]{2}|[1-9]{1}[0-9]{0,14}(\\.[0-9]{2})?", NULL, 0, 0, 0, 1, -1, 8, 5, 5, 6, -1, 0, 0, NULL },
	{ "vTotalRet", ESQ_ELEM, 0, 1, "0|0\\.[0-9]{2}|[1-9]{1}[0-9]{0,14}(\\.[0-9]{2})?", NULL, 0, 0, 0, 1, -1, 9, 6, 6, 7, -1, 0, 0, NULL },
	{ "vLiq", ESQ_ELEM, 1, 1, "0|0\\.[0-9]{2}|[1-9]{1}[0-9]{0,14}(\\.[0-9]{2})?", NULL, 0, 0, 0, 1, -1, -1, 7, 7, 8, -1, 0, 0, NULL },
};

const struct nfe_esq nfse_esq_valores = { "valores", nos_valores, 10, 8, 0 };

static const struct nfe_esq_no nos_IBSCBS[] = {
	{ "IBSCBS", ESQ_ELEM, 1, 1, NULL, NULL, 0, 0, 0, -1, 1, -1, -1, 0, 38, -1, 0, 0, NULL },
	{ NULL, ESQ_SEQ, 1, 1, NULL, NULL, 0, 0, 0, 0, 2, -1, -1, 0, 38, -1, 0, 0, NULL },
	{ "cLocalidadeIncid", ESQ_ELEM, 1, 1, "[0-9]{7}", NULL, 0, 0, 0, 1, -1, 3, 0, 0, 1, -1, 0, 0, NULL },
	{ "xLocalidadeIncid", ESQ_ELEM, 1, 1, "[!-\xC3\xBF]{1}[ -\xC3\xBF]{0,}[!-\xC3\xBF]{1}|[!-\xC3\xBF]{1}", NULL, 1, 600, 0, 1, -1, 4, 1, 1, 2, -1, 0, 0, NULL },
	{ "pRedutor", ESQ_ELEM, 0, 1, "0|0\\.[0-9]{2}|[1-9]{1}[0-9]{0,1}(\\.[0-9]{2})?", NULL, 0, 0, 0, 1, -1, 5, 2, 2, 3, -1, 0, 0, NULL },
	{ "valores", ESQ_ELEM, 1, 1, NULL, NULL, 0, 0, 0, 1, 6, 24, -1, 3, 14, -1, 0, 0, NULL },
	{ NULL, ESQ_SEQ, 1, 1, NULL, NULL, 0, 0, 0, 5, 7, -1, -1, 3, 14, -1, 0, 0, NULL },
	{ "vBC", ESQ_ELEM, 1, 1, "0|0\\.[0-9]{2}|[1-9]{1}[0-9]{0,14}(\\.[0-9]{2})?", NULL, 0, 0, 0, 6, -1, 8, 3, 3, 4, -1, 0, 0, NULL },
	{ "vCalcReeRepRes", ESQ_ELEM, 0, 1, "0|0\\.[0-9]{2}|[1-9]{1}[0-9]{0,14}(\\.[0-9]{2})?", NULL, 0, 0, 0, 6, -1, 9, 4, 4, 5, -1, 0, 0, NULL },
	{ "uf", ESQ_ELEM, 1, 1, NULL, NULL, 0, 0, 0, 6, 10, 14, -1, 5, 8, -1, 0, 0, NULL },
	{ NULL, ESQ_SEQ, 1, 1, NULL, NULL, 0, 0, 0, 9, 11, -1, -1, 5, 8, -1, 0, 0, NULL },
	{ "pIBSUF", ESQ_ELEM, 1, 1, "0|0\\.[0-9]{2}|[1-9]{1}[0-9]{0,1}(\\.[0-9]{2})?", NULL, 0, 0, 0, 10, -1, 12, 5, 5, 6, -1, 0, 0, NULL },
	{ "pRedAliqUF", ESQ_ELEM, 0, 1, "0|0\\.[0-9]{2}|[1-9]{1}[0-9]{0,2}(\\.[0-9]{2})?", NULL, 0, 0, 0, 10, -1, 13, 6, 6, 7, -1, 0, 0, NULL },
	{ "pAliqEfetUF", ESQ_ELEM, 1, 1, "0|0\\.[0-9]{2}|[1-9]{1}[0-9]{0,1}(\\.[0-9]{2})?", NULL, 0, 0, 0, 10, -1, -1, 7, 7, 8, -1, 0, 0, NULL },
	{ "mun", ESQ_ELEM, 1, 1, NULL, NULL, 0, 0, 0, 6, 15, 19, -1, 8, 11, -1, 0, 0, NULL },
	{ NULL, ESQ_SEQ, 1, 1, NULL, NULL, 0, 0, 0, 14, 16, -1, -1, 8, 11, -1, 0, 0, NULL },
	{ "pIBSMun", ESQ_ELEM, 1, 1, "0|0\\.[0-9]{2}|[1-9]{1}[0-9]{0,1}(\\.[0-9]{2})?", NULL, 0, 0, 0, 15, -1, 17, 8, 8, 9, -1, 0, 0, NULL },
	{ "pRedAliqMun", ESQ_ELEM, 0, 1, "0|0\\.[0-9]{2}|[1-9]{1}[0-9]{0,2}(\\.[0-9]{2})?", NULL, 0, 0, 0, 15, -1, 18, 9, 9, 10, -1, 0, 0, NULL },
	{ "pAliqEfetMun", ESQ_ELEM, 1, 1, "0|0\\.[0-9]{2}|[1-9]{1}[0-9]{0,1}(\\.[0-9]{2})?", NULL, 0, 0, 0, 15, -1, -1, 10, 10, 11, -1, 0, 0, NULL },
	{ "fed", ESQ_ELEM, 1, 1, NULL, NULL, 0, 0, 0, 6, 20, -1, -1, 11, 14, -1, 0, 0, NULL },
	{ NULL, ESQ_SEQ, 1, 1, NULL, NULL, 0, 0, 0, 19, 21, -1, -1, 11, 14, -1, 0, 0, NULL },
	{ "pCBS", ESQ_ELEM, 1, 1, "0|0\\.[0-9]{2}|[1-9]{1}[0-9]{0,1}(\\.[0-9]{2})?", NULL, 0, 0, 0, 20, -1, 22, 11, 11, 12, -1, 0, 0, NULL },
	{ "pRedAliqCBS", ESQ_ELEM, 0, 1, "0|0\\.[0-9]{2}|[1-9]{1}[0-9]{0,2}(\\.[0-9]{2})?", NULL, 0, 0, 0, 20, -1, 23, 12, 12, 13, -1, 0, 0, NULL },
	{ "pAliqEfetCBS", ESQ_ELEM, 1, 1, "0|0\\.[0-9]{2}|[1-9]{1}[0-9]{0,1}(\\.[0-9]{2})?", NULL, 0, 0, 0, 20, -1, -1, 13, 13, 14, -1, 0, 0, NULL },
	{ "totCIBS", ESQ_ELEM, 1, 1, NULL, NULL, 0, 0, 0, 1, 25, -1, -1, 14, 38, -1, 0, 0, NULL },
	{ NULL, ESQ_SEQ, 1, 1, NULL, NULL, 0, 0, 0, 24, 26, -1, -1, 14, 38, -1, 0, 0, NULL },
	{ "vTotNF", ESQ_ELEM, 1, 1, "0|0\\.[0-9]{2}|[1-9]{1}[0-9]{0,14}(\\.[0-9]{2})?", NULL, 0, 0, 0, 25, -1, 27, 14, 14, 15, -1, 0, 0, NULL },
	{ "gIBS", ESQ_ELEM, 1, 1, NULL, NULL, 0, 0, 0, 25, 28, 42, -1, 15, 22, -1, 0, 0, NULL },
	{ NULL, ESQ_SEQ, 1, 1, NULL, NULL, 0, 0, 0, 27, 29, -1, -1, 15, 22, -1, 0, 0, NULL },
	{ "vIBSTot", ESQ_ELEM, 1, 1, "0|0\\.[0-9]{2}|[1-9]{1}[0-9]{0,14}(\\.[0-9]{2})?", NULL, 0, 0, 0, 28, -1, 30, 15, 15, 16, -1, 0, 0, NULL },
	{ "gIBSCredPres", ESQ_ELEM, 0, 1, NULL, NULL, 0, 0, 0, 28, 31, 34, -1, 16, 18, -1, 0, 0, NULL },
	{ NULL, ESQ_SEQ, 1, 1, NULL, NULL, 0, 0, 0, 30, 32, -1, -1, 16, 18, -1, 0, 0, NULL },
	{ "pCredPresIBS", ESQ_ELEM, 1, 1, "0|0\\.[0-9]{2}|[1-9]{1}[0-9]{0,1}(\\.[0-9]{2})?", NULL, 0, 0, 0, 31, -1, 33, 16, 16, 17, -1, 0, 0, NULL },
	{ "vCredPresIBS", ESQ_ELEM, 1, 1, "0|0\\.[0-9]{2}|[1-9]{1}[0-9]{0,14}(\\.[0-9]{2})?", NULL, 0, 0, 0, 31, -1, -1, 17, 17, 18, -1, 0, 0, NULL },
	{ "gIBSUFTot", ESQ_ELEM, 1, 1, NULL, NULL, 0, 0, 0, 28, 35, 38, -1, 18, 20, -1, 0, 0, NULL },
	{ NULL, ESQ_SEQ, 1, 1, NULL, NULL, 0, 0, 0, 34, 36, -1, -1, 18, 20, -1, 0, 0, NULL },
	{ "vDifUF", ESQ_ELEM, 0, 1, "0|0\\.[0-9]{2}|[1-9]{1}[0-9]{0,14}(\\.[0-9]{2})?", NULL, 0, 0, 0, 35, -1, 37, 18, 18, 19, -1, 0, 0, NULL },
	{ "vIBSUF", ESQ_ELEM, 1, 1, "0|0\\.[0-9]{2}|[1-9]{1}[0-9]{0,14}(\\.[0-9]{2})?", NULL, 0, 0, 0, 35, -1, -1, 19, 19, 20, -1, 0, 0, NULL },
	{ "gIBSMunTot", ESQ_ELEM, 1, 1, NULL, NULL, 0, 0, 0, 28, 39, -1, -1, 20, 22, -1, 0, 0, NULL },
	{ NULL, ESQ_SEQ, 1, 1, NULL, NULL, 0, 0, 0, 38, 40, -1, -1, 20, 22, -1, 0, 0, NULL },
	{ "vDifMun", ESQ_ELEM, 0, 1, "0|0\\.[0-9]{2}|[1-9]{1}[0-9]{0,14}(\\.[0-9]{2})?", NULL, 0, 0, 0, 39, -1, 41, 20, 20, 21, -1, 0, 0, NULL },
	{ "vIBSMun", ESQ_ELEM, 1, 1, "0|0\\.[0-9]{2}|[1-9]{1}[0-9]{0,14}(\\.[0-9]{2})?", NULL, 0, 0, 0, 39, -1, -1, 21, 21, 22, -1, 0, 0, NULL },
	{ "gCBS", ESQ_ELEM, 1, 1, NULL, NULL, 0, 0, 0, 25, 43, 50, -1, 22, 26, -1, 0, 0, NULL },
	{ NULL, ESQ_SEQ, 1, 1, NULL, NULL, 0, 0, 0, 42, 44, -1, -1, 22, 26, -1, 0, 0, NULL },
	{ "gCBSCredPres", ESQ_ELEM, 0, 1, NULL, NULL, 0, 0, 0, 43, 45, 48, -1, 22, 24, -1, 0, 0, NULL },
	{ NULL, ESQ_SEQ, 1, 1, NULL, NULL, 0, 0, 0, 44, 46, -1, -1, 22, 24, -1, 0, 0, NULL },
	{ "pCredPresCBS", ESQ_ELEM, 1, 1, "0|0\\.[0-9]{2}|[1-9]{1}[0-9]{0,1}(\\.[0-9]{2})?", NULL, 0, 0, 0, 45, -1, 47, 22, 22, 23, -1, 0, 0, NULL },
	{ "vCredPresCBS", ESQ_ELEM, 1, 1, "0|0\\.[0-9]{2}|[1-9]{1}[0-9]{0,14}(\\.[0-9]{2})?", NULL, 0, 0, 0, 45, -1, -1, 23, 23, 24, -1, 0, 0, NULL },
	{ "vDifCBS", ESQ_ELEM, 0, 1, "0|0\\.[0-9]{2}|[1-9]{1}[0-9]{0,14}(\\.[0-9]{2})?", NULL, 0, 0, 0, 43, -1, 49, 24, 24, 25, -1, 0, 0, NULL },
	{ "vCBS", ESQ_ELEM, 1, 1, "0|0\\.[0-9]{2}|[1-9]{1}[0-9]{0,14}(\\.[0-9]{2})?", NULL, 0, 0, 0, 43, -1, -1, 25, 25, 26, -1, 0, 0, NULL },
	{ "gTribRegular", ESQ_ELEM, 0, 1, NULL, NULL, 0, 0, 0, 25, 51, 58, -1, 26, 32, -1, 0, 0, NULL },
	{ NULL, ESQ_SEQ, 1, 1, NULL, NULL, 0, 0, 0, 50, 52, -1, -1, 26, 32, -1, 0, 0, NULL },
	{ "pAliqEfeRegIBSUF", ESQ_ELEM, 1, 1, "0|0\\.[0-9]{2}|[1-9]{1}[0-9]{0,1}(\\.[0-9]{2})?", NULL, 0, 0, 0, 51, -1, 53, 26, 26, 27, -1, 0, 0, NULL },
	{ "vTribRegIBSUF", ESQ_ELEM, 1, 1, "0|0\\.[0-9]{2}|[1-9]{1}[0-9]{0,14}(\\.[0-9]{2})?", NULL, 0, 0, 0, 51, -1, 54, 27, 27, 28, -1, 0, 0, NULL },
	{ "pAliqEfeRegIBSMun", ESQ_ELEM, 1, 1, "0|0\\.[0-9]{2}|[1-9]{1}[0-9]{0,1}(\\.[0-9]{2})?", NULL, 0, 0, 0, 51, -1, 55, 28, 28, 29, -1, 0, 0, NULL },
	{ "vTribRegIBSMun", ESQ_ELEM, 1, 1, "0|0\\.[0-9]{2}|[1-9]{1}[0-9]{0,14}(\\.[0-9]{2})?", NULL, 0, 0, 0, 51, -1, 56, 29, 29, 30, -1, 0, 0, NULL },
	{ "pAliqEfeRegCBS", ESQ_ELEM, 1, 1, "0|0\\.[0-9]{2}|[1-9]{1}[0-9]{0,1}(\\.[0-9]{2})?", NULL, 0, 0, 0, 51, -1, 57, 30, 30, 31, -1, 0, 0, NULL },
	{ "vTribRegCBS", ESQ_ELEM, 1, 1, "0|0\\.[0-9]{2}|[1-9]{1}[0-9]{0,14}(\\.[0-9]{2})?", NULL, 0, 0, 0, 51, -1, -1, 31, 31, 32, -1, 0, 0, NULL },
	{ "gTribCompraGov", ESQ_ELEM, 0, 1, NULL, NULL, 0, 0, 0, 25, 59, -1, -1, 32, 38, -1, 0, 0, NULL },
	{ NULL, ESQ_SEQ, 1, 1, NULL, NULL, 0, 0, 0, 58, 60, -1, -1, 32, 38, -1, 0, 0, NULL },
	{ "pIBSUF", ESQ_ELEM, 1, 1, "0|0\\.[0-9]{2}|[1-9]{1}[0-9]{0,1}(\\.[0-9]{2})?", NULL, 0, 0, 0, 59, -1, 61, 32, 32, 33, -1, 0, 0, NULL },
	{ "vIBSUF", ESQ_ELEM, 1, 1, "0|0\\.[0-9]{2}|[1-9]{1}[0-9]{0,14}(\\.[0-9]{2})?", NULL, 0, 0, 0, 59, -1, 62, 33, 33, 34, -1, 0, 0, NULL },
	{ "pIBSMun", ESQ_ELEM, 1, 1, "0|0\\.[0-9]{2}|[1-9]{1}[0-9]{0,1}(\\.[0-9]{2})?", NULL, 0, 0, 0, 59, -1, 63, 34, 34, 35, -1, 0, 0, NULL },
	{ "vIBSMun", ESQ_ELEM, 1, 1, "0|0\\.[0-9]{2}|[1-9]{1}[0-9]{0,14}(\\.[0-9]{2})?", NULL, 0, 0, 0, 59, -1, 64, 35, 35, 36, -1, 0, 0, NULL },
	{ "pCBS", ESQ_ELEM, 1, 1, "0|0\\.[0-9]{2}|[1-9]{1}[0-9]{0,1}(\\.[0-9]{2})?", NULL, 0, 0, 0, 59, -1, 65, 36, 36, 37, -1, 0, 0, NULL },
	{ "vCBS", ESQ_ELEM, 1, 1, "0|0\\.[0-9]{2}|[1-9]{1}[0-9]{0,14}(\\.[0-9]{2})?", NULL, 0, 0, 0, 59, -1, -1, 37, 37, 38, -1, 0, 0, NULL },
};

const struct nfe_esq nfse_esq_IBSCBS = { "IBSCBS", nos_IBSCBS, 66, 38, 0 };

static const struct nfe_esq_no nos_e101101[] = {
	{ "e101101", ESQ_ELEM, 1, 1, NULL, NULL, 0, 0, 0, -1, 1, -1, -1, 0, 3, -1, 0, 0, NULL },
	{ NULL, ESQ_SEQ, 1, 1, NULL, NULL, 0, 0, 0, 0, 2, -1, -1, 0, 3, -1, 0, 0, NULL },
	{ "xDesc", ESQ_ELEM, 1, 1, NULL, valores_10, 0, 0, 0, 1, -1, 3, 0, 0, 1, -1, 0, 0, NULL },
	{ "cMotivo", ESQ_ELEM, 1, 1, NULL, valores_11, 0, 0, 0, 1, -1, 4, 1, 1, 2, -1, 0, 0, NULL },
	{ "xMotivo", ESQ_ELEM, 1, 1, "[!-\xC3\xBF]{1}[ -\xC3\xBF]{0,}[!-\xC3\xBF]{1}|[!-\xC3\xBF]{1}", NULL, 15, 255, 0, 1, -1, -1, 2, 2, 3, -1, 0, 0, NULL },
};

const struct nfe_esq nfse_esq_e101101 = { "e101101", nos_e101101, 5, 3, 0 };

static const struct nfe_esq_no nos_e105102[] = {
	{ "e105102", ESQ_ELEM, 1, 1, NULL, NULL, 0, 0, 0, -1, 1, -1, -1, 0, 4, -1, 0, 0, NULL },
	{ NULL, ESQ_SEQ, 1, 1, NULL, NULL, 0, 0, 0, 0, 2, -1, -1, 0, 4, -1, 0, 0, NULL },
	{ "xDesc", ESQ_ELEM, 1, 1, NULL, valores_12, 0, 0, 0, 1, -1, 3, 0, 0, 1, -1, 0, 0, NULL },
	{ "cMotivo", ESQ_ELEM, 1, 1, NULL, valores_0, 0, 0, 0, 1, -1, 4, 1, 1, 2, -1, 0, 0, NULL },
	{ "xMotivo", ESQ_ELEM, 0, 1, "[!-\xC3\xBF]{1}[ -\xC3\xBF]{0,}[!-\xC3\xBF]{1}|[!-\xC3\xBF]{1}", NULL, 15, 255, 0, 1, -1, 5, 2, 2, 3, -1, 0, 0, NULL },
	{ "chSubstituta", ESQ_ELEM, 1, 1, "[0-9]{50}", NULL, 0, 50, 0, 1, -1, -1, 3, 3, 4, -1, 0, 0, NULL },
};

const struct nfe_esq nfse_esq_e105102 = { "e105102", nos_e105102, 6, 4, 0 };

/* clang-format on */
