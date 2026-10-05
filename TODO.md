# TODO

Estruturas da NFS-e (leiaute 1.01) a implementar, na ordem do schema oficial. Cada item leva ao diagrama da estrutura.

Marque `[x]` quando a estrutura tiver: criação/liberação, setters com validação, geração do XML e testes validando contra o XSD. A lista é gerada por `python3 "$(pkg-config --variable=ferramentas libnfe)/gerar_diagramas.py" --config tools/documento.json --todo`, que preserva os itens marcados.

## Estruturas da NFS-e

- [ ] [**DPS**](docs/diagramas/DPS.svg)
  - [ ] [**infDPS**](docs/diagramas/DPS/infDPS.svg)
    - [ ] [**subst**](docs/diagramas/DPS/infDPS/subst.svg) `0..1` _(opcional)_
    - [ ] [**prest**](docs/diagramas/DPS/infDPS/prest.svg)
      - [ ] [**end**](docs/diagramas/DPS/infDPS/prest/end.svg) `0..1` _(opcional)_
        - [ ] [**endNac**](docs/diagramas/DPS/infDPS/prest/end/endNac.svg)
        - [ ] [**endExt**](docs/diagramas/DPS/infDPS/prest/end/endExt.svg)
      - [ ] [**regTrib**](docs/diagramas/DPS/infDPS/prest/regTrib.svg)
    - [ ] [**toma**](docs/diagramas/DPS/infDPS/toma.svg) `0..1` _(opcional)_
      - [ ] [**end**](docs/diagramas/DPS/infDPS/toma/end.svg) `0..1` _(opcional)_
        - [ ] [**endNac**](docs/diagramas/DPS/infDPS/toma/end/endNac.svg)
        - [ ] [**endExt**](docs/diagramas/DPS/infDPS/toma/end/endExt.svg)
    - [ ] [**interm**](docs/diagramas/DPS/infDPS/interm.svg) `0..1` _(opcional)_
      - [ ] [**end**](docs/diagramas/DPS/infDPS/interm/end.svg) `0..1` _(opcional)_
        - [ ] [**endNac**](docs/diagramas/DPS/infDPS/interm/end/endNac.svg)
        - [ ] [**endExt**](docs/diagramas/DPS/infDPS/interm/end/endExt.svg)
    - [ ] [**serv**](docs/diagramas/DPS/infDPS/serv.svg)
      - [ ] [**locPrest**](docs/diagramas/DPS/infDPS/serv/locPrest.svg)
      - [ ] [**cServ**](docs/diagramas/DPS/infDPS/serv/cServ.svg)
      - [ ] [**comExt**](docs/diagramas/DPS/infDPS/serv/comExt.svg) `0..1` _(opcional)_
      - [ ] [**obra**](docs/diagramas/DPS/infDPS/serv/obra.svg) `0..1` _(opcional)_
        - [ ] [**end**](docs/diagramas/DPS/infDPS/serv/obra/end.svg)
          - [ ] [**endExt**](docs/diagramas/DPS/infDPS/serv/obra/end/endExt.svg)
      - [ ] [**atvEvento**](docs/diagramas/DPS/infDPS/serv/atvEvento.svg) `0..1` _(opcional)_
        - [ ] [**end**](docs/diagramas/DPS/infDPS/serv/atvEvento/end.svg)
          - [ ] [**endExt**](docs/diagramas/DPS/infDPS/serv/atvEvento/end/endExt.svg)
      - [ ] [**infoCompl**](docs/diagramas/DPS/infDPS/serv/infoCompl.svg) `0..1` _(opcional)_
        - [ ] [**gItemPed**](docs/diagramas/DPS/infDPS/serv/infoCompl/gItemPed.svg) `0..1` _(opcional)_
    - [ ] [**valores**](docs/diagramas/DPS/infDPS/valores.svg)
      - [ ] [**vServPrest**](docs/diagramas/DPS/infDPS/valores/vServPrest.svg)
      - [ ] [**vDescCondIncond**](docs/diagramas/DPS/infDPS/valores/vDescCondIncond.svg) `0..1` _(opcional)_
      - [ ] [**vDedRed**](docs/diagramas/DPS/infDPS/valores/vDedRed.svg) `0..1` _(opcional)_
        - [ ] [**documentos**](docs/diagramas/DPS/infDPS/valores/vDedRed/documentos.svg)
          - [ ] [**docDedRed**](docs/diagramas/DPS/infDPS/valores/vDedRed/documentos/docDedRed.svg) `1..1000`
            - [ ] [**NFSeMun**](docs/diagramas/DPS/infDPS/valores/vDedRed/documentos/docDedRed/NFSeMun.svg)
            - [ ] [**NFNFS**](docs/diagramas/DPS/infDPS/valores/vDedRed/documentos/docDedRed/NFNFS.svg)
            - [ ] [**fornec**](docs/diagramas/DPS/infDPS/valores/vDedRed/documentos/docDedRed/fornec.svg) `0..1` _(opcional)_
              - [ ] [**end**](docs/diagramas/DPS/infDPS/valores/vDedRed/documentos/docDedRed/fornec/end.svg) `0..1` _(opcional)_
                - [ ] [**endNac**](docs/diagramas/DPS/infDPS/valores/vDedRed/documentos/docDedRed/fornec/end/endNac.svg)
                - [ ] [**endExt**](docs/diagramas/DPS/infDPS/valores/vDedRed/documentos/docDedRed/fornec/end/endExt.svg)
      - [ ] [**trib**](docs/diagramas/DPS/infDPS/valores/trib.svg)
        - [ ] [**tribMun**](docs/diagramas/DPS/infDPS/valores/trib/tribMun.svg)
          - [ ] [**exigSusp**](docs/diagramas/DPS/infDPS/valores/trib/tribMun/exigSusp.svg) `0..1` _(opcional)_
          - [ ] [**BM**](docs/diagramas/DPS/infDPS/valores/trib/tribMun/BM.svg) `0..1` _(opcional)_
        - [ ] [**tribFed**](docs/diagramas/DPS/infDPS/valores/trib/tribFed.svg) `0..1` _(opcional)_
          - [ ] [**piscofins**](docs/diagramas/DPS/infDPS/valores/trib/tribFed/piscofins.svg) `0..1` _(opcional)_
        - [ ] [**totTrib**](docs/diagramas/DPS/infDPS/valores/trib/totTrib.svg)
          - [ ] [**vTotTrib**](docs/diagramas/DPS/infDPS/valores/trib/totTrib/vTotTrib.svg)
          - [ ] [**pTotTrib**](docs/diagramas/DPS/infDPS/valores/trib/totTrib/pTotTrib.svg)
    - [ ] [**IBSCBS**](docs/diagramas/DPS/infDPS/IBSCBS.svg) `0..1` _(opcional)_
      - [ ] [**gRefNFSe**](docs/diagramas/DPS/infDPS/IBSCBS/gRefNFSe.svg) `0..1` _(opcional)_
      - [ ] [**dest**](docs/diagramas/DPS/infDPS/IBSCBS/dest.svg) `0..1` _(opcional)_
        - [ ] [**end**](docs/diagramas/DPS/infDPS/IBSCBS/dest/end.svg) `0..1` _(opcional)_
          - [ ] [**endNac**](docs/diagramas/DPS/infDPS/IBSCBS/dest/end/endNac.svg)
          - [ ] [**endExt**](docs/diagramas/DPS/infDPS/IBSCBS/dest/end/endExt.svg)
      - [ ] [**imovel**](docs/diagramas/DPS/infDPS/IBSCBS/imovel.svg) `0..1` _(opcional)_
        - [ ] [**end**](docs/diagramas/DPS/infDPS/IBSCBS/imovel/end.svg)
          - [ ] [**endExt**](docs/diagramas/DPS/infDPS/IBSCBS/imovel/end/endExt.svg)
      - [ ] [**valores**](docs/diagramas/DPS/infDPS/IBSCBS/valores.svg)
        - [ ] [**gReeRepRes**](docs/diagramas/DPS/infDPS/IBSCBS/valores/gReeRepRes.svg) `0..1` _(opcional)_
          - [ ] [**documentos**](docs/diagramas/DPS/infDPS/IBSCBS/valores/gReeRepRes/documentos.svg) `1..1000`
            - [ ] [**dFeNacional**](docs/diagramas/DPS/infDPS/IBSCBS/valores/gReeRepRes/documentos/dFeNacional.svg)
            - [ ] [**docFiscalOutro**](docs/diagramas/DPS/infDPS/IBSCBS/valores/gReeRepRes/documentos/docFiscalOutro.svg)
            - [ ] [**docOutro**](docs/diagramas/DPS/infDPS/IBSCBS/valores/gReeRepRes/documentos/docOutro.svg)
            - [ ] [**fornec**](docs/diagramas/DPS/infDPS/IBSCBS/valores/gReeRepRes/documentos/fornec.svg) `0..1` _(opcional)_
        - [ ] [**trib**](docs/diagramas/DPS/infDPS/IBSCBS/valores/trib.svg)
          - [ ] [**gIBSCBS**](docs/diagramas/DPS/infDPS/IBSCBS/valores/trib/gIBSCBS.svg)
            - [ ] [**gTribRegular**](docs/diagramas/DPS/infDPS/IBSCBS/valores/trib/gIBSCBS/gTribRegular.svg) `0..1` _(opcional)_
            - [ ] [**gDif**](docs/diagramas/DPS/infDPS/IBSCBS/valores/trib/gIBSCBS/gDif.svg) `0..1` _(opcional)_

## Além do leiaute

- [ ] Assinatura, transmissão e eventos
