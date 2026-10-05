/* Gerado por tools/gerar_padroes.py a partir de tests/schemas/nfse.
 * Não edite à mão: rode `python3 "$(pkg-config --variable=ferramentas libnfe)/gerar_padroes.py" --config tools/documento.json`.
 *
 * Padrões (NFSE_PADRAO_*) na sintaxe de expressões regulares do XML Schema,
 * já ancorados ao valor inteiro; use com nfe_valida_padrao() (valida.h). */

#ifndef LIBNFSE_PADROES_H
#define LIBNFSE_PADROES_H

/* clang-format off */
/* TVerNFSe (base xs:string) */
#define NFSE_PADRAO_TVerNFSe "1\\.00|1\\.01"
#define NFSE_TAM_MAX_TVerNFSe 4

/* TSString (base xs:string) */
#define NFSE_PADRAO_TSString "[!-\xC3\xBF]{1}[ -\xC3\xBF]{0,}[!-\xC3\xBF]{1}|[!-\xC3\xBF]{1}"

/* TSStringComQuebraDeLinha (base xs:string) */
#define NFSE_PADRAO_TSStringComQuebraDeLinha "[\\s\\S!-\xC3\xBF]{1}[\\s\\S -\xC3\xBF]{0,}[\\s\\S!-\xC3\xBF]{1}|[\\s\\S!-\xC3\xBF]{1}"

/* TSIdNFSe (base xs:string) */
#define NFSE_PADRAO_TSIdNFSe "NFS[0-9]{50}"
#define NFSE_TAM_MAX_TSIdNFSe 53

/* TSIdDPS (base xs:string) */
#define NFSE_PADRAO_TSIdDPS "DPS[0-9]{42}"
#define NFSE_TAM_MAX_TSIdDPS 45

/* TSTipoAmbiente (base xs:string) */
#define NFSE_VALORES_TSTipoAmbiente "1", "2"

/* TSAmbGeradorNFSe (base xs:string) */
#define NFSE_VALORES_TSAmbGeradorNFSe "1", "2"

/* TSAmbGeradorEvt (base xs:string) */
#define NFSE_VALORES_TSAmbGeradorEvt "1", "2", "3"

/* TSTipoEmissao (base xs:string) */
#define NFSE_VALORES_TSTipoEmissao "1", "2"

/* TSProcEmissao (base xs:string) */
#define NFSE_VALORES_TSProcEmissao "1", "2", "3"

/* TSData (base xs:string) */
#define NFSE_PADRAO_TSData "(((20(([02468][048])|([13579][26]))-02-29))|(20[0-9][0-9])-((((0[1-9])|(1[0-2]))-((0[1-9])|(1\\d)|(2[0-8])))|((((0[13578])|(1[02]))-31)|(((0[1,3-9])|(1[0-2]))-(29|30)))))"

/* TSDateTimeUTC (base xs:string) */
#define NFSE_PADRAO_TSDateTimeUTC "(((20(([02468][048])|([13579][26]))-02-29))|(20[0-9][0-9])-((((0[1-9])|(1[0-2]))-((0[1-9])|(1\\d)|(2[0-8])))|((((0[13578])|(1[02]))-31)|(((0[1,3-9])|(1[0-2]))-(29|30)))))T(20|21|22|23|[0-1]\\d):[0-5]\\d:[0-5]\\d([\\-,\\+](0[0-9]|10|11):00|([\\+](12):00))"

/* TSVerAplic (base TSString) */
#define NFSE_PADRAO_TSVerAplic NFSE_PADRAO_TSString
#define NFSE_TAM_MIN_TSVerAplic 1
#define NFSE_TAM_MAX_TSVerAplic 20

/* TSSerieDPS (base xs:string) */
#define NFSE_PADRAO_TSSerieDPS "^0{0,4}\\d{1,5}$"
#define NFSE_TAM_MAX_TSSerieDPS 5

/* TSEmitenteDPS (base xs:string) */
#define NFSE_VALORES_TSEmitenteDPS "1", "2", "3"

/* TSMotivoEmisTI (base xs:string) */
#define NFSE_VALORES_TSMotivoEmisTI "1", "2", "3", "4"

/* TSChaveNFSe (base xs:string) */
#define NFSE_PADRAO_TSChaveNFSe "[0-9]{50}"
#define NFSE_TAM_MAX_TSChaveNFSe 50

/* TSChaveNFe (base xs:string) */
#define NFSE_PADRAO_TSChaveNFe "[0-9]{44}"
#define NFSE_TAM_MAX_TSChaveNFe 44

/* TSCodJustCanc (base xs:string) */
#define NFSE_VALORES_TSCodJustCanc "1", "2", "9"

/* TSCodJustSubst (base xs:string) */
#define NFSE_VALORES_TSCodJustSubst "01", "02", "03", "04", "05", "99"

/* TSCodJustAnaliseFiscalCanc (base xs:string) */
#define NFSE_VALORES_TSCodJustAnaliseFiscalCanc "1", "2", "9"

/* TSCodMotivoRejeicao (base xs:string) */
#define NFSE_VALORES_TSCodMotivoRejeicao "1", "2", "3", "4", "5", "9"

/* TSCodJustAnaliseFiscalCancDef (base xs:string) */
#define NFSE_VALORES_TSCodJustAnaliseFiscalCancDef "1"

/* TSCodJustAnaliseFiscalCancIndef (base xs:string) */
#define NFSE_VALORES_TSCodJustAnaliseFiscalCancIndef "1", "2"

/* TSNumProcAdmAnaliseFiscalCanc (base xs:string) */
#define NFSE_PADRAO_TSNumProcAdmAnaliseFiscalCanc "[0-9]{1,30}"
#define NFSE_TAM_MIN_TSNumProcAdmAnaliseFiscalCanc 1
#define NFSE_TAM_MAX_TSNumProcAdmAnaliseFiscalCanc 30

/* TSCodAutorManifestacao (base xs:string) */
#define NFSE_VALORES_TSCodAutorManifestacao "1", "2", "3"

/* TSMotivo (base TSString) */
#define NFSE_PADRAO_TSMotivo NFSE_PADRAO_TSString
#define NFSE_TAM_MIN_TSMotivo 15
#define NFSE_TAM_MAX_TSMotivo 255

/* TSCNPJ (base xs:string) */
#define NFSE_PADRAO_TSCNPJ "[0-9]{14}"
#define NFSE_TAM_MAX_TSCNPJ 14

/* TSCPF (base xs:string) */
#define NFSE_PADRAO_TSCPF "[0-9]{11}"
#define NFSE_TAM_MAX_TSCPF 11

/* TSCAEPF (base xs:string) */
#define NFSE_PADRAO_TSCAEPF "[0-9]{14}"
#define NFSE_TAM_MAX_TSCAEPF 14

/* TSNIF (base xs:string) */
#define NFSE_TAM_MIN_TSNIF 1
#define NFSE_TAM_MAX_TSNIF 40

/* TSCodNaoNIF (base xs:string) */
#define NFSE_VALORES_TSCodNaoNIF "0", "1", "2"

/* TSInscMun (base xs:string) */
#define NFSE_TAM_MIN_TSInscMun 1
#define NFSE_TAM_MAX_TSInscMun 15

/* TSNomeRazaoSocial (base xs:string) */
#define NFSE_TAM_MIN_TSNomeRazaoSocial 1
#define NFSE_TAM_MAX_TSNomeRazaoSocial 300

/* TSNomeFantasia (base xs:string) */
#define NFSE_TAM_MIN_TSNomeFantasia 1
#define NFSE_TAM_MAX_TSNomeFantasia 150

/* TSLogradouro (base TSString) */
#define NFSE_PADRAO_TSLogradouro NFSE_PADRAO_TSString
#define NFSE_TAM_MIN_TSLogradouro 1
#define NFSE_TAM_MAX_TSLogradouro 255

/* TSNumeroEndereco (base TSString) */
#define NFSE_PADRAO_TSNumeroEndereco NFSE_PADRAO_TSString
#define NFSE_TAM_MIN_TSNumeroEndereco 1
#define NFSE_TAM_MAX_TSNumeroEndereco 60

/* TSComplementoEndereco (base TSString) */
#define NFSE_PADRAO_TSComplementoEndereco NFSE_PADRAO_TSString
#define NFSE_TAM_MIN_TSComplementoEndereco 1
#define NFSE_TAM_MAX_TSComplementoEndereco 156

/* TSBairro (base TSString) */
#define NFSE_PADRAO_TSBairro NFSE_PADRAO_TSString
#define NFSE_TAM_MIN_TSBairro 1
#define NFSE_TAM_MAX_TSBairro 60

/* TSUF (base xs:string) */
#define NFSE_VALORES_TSUF "AC", "AL", "AM", "AP", "BA", "CE", "DF", "ES", "GO", "MA", "MG", "MS", "MT", "PA", "PB", "PE", "PI", "PR", "RJ", "RN", "RO", "RR", "RS", "SC", "SE", "SP", "TO"

/* TSCEP (base xs:string) */
#define NFSE_PADRAO_TSCEP "[0-9]{8}"

/* TSCodigoEndPostal (base xs:string) */
#define NFSE_TAM_MIN_TSCodigoEndPostal 1
#define NFSE_TAM_MAX_TSCodigoEndPostal 11

/* TSCidade (base xs:string) */
#define NFSE_TAM_MIN_TSCidade 1
#define NFSE_TAM_MAX_TSCidade 60

/* TSEstadoProvRegiao (base xs:string) */
#define NFSE_TAM_MIN_TSEstadoProvRegiao 1
#define NFSE_TAM_MAX_TSEstadoProvRegiao 60

/* TSEnderCompletoExt (base TSString) */
#define NFSE_PADRAO_TSEnderCompletoExt NFSE_PADRAO_TSString
#define NFSE_TAM_MIN_TSEnderCompletoExt 1
#define NFSE_TAM_MAX_TSEnderCompletoExt 255

/* TSTelefone (base xs:string) */
#define NFSE_PADRAO_TSTelefone "[0-9]{6,20}"

/* TSEmail (base TSString) */
#define NFSE_PADRAO_TSEmail NFSE_PADRAO_TSString
#define NFSE_TAM_MIN_TSEmail 1
#define NFSE_TAM_MAX_TSEmail 80

/* TCCodTribMun (base xs:string) */
#define NFSE_PADRAO_TCCodTribMun "[0-9]{3}"

/* TSCodMoeda (base xs:string) */
#define NFSE_PADRAO_TSCodMoeda "[0-9]{3}"
#define NFSE_TAM_MAX_TSCodMoeda 3

/* TSModoPrestacao (base xs:string) */
#define NFSE_VALORES_TSModoPrestacao "0", "1", "2", "3", "4"

/* TSVincPrest (base xs:string) */
#define NFSE_VALORES_TSVincPrest "0", "1", "2", "3", "4", "5", "6", "9"

/* TSMecAFComExPrest (base xs:string) */
#define NFSE_VALORES_TSMecAFComExPrest "00", "01", "02", "03", "04", "05", "06", "07", "08"

/* TSMecAFComExToma (base xs:string) */
#define NFSE_VALORES_TSMecAFComExToma "00", "01", "02", "03", "04", "05", "06", "07", "08", "09", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26"

/* TSMovTempBens (base xs:string) */
#define NFSE_VALORES_TSMovTempBens "0", "1", "2", "3"

/* TSCategVeic (base xs:string) */
#define NFSE_VALORES_TSCategVeic "00", "01", "02", "03", "04", "05", "06", "07", "08", "09", "10"

/* TSNumDocImport (base TSString) */
#define NFSE_PADRAO_TSNumDocImport NFSE_PADRAO_TSString
#define NFSE_TAM_MIN_TSNumDocImport 1
#define NFSE_TAM_MAX_TSNumDocImport 12

/* TSNumRegExport (base TSString) */
#define NFSE_PADRAO_TSNumRegExport NFSE_PADRAO_TSString
#define NFSE_TAM_MIN_TSNumRegExport 1
#define NFSE_TAM_MAX_TSNumRegExport 12

/* TSEnvMDIC (base xs:string) */
#define NFSE_VALORES_TSEnvMDIC "0", "1"

/* TSPlaca (base xs:string) */
#define NFSE_PADRAO_TSPlaca "[A-Z]{2,3}[0-9]{4}|[A-Z]{3,4}[0-9]{3}"

/* TSCodAcessoPed (base xs:string) */
#define NFSE_PADRAO_TSCodAcessoPed "[a-zA-Z0-9]{10}"

/* TSCodContrato (base xs:string) */
#define NFSE_PADRAO_TSCodContrato "[a-zA-Z0-9]{4}"

/* TSNumEixos (base xs:string) */
#define NFSE_PADRAO_TSNumEixos "[0-9]{1,2}"

/* TSRodagem (base xs:string) */
#define NFSE_VALORES_TSRodagem "1", "2"

/* TSSentido (base xs:string) */
#define NFSE_PADRAO_TSSentido "[0-9]{1,3}"

/* TSIdeEvento (base xs:string) */
#define NFSE_TAM_MIN_TSIdeEvento 1
#define NFSE_TAM_MAX_TSIdeEvento 30

/* TSCodObra (base xs:string) */
#define NFSE_TAM_MIN_TSCodObra 1
#define NFSE_TAM_MAX_TSCodObra 30

/* TSCodCIB (base xs:string) */
#define NFSE_TAM_MIN_TSCodCIB 8
#define NFSE_TAM_MAX_TSCodCIB 8

/* TSInscImobFisc (base xs:string) */
#define NFSE_TAM_MIN_TSInscImobFisc 1
#define NFSE_TAM_MAX_TSInscImobFisc 30

/* TSDRT (base xs:string) */
#define NFSE_TAM_MIN_TSDRT 1
#define NFSE_TAM_MAX_TSDRT 40

/* TSDescInfCompl (base TSString) */
#define NFSE_PADRAO_TSDescInfCompl NFSE_PADRAO_TSString
#define NFSE_TAM_MIN_TSDescInfCompl 1
#define NFSE_TAM_MAX_TSDescInfCompl 2000

/* TSCodVerificacao (base xs:string) */
#define NFSE_PADRAO_TSCodVerificacao "[a-zA-Z0-9]{1,9}"
#define NFSE_TAM_MIN_TSCodVerificacao 1
#define NFSE_TAM_MAX_TSCodVerificacao 9

/* TSSerieNFNFS (base xs:string) */
#define NFSE_PADRAO_TSSerieNFNFS "[a-zA-Z0-9]{1,15}"
#define NFSE_TAM_MIN_TSSerieNFNFS 1
#define NFSE_TAM_MAX_TSSerieNFNFS 15

/* TSIdeDedRed (base xs:string) */
#define NFSE_VALORES_TSIdeDedRed "1", "2", "3", "4", "5", "6", "7", "8", "9", "99"

/* TSDescOutDedRed (base TSString) */
#define NFSE_PADRAO_TSDescOutDedRed NFSE_PADRAO_TSString
#define NFSE_TAM_MIN_TSDescOutDedRed 1
#define NFSE_TAM_MAX_TSDescOutDedRed 150

/* TSNumBeneficioMunicipal (base xs:string) */
#define NFSE_PADRAO_TSNumBeneficioMunicipal "[0-9]{14}"

/* TSOpExigSuspensa (base xs:string) */
#define NFSE_VALORES_TSOpExigSuspensa "1", "2"

/* TSNumProcExigSuspensa (base xs:string) */
#define NFSE_PADRAO_TSNumProcExigSuspensa "[0-9]{30}"

/* TSOpSimpNac (base xs:string) */
#define NFSE_VALORES_TSOpSimpNac "1", "2", "3"

/* TSRegimeApuracaoSimpNac (base xs:string) */
#define NFSE_VALORES_TSRegimeApuracaoSimpNac "1", "2", "3"

/* TSOpSNLimUltrap (base xs:string) */
#define NFSE_VALORES_TSOpSNLimUltrap "0", "1"

/* TSRegEspTrib (base xs:string) */
#define NFSE_VALORES_TSRegEspTrib "0", "1", "2", "3", "4", "5", "6", "9"

/* TSTribISSQN (base xs:string) */
#define NFSE_VALORES_TSTribISSQN "1", "2", "3", "4"

/* TSNumProcesso (base TSString) */
#define NFSE_PADRAO_TSNumProcesso NFSE_PADRAO_TSString
#define NFSE_TAM_MIN_TSNumProcesso 1
#define NFSE_TAM_MAX_TSNumProcesso 30

/* TSTipoImunidadeISSQN (base xs:string) */
#define NFSE_VALORES_TSTipoImunidadeISSQN "0", "1", "2", "3", "4", "5"

/* TSTipoRetISSQN (base xs:string) */
#define NFSE_VALORES_TSTipoRetISSQN "1", "2", "3"

/* TSTipoCST (base xs:string) */
#define NFSE_VALORES_TSTipoCST "00", "01", "02", "03", "04", "05", "06", "07", "08", "09", "49", "50", "51", "52", "53", "54", "55", "56", "60", "61", "62", "63", "64", "65", "66", "67", "70", "71", "72", "73", "74", "75", "98", "99"

/* TSOpConsumServ (base xs:string) */
#define NFSE_VALORES_TSOpConsumServ "0", "1"

/* TSTipoRetPISCofins (base xs:string) */
#define NFSE_VALORES_TSTipoRetPISCofins "0", "1", "2", "3", "4", "5", "6", "7", "8", "9"

/* TSTipoIndTotTrib (base xs:string) */
#define NFSE_VALORES_TSTipoIndTotTrib "0"

/* TBMISSQN (base xs:string) */
#define NFSE_VALORES_TBMISSQN "1", "2", "3", "4"

/* TStat (base xs:string) */
#define NFSE_VALORES_TStat "100", "102", "103", "107"

/* TSNumDPS (base xs:string) */
#define NFSE_PADRAO_TSNumDPS "[1-9]{1}[0-9]{0,14}"
#define NFSE_TAM_MAX_TSNumDPS 15

/* TSNNFSe (base xs:string) */
#define NFSE_PADRAO_TSNNFSe "[1-9]{1}[0-9]{0,12}"
#define NFSE_TAM_MAX_TSNNFSe 13

/* TSNDFSe (base xs:string) */
#define NFSE_PADRAO_TSNDFSe "[1-9]{1}[0-9]{0,12}"
#define NFSE_TAM_MAX_TSNDFSe 13

/* TSCodMunIBGE (base xs:string) */
#define NFSE_PADRAO_TSCodMunIBGE "[0-9]{7}"

/* TSCodPaisISO (base xs:string) */
#define NFSE_PADRAO_TSCodPaisISO "[A-Z]{2}"

/* TSCodTribNac (base xs:string) */
#define NFSE_PADRAO_TSCodTribNac "[0-9]{6}"

/* TSCodNBS (base xs:string) */
#define NFSE_PADRAO_TSCodNBS "[0-9]{9}"

/* TSCodigoInternoContribuinte (base TSString) */
#define NFSE_PADRAO_TSCodigoInternoContribuinte "[a-zA-Z0-9]{1,20}"
#define NFSE_TAM_MIN_TSCodigoInternoContribuinte 1
#define NFSE_TAM_MAX_TSCodigoInternoContribuinte 20

/* TSDesc40 (base TSString) */
#define NFSE_PADRAO_TSDesc40 NFSE_PADRAO_TSString
#define NFSE_TAM_MIN_TSDesc40 1
#define NFSE_TAM_MAX_TSDesc40 40

/* TSDesc150 (base TSString) */
#define NFSE_PADRAO_TSDesc150 NFSE_PADRAO_TSString
#define NFSE_TAM_MIN_TSDesc150 1
#define NFSE_TAM_MAX_TSDesc150 150

/* TSDesc255 (base TSString) */
#define NFSE_PADRAO_TSDesc255 NFSE_PADRAO_TSString
#define NFSE_TAM_MIN_TSDesc255 1
#define NFSE_TAM_MAX_TSDesc255 255

/* TSDesc600 (base TSString) */
#define NFSE_PADRAO_TSDesc600 NFSE_PADRAO_TSString
#define NFSE_TAM_MIN_TSDesc600 1
#define NFSE_TAM_MAX_TSDesc600 600

/* TSDesc500 (base TSString) */
#define NFSE_PADRAO_TSDesc500 NFSE_PADRAO_TSString
#define NFSE_TAM_MIN_TSDesc500 1
#define NFSE_TAM_MAX_TSDesc500 500

/* TSDesc1000 (base TSString) */
#define NFSE_PADRAO_TSDesc1000 NFSE_PADRAO_TSString
#define NFSE_TAM_MIN_TSDesc1000 1
#define NFSE_TAM_MAX_TSDesc1000 1000

/* TSDesc2000 (base TSStringComQuebraDeLinha) */
#define NFSE_PADRAO_TSDesc2000 NFSE_PADRAO_TSStringComQuebraDeLinha
#define NFSE_TAM_MIN_TSDesc2000 1
#define NFSE_TAM_MAX_TSDesc2000 2000

/* TSDec15V2 (base xs:string) */
#define NFSE_PADRAO_TSDec15V2 "0|0\\.[0-9]{2}|[1-9]{1}[0-9]{0,14}(\\.[0-9]{2})?"

/* TSDec1V2 (base xs:string) */
#define NFSE_PADRAO_TSDec1V2 "0|[0-9]{1}(\\.[0-9]{2})?"

/* TSDec2V2 (base xs:string) */
#define NFSE_PADRAO_TSDec2V2 "0|0\\.[0-9]{2}|[1-9]{1}[0-9]{0,1}(\\.[0-9]{2})?"

/* TSDec3V2 (base xs:string) */
#define NFSE_PADRAO_TSDec3V2 "0|0\\.[0-9]{2}|[1-9]{1}[0-9]{0,2}(\\.[0-9]{2})?"

/* TSNum3Dig (base xs:string) */
#define NFSE_PADRAO_TSNum3Dig "[0-9]{1}[0-9]{0,2}"
#define NFSE_TAM_MAX_TSNum3Dig 3

/* TSNum7Dig (base xs:string) */
#define NFSE_PADRAO_TSNum7Dig "[0-9]{7}"
#define NFSE_TAM_MAX_TSNum7Dig 7

/* TSNum14Dig (base xs:string) */
#define NFSE_PADRAO_TSNum14Dig "[0-9]{14}"
#define NFSE_TAM_MAX_TSNum14Dig 14

/* TSNum15Dig (base xs:string) */
#define NFSE_PADRAO_TSNum15Dig "[0-9]{15}"
#define NFSE_TAM_MAX_TSNum15Dig 15

/* TSIdPedRegEvt (base xs:string) */
#define NFSE_PADRAO_TSIdPedRegEvt "PRE[0-9]{56}"
#define NFSE_TAM_MAX_TSIdPedRegEvt 59

/* TSIdEvento (base xs:string) */
#define NFSE_PADRAO_TSIdEvento "EVT[0-9]{59}"
#define NFSE_TAM_MAX_TSIdEvento 62

/* TSCodigoEventoNFSe (base xs:string) */
#define NFSE_VALORES_TSCodigoEventoNFSe "e101101", "e105102", "e105104", "e105105", "e305101"

/* TSIdNumEvento (base xs:string) */
#define NFSE_PADRAO_TSIdNumEvento "[0-9]{59}"

/* TSNumDFe (base xs:string) */
#define NFSE_PADRAO_TSNumDFe "[0-9]{1,13}"

/* TSSituacaoCadastroContribuinte (base TSString) */
#define NFSE_PADRAO_TSSituacaoCadastroContribuinte NFSE_PADRAO_TSString
#define NFSE_TAM_MIN_TSSituacaoCadastroContribuinte 1
#define NFSE_TAM_MAX_TSSituacaoCadastroContribuinte 150

/* TSMotivoSituacaoCadastroContribuinte (base TSString) */
#define NFSE_PADRAO_TSMotivoSituacaoCadastroContribuinte NFSE_PADRAO_TSString
#define NFSE_TAM_MIN_TSMotivoSituacaoCadastroContribuinte 1

/* TSSituacaoEmissaoNFSE (base xs:string) */
#define NFSE_VALORES_TSSituacaoEmissaoNFSE "0", "1"

/* TSCategoriaServico (base xs:string) */
#define NFSE_VALORES_TSCategoriaServico "1", "2", "3", "4", "5"

/* TCObjetoLocacao (base xs:string) */
#define NFSE_VALORES_TCObjetoLocacao "1", "2", "3", "4", "5", "6"

/* TSExtensaoTotal (base TSString) */
#define NFSE_PADRAO_TSExtensaoTotal "[0-9]{1,5}"
#define NFSE_TAM_MIN_TSExtensaoTotal 1
#define NFSE_TAM_MAX_TSExtensaoTotal 5

/* TSNumeroPostes (base TSString) */
#define NFSE_PADRAO_TSNumeroPostes "[0-9]{1,6}"
#define NFSE_TAM_MIN_TSNumeroPostes 1
#define NFSE_TAM_MAX_TSNumeroPostes 6

/* TSRTCFinNFSe (base xs:string) */
#define NFSE_VALORES_TSRTCFinNFSe "0"

/* TSRTCIndFinal (base xs:string) */
#define NFSE_VALORES_TSRTCIndFinal "0", "1"

/* TSRTCCodIndOp (base xs:string) */
#define NFSE_PADRAO_TSRTCCodIndOp "[0-9]{6}"

/* TSRTCTpOper (base xs:string) */
#define NFSE_VALORES_TSRTCTpOper "1", "2", "3", "4", "5"

/* TSRTCTpEnteGov (base xs:string) */
#define NFSE_VALORES_TSRTCTpEnteGov "1", "2", "3", "4"

/* TSRTCIndDest (base xs:string) */
#define NFSE_VALORES_TSRTCIndDest "0", "1"

/* TSRTCTpReeRepRes (base xs:string) */
#define NFSE_VALORES_TSRTCTpReeRepRes "01", "02", "03", "04", "99"

/* TSRTCTipoChaveDFe (base xs:string) */
#define NFSE_VALORES_TSRTCTipoChaveDFe "1", "2", "3", "9"

/* TSRTCChaveDFe (base xs:string) */
#define NFSE_TAM_MIN_TSRTCChaveDFe 1
#define NFSE_TAM_MAX_TSRTCChaveDFe 50

/* TSRTCCodSitTrib (base xs:string) */
#define NFSE_PADRAO_TSRTCCodSitTrib "[0-9]{3}"

/* TSRTCCodClassTrib (base xs:string) */
#define NFSE_PADRAO_TSRTCCodClassTrib "[0-9]{6}"

/* TSRTCCodCredPres (base xs:string) */
#define NFSE_PADRAO_TSRTCCodCredPres "[0-9]{2}"

/* Todos os tipos com NFSE_PADRAO_*: NFSE_TIPOS_COM_PADRAO(X) chama
 * X(tipo) para cada um */
#define NFSE_TIPOS_COM_PADRAO(X) \
	X(TVerNFSe) \
	X(TSString) \
	X(TSStringComQuebraDeLinha) \
	X(TSIdNFSe) \
	X(TSIdDPS) \
	X(TSData) \
	X(TSDateTimeUTC) \
	X(TSVerAplic) \
	X(TSSerieDPS) \
	X(TSChaveNFSe) \
	X(TSChaveNFe) \
	X(TSNumProcAdmAnaliseFiscalCanc) \
	X(TSMotivo) \
	X(TSCNPJ) \
	X(TSCPF) \
	X(TSCAEPF) \
	X(TSLogradouro) \
	X(TSNumeroEndereco) \
	X(TSComplementoEndereco) \
	X(TSBairro) \
	X(TSCEP) \
	X(TSEnderCompletoExt) \
	X(TSTelefone) \
	X(TSEmail) \
	X(TCCodTribMun) \
	X(TSCodMoeda) \
	X(TSNumDocImport) \
	X(TSNumRegExport) \
	X(TSPlaca) \
	X(TSCodAcessoPed) \
	X(TSCodContrato) \
	X(TSNumEixos) \
	X(TSSentido) \
	X(TSDescInfCompl) \
	X(TSCodVerificacao) \
	X(TSSerieNFNFS) \
	X(TSDescOutDedRed) \
	X(TSNumBeneficioMunicipal) \
	X(TSNumProcExigSuspensa) \
	X(TSNumProcesso) \
	X(TSNumDPS) \
	X(TSNNFSe) \
	X(TSNDFSe) \
	X(TSCodMunIBGE) \
	X(TSCodPaisISO) \
	X(TSCodTribNac) \
	X(TSCodNBS) \
	X(TSCodigoInternoContribuinte) \
	X(TSDesc40) \
	X(TSDesc150) \
	X(TSDesc255) \
	X(TSDesc600) \
	X(TSDesc500) \
	X(TSDesc1000) \
	X(TSDesc2000) \
	X(TSDec15V2) \
	X(TSDec1V2) \
	X(TSDec2V2) \
	X(TSDec3V2) \
	X(TSNum3Dig) \
	X(TSNum7Dig) \
	X(TSNum14Dig) \
	X(TSNum15Dig) \
	X(TSIdPedRegEvt) \
	X(TSIdEvento) \
	X(TSIdNumEvento) \
	X(TSNumDFe) \
	X(TSSituacaoCadastroContribuinte) \
	X(TSMotivoSituacaoCadastroContribuinte) \
	X(TSExtensaoTotal) \
	X(TSNumeroPostes) \
	X(TSRTCCodIndOp) \
	X(TSRTCCodSitTrib) \
	X(TSRTCCodClassTrib) \
	X(TSRTCCodCredPres)

/* clang-format on */

#endif
