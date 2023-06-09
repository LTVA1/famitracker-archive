	.include	"xak.h"
dutyenve_table:
	dw	dutyenve_000
	dw	dutyenve_001
	dw	dutyenve_002
	dw	dutyenve_003
	dw	dutyenve_004
	dw	dutyenve_005
	dw	dutyenve_006
	dw	dutyenve_007
dutyenve_lp_table:
	dw	dutyenve_lp_000
	dw	dutyenve_lp_001
	dw	dutyenve_lp_002
	dw	dutyenve_lp_003
	dw	dutyenve_lp_004
	dw	dutyenve_lp_005
	dw	dutyenve_lp_006
	dw	dutyenve_lp_007

dutyenve_000:
dutyenve_lp_000:
	db	$03,$ff
dutyenve_001:
dutyenve_lp_001:
	db	$07,$ff
dutyenve_002:
dutyenve_lp_002:
	db	$0b,$ff
dutyenve_003:
dutyenve_lp_003:
	db	$0f,$ff
dutyenve_004:
dutyenve_lp_004:
	db	$07,$ff
dutyenve_005:
dutyenve_lp_005:
	db	$07,$0b,$ff
dutyenve_006:
dutyenve_lp_006:
	db	$0b,$ff
dutyenve_007:
	db	$03
dutyenve_lp_007:
	db	$0b,$ff

softenve_table:
	dw	softenve_000
	dw	softenve_001
	dw	softenve_002
	dw	softenve_003
	dw	softenve_004
softenve_lp_table:
	dw	softenve_lp_000
	dw	softenve_lp_001
	dw	softenve_lp_002
	dw	softenve_lp_003
	dw	softenve_lp_004

softenve_000:
	db	$0c
softenve_lp_000:
	db	$00,$ff
softenve_001:
	db	$0c,$0b,$0a,$09,$08,$07,$06,$05
	db	$04,$03,$02,$01,$01,$01,$01,$01
	db	$01,$01,$01,$01,$01,$01,$01
softenve_lp_001:
	db	$00,$ff
softenve_002:
	db	$08,$04,$02
softenve_lp_002:
	db	$00,$ff
softenve_003:
	db	$06,$09,$0c,$08,$06,$04,$03
softenve_lp_003:
	db	$02,$ff
softenve_004:
	db	$02,$04,$06,$05,$04,$03,$02
softenve_lp_004:
	db	$01,$ff

pitchenve_table:
	dw	pitchenve_000
	dw	pitchenve_001
	dw	pitchenve_002
	dw	pitchenve_003
	dw	pitchenve_004
	dw	pitchenve_005
	dw	pitchenve_006
	dw	pitchenve_007
	dw	pitchenve_008
	dw	0
	dw	pitchenve_010
pitchenve_lp_table:
	dw	pitchenve_lp_000
	dw	pitchenve_lp_001
	dw	pitchenve_lp_002
	dw	pitchenve_lp_003
	dw	pitchenve_lp_004
	dw	pitchenve_lp_005
	dw	pitchenve_lp_006
	dw	pitchenve_lp_007
	dw	pitchenve_lp_008
	dw	0
	dw	pitchenve_lp_010

pitchenve_000:
pitchenve_lp_000:
	db	$00,$ff
pitchenve_001:
	db	$00,$0a
pitchenve_lp_001:
	db	$00,$ff
pitchenve_002:
	db	$00,$00,$00,$00,$00,$00,$00,$00
	db	$00,$00,$00,$00,$00,$00,$00,$00
	db	$00,$00,$00,$00,$00,$00,$00,$00
	db	$00,$00,$00,$00,$00,$00,$00,$00
	db	$00,$00,$00,$00,$00,$00,$00,$00
	db	$00,$00,$00,$00,$00,$00,$00,$00
	db	$00,$00,$00,$00,$00,$00,$00,$00
	db	$00,$00,$00,$00
pitchenve_lp_002:
	db	$01,$ff
pitchenve_003:
	db	$00,$00,$00,$00,$00,$00,$00,$00
	db	$00,$00,$00,$00,$00,$00,$00,$00
	db	$00,$00,$00,$00,$00,$00,$00,$00
	db	$00,$00,$00,$00,$00,$00,$04,$03
	db	$04,$03,$04,$03,$04,$03,$03,$03
	db	$03,$03,$03
pitchenve_lp_003:
	db	$00,$ff
pitchenve_004:
	db	$00,$00,$00,$00,$00,$00,$00,$00
	db	$00,$00,$00,$00,$00,$00,$00,$00
	db	$83,$83,$82,$83,$82,$83,$82,$83
	db	$82,$83,$82,$83
pitchenve_lp_004:
	db	$00,$ff
pitchenve_005:
	db	$00,$00,$00,$00,$00,$00,$00,$00
	db	$00,$00,$00,$00,$0a,$04,$03,$03
	db	$03,$03,$03,$03,$03,$03,$03,$03
pitchenve_lp_005:
	db	$00,$ff
pitchenve_006:
	db	$00,$00,$00,$00,$00,$00,$00,$00
	db	$00,$00,$00,$00,$06,$02,$02,$02
	db	$02,$02,$02,$02,$02,$02,$02,$02
pitchenve_lp_006:
	db	$00,$ff
pitchenve_007:
	db	$00,$00,$00,$00,$00,$00,$00,$00
	db	$00,$00,$00,$00,$05,$02,$01,$02
	db	$01,$02,$01,$02,$01,$02,$01,$02
pitchenve_lp_007:
	db	$00,$ff
pitchenve_008:
	db	$00,$00,$00,$00,$00,$00,$00,$00
	db	$00,$00,$00,$00,$03,$01,$01,$01
	db	$01,$01,$01,$01,$01,$01,$01,$01
pitchenve_lp_008:
	db	$00,$ff
pitchenve_010:
	db	$00
pitchenve_lp_010:
	db	$79,$ff

arpeggio_table:
	dw	arpeggio_000
arpeggio_lp_table:
	dw	arpeggio_lp_000

arpeggio_000:
	db	$82,$01,$01
arpeggio_lp_000:
	db	$00,$ff

lfo_data:
	db	$20,$02,$03,$00

fds_data_table:
fds_effect_select:
fds_4088_data:


n106_channel:
	db	1
n106_wave_init:
n106_wave_table:


dpcm_data:
	db	$00,$00,$00,$00
	db	$00,$00,$00,$00
	db	$00,$00,$00,$00
	db	$00,$00,$00,$00
	db	$0d,$00,$00,$30
	db	$0d,$00,$0c,$30
	db	$0d,$00,$18,$30
	db	$0e,$00,$00,$30
	db	$0e,$00,$0c,$30
	db	$0e,$00,$18,$30
	db	$0e,$00,$24,$30
	db	$0e,$00,$30,$30
	db	$00,$00,$00,$00
	db	$00,$00,$00,$00
	db	$00,$00,$00,$00
	db	$00,$00,$00,$00
	db	$0f,$00,$00,$30
	db	$0f,$00,$0c,$30
	db	$0f,$00,$18,$30
	db	$0f,$00,$24,$30
	db	$0f,$00,$30,$30
	db	$0d,$00,$3c,$30
	db	$0d,$00,$48,$30
	db	$0e,$00,$54,$30
	db	$0e,$00,$3c,$30
	db	$0e,$00,$48,$30
	db	$0e,$00,$60,$30
	db	$0e,$00,$6c,$30
	db	$00,$00,$00,$00
	db	$00,$00,$00,$00
	db	$00,$00,$00,$00
	db	$00,$00,$00,$00
	db	$0f,$00,$54,$30
	db	$0f,$00,$3c,$30
	db	$0f,$00,$48,$30
	db	$0f,$00,$60,$30
	db	$0f,$00,$6c,$30
	db	$0d,$00,$78,$1c
	.bank	2
	.org	$c000
	db	$00,$00,$00,$00,$00,$10,$b1,$25,$d5,$f1,$fd,$ac,$fd,$fd,$ff,$ff
	db	$bf,$37,$aa,$11,$91,$02,$09,$20,$01,$48,$44,$98,$24,$65,$c3,$66
	db	$67,$77,$36,$73,$3d,$73,$33,$1d,$d7,$07,$33,$1c,$18,$d9,$10,$73
	db	$85,$38,$87,$8c,$c3,$cd,$55,$1d,$2d,$db,$f1,$b2,$cb,$bb,$92,$1b
	db	$b9,$b9,$9a,$99,$99,$8b,$8a,$c9,$1d,$cb,$88,$c7,$cc,$39,$e6,$71
	db	$ee,$84,$a7,$a7,$2c,$36,$a4,$33,$c0,$92,$85,$1b,$39,$b6,$dc,$f1
	db	$e9,$fd,$c5,$fc,$66,$5c,$26,$6c,$06,$61,$e4,$08,$c6,$8c,$30,$c7
	db	$30,$47,$7c,$13,$cf,$12,$4f,$da,$39,$9e,$59,$c7,$c2,$6f,$4c,$6e
	db	$78,$61,$b3,$23,$27,$33,$36,$3a,$78,$70,$e2,$23,$47,$0f,$3f,$3b
	db	$9c,$33,$cb,$94,$cd,$8c,$09,$66,$2c,$63,$1e,$70,$7e,$31,$f7,$93
	db	$77,$9f,$1b,$9f,$99,$c1,$81,$1d,$18,$1d,$a0,$93,$e8,$01,$5b,$31
	db	$5c,$3a,$79,$e4,$c1,$67,$87,$37,$1e,$38,$f3,$d9,$e1,$89,$9c,$4f
	db	$8c,$ed,$38,$6c,$e2,$8c,$a6,$cc,$4c,$e6,$c8,$a5,$1e,$ee,$cc,$e4
	db	$d9,$26,$ce,$0e,$b2,$2a,$70,$c9,$18,$4e,$34,$e3,$cf,$e8,$ef,$71
	db	$6f,$7e,$66,$2e,$70,$e3,$a0,$03,$0d,$0e,$4e,$34,$f2,$60,$23,$87
	db	$27,$07,$37,$b3,$b2,$59,$4b,$eb,$98,$6b,$ae,$8c,$33,$0f,$3b,$da
	db	$b1,$b1,$38,$13,$8f,$19,$e9,$b0,$91,$8d,$13,$fe,$30,$fd,$a2,$f1
	db	$a3,$15,$1e,$17,$da,$50,$f0,$81,$46,$0b,$3f,$b2,$bd,$f8,$d9,$ee
	db	$47,$5f,$c1,$9c,$4c,$4e,$a2,$86,$91,$d2,$c8,$58,$8c,$c9,$c6,$aa
	db	$74,$b8,$d2,$ca,$a6,$67,$9c,$ea,$b4,$d1,$c9,$2b,$4e,$39,$e5,$71
	db	$69,$c9,$13,$07,$3f,$28,$bb,$30,$f1,$41,$8f,$5e,$45,$fe,$30,$f7
	db	$a0,$37,$b2,$91,$b4,$12,$36,$18,$a7,$d2,$7a,$f8,$39,$ce,$af,$cf
	db	$17,$ad,$d8,$98,$49,$0b,$45,$15,$74,$70,$49,$49,$0b,$37,$9a,$72
	db	$ea,$b0,$a5,$8b,$0f,$5e,$3c,$6e,$74,$e5,$c2,$27,$66,$2e,$56,$5e
	db	$58,$63,$53,$ca,$3a,$c2,$0f,$d2,$4b,$e9,$4a,$bd,$e4,$b9,$a8,$97
	db	$a6,$13,$5a,$aa,$30,$83,$15,$13,$97,$7c,$f2,$b1,$c7,$ef,$97,$7d
	db	$b8,$74,$d4,$c2,$8a,$05,$55,$54,$54,$2a,$d2,$c2,$23,$ab,$6c,$aa
	db	$a6,$ec,$d2,$b4,$56,$ea,$25,$ad,$36,$56,$65,$2b,$f4,$16,$f4,$13
	db	$d6,$85,$ad,$b4,$ac,$b0,$13,$a7,$13,$3b,$1d,$f5,$68,$55,$47,$97
	db	$2a,$35,$6a,$64,$64,$42,$47,$2a,$3d,$75,$3a,$f5,$d5,$5f,$4f,$57
	db	$53,$2d,$55,$a5,$24,$a9,$a8,$21,$95,$8a,$a9,$92,$6a,$25,$b9,$52
	db	$d5,$4a,$27,$bb,$26,$fc,$42,$eb,$83,$ad,$aa,$56,$ec,$62,$e5,$85
	db	$36,$2d,$6d,$b2,$d4,$64,$4b,$8d,$4d,$6e,$6a,$36,$d9,$66,$c9,$95
	db	$aa,$52,$16,$aa,$98,$48,$35,$69,$6b,$25,$6f,$ed,$d7,$5e,$ad,$d6
	db	$64,$d5,$22,$95,$12,$36,$91,$b2,$48,$13,$2d,$93,$ba,$48,$ed,$82
	db	$9b,$95,$ba,$6c,$ca,$ec,$c4,$ab,$46,$57,$6a,$5a,$55,$ab,$aa,$b1
	db	$aa,$b2,$2a,$95,$8d,$b4,$92,$5a,$55,$d5,$52,$57,$d6,$aa,$aa,$56
	db	$b2,$51,$95,$4a,$52,$96,$6a,$56,$d5,$d2,$d7,$ae,$7d,$d9,$5c,$f1
	db	$ca,$92,$8a,$5a,$48,$2d,$c8,$aa,$88,$8d,$2a,$55,$56,$aa,$5a,$51
	db	$57,$55,$ad,$aa,$95,$ad,$9a,$5a,$59,$35,$d5,$29,$ab,$aa,$b4,$46
	db	$ab,$54,$55,$55,$25,$55,$55,$75,$aa,$6c,$4b,$a7,$4e,$ad,$6c,$d4
	db	$a4,$45,$85,$16,$aa,$5c,$d4,$aa,$cc,$c7,$6f,$bd,$6b,$d4,$4f,$72
	db	$53,$52,$15,$25,$63,$23,$2a,$4d,$52,$4d,$a9,$ca,$54,$95,$6a,$6a
	db	$55,$56,$55,$d5,$46,$67,$55,$2e,$b3,$b2,$66,$53,$33,$2b,$5d,$69
	db	$da,$a8,$a5,$85,$95,$56,$6c,$6a,$5a,$69,$d3,$b2,$55,$5a,$93,$56
	db	$29,$a9,$c8,$54,$b2,$25,$d5,$15,$ed,$bd,$b9,$dd,$b2,$6d,$93,$b6
	db	$54,$54,$29,$aa,$a2,$91,$4a,$95,$54,$99,$b4,$62,$55,$a5,$4e,$56
	db	$b6,$b4,$d2,$aa,$a3,$2d,$2d,$5d,$b2,$5a,$55,$e5,$2a,$2b,$ab,$32
	db	$00,$00,$00,$00,$00,$40,$e6,$e0,$33,$e7,$ed,$fb,$f7,$ff,$ff,$7f
	db	$7b,$b2,$21,$09,$81,$04,$08,$40,$81,$40,$49,$32,$1a,$b3,$d9,$cd
	db	$7c,$66,$fd,$33,$f9,$98,$ed,$43,$8e,$03,$b3,$84,$98,$2a,$e4,$38
	db	$30,$8f,$d9,$95,$9c,$f6,$71,$6d,$6c,$76,$33,$bb,$93,$d9,$c5,$64
	db	$66,$36,$47,$99,$39,$c7,$c8,$71,$32,$eb,$1c,$c7,$cd,$38,$3d,$76
	db	$f0,$58,$44,$82,$a5,$85,$0d,$8e,$6d,$76,$3f,$bc,$f9,$cc,$6f,$e6
	db	$b2,$30,$89,$c1,$8c,$28,$62,$c6,$98,$21,$9e,$81,$6f,$f2,$18,$db
	db	$d2,$4e,$7a,$a3,$cc,$c5,$6d,$4e,$26,$bb,$d8,$f8,$70,$64,$66,$a3
	db	$83,$c3,$89,$8f,$8c,$5e,$3e,$36,$9c,$db,$35,$62,$9a,$71,$c8,$c4
	db	$18,$f2,$88,$f9,$c5,$ee,$0f,$f7,$9f,$9d,$9e,$4c,$74,$30,$23,$31
	db	$01,$9b,$09,$0f,$6c,$52,$72,$71,$d9,$f0,$61,$b3,$c3,$8b,$27,$67
	db	$1e,$3d,$0e,$ee,$6c,$62,$b6,$71,$d1,$c4,$cc,$32,$63,$a3,$31,$9b
	db	$b4,$e3,$5a,$0e,$cf,$36,$19,$9f,$28,$4d,$e0,$4c,$19,$23,$4d,$f8
	db	$1f,$fe,$3c,$f6,$e3,$3f,$f1,$c0,$cc,$c1,$06,$4a,$0e,$26,$99,$1c
	db	$69,$e4,$f0,$e4,$b0,$93,$93,$cd,$36,$b6,$69,$b3,$5c,$a9,$d3,$c5
	db	$0e,$67,$36,$96,$31,$79,$cc,$28,$c7,$22,$17,$27,$fc,$34,$fd,$c8
	db	$f4,$e1,$c2,$67,$c1,$1a,$81,$1f,$18,$2e,$fc,$e0,$7d,$e8,$9d,$ef
	db	$e3,$27,$31,$87,$c9,$89,$4a,$8c,$92,$46,$a6,$4a,$89,$87,$4d,$39
	db	$bc,$58,$b3,$f2,$8c,$d3,$9c,$2e,$2e,$5d,$3c,$ea,$c8,$e3,$72,$c2
	db	$47,$23,$1f,$8c,$0f,$96,$3c,$e4,$f4,$26,$f1,$87,$f9,$85,$6e,$52
	db	$23,$d9,$04,$17,$ca,$32,$3a,$8f,$af,$71,$df,$7a,$7e,$68,$69,$a3
	db	$52,$89,$8a,$8a,$2c,$6c,$64,$e4,$d0,$d1,$89,$cb,$46,$2b,$37,$1e
	db	$5d,$3c,$2e,$ba,$71,$d1,$c3,$aa,$a3,$ea,$a2,$56,$9c,$8a,$6e,$41
	db	$3f,$a0,$9b,$74,$8d,$3d,$5a,$37,$f2,$aa,$6c,$c2,$45,$45,$15,$2a
	db	$16,$ae,$f8,$f4,$d4,$e3,$f7,$cb,$0f,$97,$8e,$8e,$34,$2a,$68,$a4
	db	$a4,$51,$51,$c3,$85,$33,$2e,$53,$4b,$be,$58,$ae,$49,$af,$64,$75
	db	$a9,$a6,$4e,$e4,$2b,$e8,$8b,$ea,$c2,$55,$96,$0d,$3d,$32,$5d,$d4
	db	$e9,$e8,$c3,$a6,$4e,$1d,$4e,$56,$34,$32,$b1,$e0,$48,$e3,$a6,$a7
	db	$96,$cf,$7f,$5d,$7a,$a5,$56,$9a,$aa,$48,$12,$35,$51,$49,$a9,$54
	db	$d4,$aa,$62,$55,$6a,$93,$4e,$75,$0b,$fe,$88,$7d,$a1,$d3,$aa,$4a
	db	$8f,$aa,$1e,$ec,$58,$d9,$54,$e5,$a8,$a5,$c5,$15,$2f,$cb,$96,$ba
	db	$2a,$5d,$51,$55,$2a,$31,$a9,$84,$55,$72,$b5,$ca,$ab,$fb,$da,$6b
	db	$cb,$56,$5a,$55,$94,$94,$d8,$a0,$64,$91,$43,$4d,$45,$5d,$a4,$3e
	db	$70,$ab,$d1,$d5,$4a,$d5,$13,$37,$8b,$ae,$aa,$6a,$5a,$35,$d5,$d4
	db	$2c,$55,$63,$72,$52,$95,$d2,$6a,$a9,$8d,$ad,$6a,$53,$b3,$16,$b9
	db	$94,$52,$25,$a9,$52,$a7,$9a,$8e,$7d,$be,$7e,$71,$6d,$d4,$63,$c5
	db	$42,$27,$a8,$15,$b4,$14,$6c,$31,$a9,$6a,$52,$ad,$a2,$6b,$99,$cd
	db	$d4,$a5,$33,$2b,$9b,$aa,$a5,$4e,$b9,$b2,$54,$8d,$b6,$64,$a9,$a6
	db	$8a,$56,$95,$36,$55,$5d,$d9,$6c,$e9,$64,$63,$25,$8b,$85,$26,$2c
	db	$2e,$5a,$33,$f9,$f8,$ed,$ee,$62,$7e,$51,$9b,$92,$a9,$24,$a5,$86
	db	$92,$15,$69,$a5,$54,$55,$a9,$c9,$2a,$ab,$6a,$a9,$9a,$4b,$ad,$69
	db	$56,$35,$35,$b3,$a9,$d5,$54,$a7,$4a,$17,$1d,$2b,$5a,$6c,$b4,$b2
	db	$aa,$b2,$55,$d5,$95,$5c,$c9,$2a,$a3,$12,$95,$52,$2d,$a5,$2d,$b9
	db	$77,$db,$9e,$d5,$76,$45,$57,$25,$aa,$24,$4b,$32,$4a,$a9,$54,$51
	db	$d5,$c2,$95,$4a,$9b,$1a,$5b,$5a,$d9,$74,$f4,$d4,$e4,$4a,$b5,$95
	db	$a5,$55,$55,$35,$95,$55,$8d,$ac,$52,$56,$99,$4d,$b5,$6c,$d6,$b2
	db	$95,$da,$8a,$55,$0a,$55,$29,$2a,$ab,$68,$e9,$e4,$6f,$73,$b7,$55
	db	$4f,$4f,$56,$2a,$6a,$64,$52,$62,$45,$49,$8b,$4a,$4d,$29,$ab,$2a
	db	$00,$00,$00,$00,$00,$d0,$14,$2c,$fb,$6e,$fe,$ff,$fd,$ff,$7f,$bf
	db	$94,$91,$84,$40,$08,$02,$20,$80,$94,$a4,$92,$9c,$64,$f7,$fb,$cd
	db	$3a,$33,$5d,$e5,$ba,$90,$e3,$40,$f2,$90,$b8,$30,$e3,$c0,$9c,$96
	db	$33,$9d,$f6,$72,$3c,$3e,$f5,$ac,$36,$b1,$5d,$2c,$73,$9b,$58,$25
	db	$73,$c2,$9c,$31,$3b,$73,$c6,$b5,$13,$a7,$67,$16,$8d,$21,$13,$06
	db	$1e,$17,$5c,$6d,$b6,$1f,$fe,$76,$f2,$cd,$7c,$12,$b1,$08,$65,$06
	db	$8c,$0d,$31,$63,$9c,$c4,$97,$38,$47,$9e,$da,$49,$67,$cb,$8d,$6c
	db	$b3,$d8,$74,$b1,$b9,$e8,$34,$b1,$d1,$e8,$60,$e3,$d1,$e1,$e1,$b3
	db	$e1,$ce,$c2,$97,$34,$73,$e0,$48,$19,$39,$62,$7e,$d9,$dd,$72,$ff
	db	$e9,$74,$33,$e1,$60,$06,$a3,$01,$9d,$84,$07,$d9,$18,$27,$a7,$0d
	db	$0f,$9b,$0f,$37,$2e,$ce,$3c,$3b,$4e,$66,$9a,$99,$6d,$2c,$59,$cc
	db	$2c,$33,$96,$cc,$cc,$52,$97,$9d,$0e,$cf,$96,$dc,$06,$5a,$49,$34
	db	$a5,$61,$58,$c6,$df,$f0,$7b,$ce,$cf,$b7,$f8,$40,$e6,$d0,$81,$c2
	db	$c1,$a2,$c9,$41,$63,$c3,$c9,$69,$a6,$93,$cd,$56,$d6,$ca,$3a,$97
	db	$71,$b9,$d8,$34,$73,$59,$cc,$e1,$91,$c9,$c6,$24,$1b,$13,$7f,$8c
	db	$bb,$98,$1f,$5c,$3c,$0b,$76,$08,$3e,$30,$3c,$f8,$e4,$3d,$7c,$6e
	db	$ff,$78,$15,$76,$98,$1c,$51,$31,$62,$4c,$95,$32,$92,$8d,$55,$3a
	db	$56,$e6,$34,$3d,$39,$75,$ec,$f0,$e8,$c5,$d1,$c9,$e3,$b2,$c4,$93
	db	$c3,$07,$e5,$85,$51,$87,$4e,$2f,$c9,$1f,$e6,$07,$9f,$64,$43,$59
	db	$89,$06,$b5,$94,$f6,$f0,$1d,$e7,$d7,$fb,$a2,$51,$c7,$a4,$12,$93
	db	$12,$0e,$2d,$2a,$59,$6c,$1c,$39,$75,$b4,$f4,$78,$f0,$72,$da,$d8
	db	$72,$f8,$c4,$6c,$b1,$f2,$b0,$ca,$49,$69,$47,$f4,$88,$6e,$d2,$95
	db	$6e,$6a,$1b,$dd,$34,$1d,$b4,$54,$94,$a1,$62,$d1,$d4,$d3,$d3,$87
	db	$df,$cf,$17,$47,$a7,$86,$15,$0b,$2a,$4a,$1a,$45,$16,$1e,$5a,$55
	db	$55,$95,$76,$9a,$ae,$d2,$4d,$6a,$2d,$ab,$b2,$85,$bd,$a0,$2f,$ac
	db	$93,$9a,$9a,$0e,$5e,$58,$ad,$74,$5a,$7a,$74,$f2,$e8,$62,$b1,$d1
	db	$60,$31,$e1,$48,$65,$67,$d3,$d9,$f3,$af,$2b,$af,$ca,$a9,$4a,$45
	db	$52,$d4,$88,$52,$29,$55,$d4,$2a,$71,$a5,$ea,$e8,$a4,$57,$e1,$27
	db	$d6,$0b,$57,$55,$8b,$17,$2d,$2f,$5c,$96,$56,$99,$9a,$6c,$6a,$6c
	db	$dc,$b4,$ac,$ec,$ac,$b8,$54,$96,$34,$4c,$4a,$62,$26,$5d,$ad,$f8
	db	$da,$af,$b7,$96,$ad,$ac,$2a,$a9,$14,$6c,$28,$59,$68,$a2,$99,$d4
	db	$85,$da,$81,$cf,$52,$97,$8d,$6a,$27,$97,$95,$2e,$4d,$2b,$57,$53
	db	$8d,$56,$55,$95,$ca,$91,$96,$4a,$b3,$aa,$a5,$2d,$5d,$55,$d5,$92
	db	$8d,$4a,$15,$95,$52,$9d,$aa,$56,$be,$5e,$fb,$b2,$2e,$76,$99,$58
	db	$e2,$84,$aa,$50,$95,$d0,$49,$a5,$aa,$52,$b5,$a4,$ab,$aa,$55,$b5
	db	$6c,$55,$b5,$aa,$9a,$6c,$a5,$55,$a5,$55,$56,$a9,$aa,$b2,$a4,$6a
	db	$ca,$53,$65,$a7,$8e,$a7,$96,$95,$26,$2d,$06,$2d,$54,$2e,$5a,$55
	db	$3e,$7e,$bb,$5d,$ea,$2b,$d9,$12,$33,$23,$c9,$4a,$92,$26,$69,$25
	db	$95,$a6,$2a,$d5,$d4,$2a,$ab,$aa,$36,$66,$ab,$5c,$69,$36,$b9,$69
	db	$66,$e9,$ca,$e2,$d2,$52,$c3,$4a,$4b,$53,$d3,$ca,$a6,$59,$2b,$6d
	db	$d2,$54,$49,$49,$a5,$d8,$92,$dc,$a2,$7b,$d7,$ed,$6a,$db,$49,$ad
	db	$8a,$4a,$51,$45,$15,$95,$4a,$2a,$55,$55,$ac,$2a,$b5,$ac,$6c,$5a
	db	$59,$75,$6c,$69,$d9,$64,$b3,$6a,$5a,$69,$65,$95,$66,$96,$b2,$54
	db	$56,$a9,$55,$da,$b4,$da,$6c,$26,$5b,$a9,$2a,$61,$25,$49,$b5,$a4
	db	$69,$e5,$77,$75,$d7,$e5,$55,$a7,$46,$c5,$8a,$4a,$8a,$26,$46,$15
	db	$4b,$95,$2a,$2d,$4b,$ad,$b2,$aa,$6a,$4d,$ad,$56,$99,$65,$55,$ab
	db	$9a,$35,$55,$55,$b5,$4a,$56,$aa,$54,$55,$55,$2b,$6e,$59,$75,$aa
	db	$6c,$9a,$58,$29,$d2,$a8,$54,$a5,$d4,$ba,$d6,$e7,$6d,$6b,$5b,$75
	db	$00,$00,$00,$00,$00,$90,$41,$35,$ef,$b7,$ff,$fe,$ff,$ff,$ff,$54
	db	$91,$04,$30,$80,$00,$08,$30,$02,$72,$c9,$6d,$8b,$cd,$b2,$fb,$67
	db	$db,$c5,$3a,$98,$3a,$90,$3c,$30,$27,$62,$86,$c6,$99,$ec,$66,$5a
	db	$7d,$6c,$9e,$75,$56,$db,$3c,$93,$49,$f6,$89,$25,$93,$73,$66,$c6
	db	$64,$4e,$9e,$9d,$95,$e3,$99,$65,$a1,$64,$60,$e8,$b0,$d1,$4a,$f9
	db	$7c,$fc,$ed,$f6,$4d,$3e,$81,$24,$93,$89,$08,$93,$11,$31,$e3,$22
	db	$9e,$e6,$9c,$bc,$d0,$2d,$97,$75,$06,$df,$a4,$9b,$1c,$97,$0f,$a3
	db	$c9,$c6,$83,$e1,$e2,$d1,$e8,$f1,$78,$5a,$db,$58,$52,$72,$07,$26
	db	$6a,$e4,$88,$f9,$b3,$f9,$72,$ff,$6c,$3b,$49,$3a,$98,$21,$1a,$d0
	db	$05,$3c,$68,$65,$5c,$2c,$0f,$1e,$8e,$8f,$8f,$93,$93,$a7,$c7,$61
	db	$e7,$c9,$a4,$b9,$64,$19,$59,$66,$16,$e3,$64,$d9,$65,$ab,$f1,$78
	db	$c9,$3c,$70,$55,$d0,$50,$c6,$e4,$c4,$6f,$fc,$1d,$bf,$f9,$36,$1d
	db	$6c,$0c,$1d,$88,$06,$8b,$86,$87,$64,$46,$cb,$31,$9b,$69,$d9,$e6
	db	$4a,$cd,$79,$b2,$d3,$46,$d3,$6c,$a6,$89,$e5,$91,$29,$63,$d1,$d2
	db	$e2,$8b,$f1,$d3,$f8,$f0,$f0,$2c,$d8,$28,$3c,$30,$1c,$7e,$e8,$0f
	db	$9f,$dd,$9f,$5b,$a2,$c3,$e4,$42,$45,$8a,$1a,$4a,$15,$93,$a3,$25
	db	$8f,$c6,$99,$e5,$13,$67,$c7,$c6,$a5,$87,$2b,$27,$c7,$e3,$c4,$63
	db	$e4,$91,$79,$28,$79,$e8,$78,$a3,$fc,$98,$2f,$bc,$a2,$43,$6a,$c2
	db	$0a,$3a,$a5,$9d,$7c,$73,$7e,$9f,$0f,$17,$1d,$a5,$26,$92,$12,$0e
	db	$4b,$8c,$16,$4e,$13,$4f,$8b,$55,$c7,$c3,$cb,$71,$71,$e3,$f0,$e1
	db	$74,$51,$3d,$b4,$74,$52,$ba,$88,$0f,$f2,$89,$5b,$dc,$71,$1d,$f5
	db	$58,$4d,$38,$29,$a6,$50,$1a,$56,$5e,$3e,$3e,$fc,$3f,$5f,$1c,$47
	db	$87,$16,$05,$8b,$c2,$86,$a2,$45,$a3,$99,$65,$59,$e9,$b1,$dc,$92
	db	$57,$b2,$2e,$b3,$74,$a1,$37,$e8,$43,$75,$b2,$d2,$3a,$b8,$61,$b9
	db	$d8,$72,$7c,$b8,$5a,$ba,$58,$2c,$9a,$18,$15,$9a,$94,$1e,$4f,$ab
	db	$cf,$bf,$2b,$2f,$b5,$d1,$94,$91,$14,$9a,$24,$15,$55,$91,$4d,$c5
	db	$a5,$ac,$a9,$a5,$5b,$e1,$87,$f6,$c2,$55,$d5,$d8,$d1,$f2,$d0,$a9
	db	$72,$69,$6a,$b4,$ac,$b4,$5c,$39,$2b,$5b,$4d,$2d,$56,$49,$49,$45
	db	$89,$aa,$b8,$b5,$78,$dd,$77,$b7,$96,$2d,$ad,$8a,$92,$92,$06,$99
	db	$05,$8b,$6a,$a2,$87,$f4,$81,$4f,$d3,$aa,$a5,$d9,$e1,$5a,$e9,$54
	db	$b5,$b4,$55,$3a,$5a,$65,$96,$ca,$92,$26,$d5,$b4,$b2,$e9,$54,$57
	db	$55,$2d,$5a,$2a,$95,$24,$55,$2d,$2b,$9d,$be,$5e,$3f,$ad,$8b,$9b
	db	$8a,$45,$0d,$d2,$82,$95,$c4,$4a,$a9,$d2,$a4,$36,$69,$2d,$b3,$65
	db	$2d,$6b,$56,$ad,$aa,$d2,$a5,$96,$a5,$96,$5a,$aa,$d4,$54,$b1,$aa
	db	$74,$69,$ba,$6a,$b6,$9a,$6c,$1a,$55,$4a,$2c,$54,$0e,$6b,$26,$9f
	db	$6f,$ef,$c5,$f6,$68,$2b,$d1,$24,$25,$4d,$14,$4b,$aa,$8a,$a6,$2a
	db	$4b,$53,$b6,$d4,$ca,$6c,$a5,$d5,$b4,$69,$69,$d5,$ca,$6a,$e9,$e4
	db	$b8,$58,$35,$b4,$b8,$58,$55,$35,$9d,$66,$2b,$cd,$62,$55,$4a,$61
	db	$32,$5a,$32,$3b,$f4,$7b,$dd,$ab,$b6,$2d,$ae,$4a,$4c,$51,$45,$46
	db	$29,$a3,$4a,$a5,$c9,$4a,$a5,$4b,$d3,$ca,$65,$d5,$d4,$69,$69,$69
	db	$b5,$2a,$ab,$6a,$aa,$aa,$a9,$52,$53,$aa,$a9,$6c,$69,$35,$6b,$d5
	db	$4a,$5b,$ac,$92,$68,$14,$95,$15,$2b,$9b,$fe,$9a,$5f,$97,$a7,$27
	db	$4b,$c5,$a2,$92,$c2,$92,$91,$51,$95,$a9,$54,$55,$b6,$52,$ab,$c6
	db	$95,$55,$ab,$aa,$56,$d3,$aa,$b2,$95,$56,$d5,$54,$69,$a9,$52,$55
	db	$59,$2d,$ba,$6a,$ba,$4c,$ad,$2a,$96,$14,$16,$95,$8d,$8a,$ae,$6b
	db	$6f,$b7,$ab,$5b,$75,$26,$95,$8c,$92,$14,$95,$92,$54,$49,$4b,$a5
	db	$95,$5a,$55,$ab,$d5,$d2,$65,$b5,$4a,$ad,$b4,$aa,$aa,$5a,$aa,$aa
	db	$96,$a5,$26,$4d,$96,$aa,$aa,$c5,$d5,$aa,$cb,$d4,$6a,$e1,$a2,$d0
	db	$00,$00,$00,$00,$00,$20,$70,$76,$6f,$bf,$ff,$ff,$ff,$ff,$6b,$12
	db	$0c,$90,$00,$00,$80,$84,$d2,$a8,$98,$36,$4d,$96,$ed,$9f,$65,$9b
	db	$bd,$d8,$31,$d8,$18,$c8,$89,$cc,$41,$1c,$cb,$ae,$53,$ad,$e7,$78
	db	$db,$ac,$db,$b4,$cb,$26,$4c,$72,$69,$32,$67,$32,$6c,$33,$73,$ee
	db	$26,$ce,$93,$87,$51,$b0,$30,$2a,$2c,$5a,$9d,$db,$d3,$ed,$bb,$3f
	db	$d9,$24,$48,$86,$49,$84,$cc,$c0,$4c,$9c,$c4,$5b,$cc,$69,$87,$66
	db	$5d,$d6,$2c,$de,$2c,$5b,$96,$cb,$c3,$69,$b2,$78,$18,$2c,$9e,$4c
	db	$c7,$e7,$e1,$a6,$35,$51,$33,$23,$8b,$26,$33,$22,$3f,$b6,$0f,$f7
	db	$67,$fb,$34,$73,$30,$4d,$34,$c8,$44,$8d,$14,$1b,$c3,$c9,$e2,$f0
	db	$74,$5c,$3c,$8e,$ce,$ce,$c9,$d2,$e9,$38,$d9,$b4,$4c,$2e,$4b,$c3
	db	$4c,$99,$8d,$d9,$4c,$f9,$61,$ed,$b0,$5a,$38,$4d,$b8,$04,$9b,$25
	db	$17,$27,$bf,$e3,$73,$e6,$fb,$16,$1d,$32,$83,$03,$c3,$61,$61,$32
	db	$2c,$13,$8f,$c3,$a6,$93,$b3,$cd,$aa,$cd,$3c,$65,$f6,$68,$9a,$3c
	db	$cd,$0c,$8f,$8c,$8d,$22,$c7,$c5,$c7,$f8,$69,$7c,$b8,$1c,$13,$1b
	db	$c1,$03,$e3,$e0,$53,$3f,$7a,$bb,$9f,$9f,$b0,$49,$39,$28,$23,$91
	db	$52,$29,$93,$34,$2d,$39,$4e,$35,$cb,$93,$d3,$a6,$e3,$d2,$71,$e9
	db	$e4,$9c,$26,$1e,$0d,$0f,$d3,$c3,$f0,$e0,$f4,$49,$7e,$e4,$87,$5e
	db	$d4,$48,$4d,$58,$c8,$8a,$f5,$f8,$ce,$fc,$3e,$1f,$8d,$96,$52,$83
	db	$61,$c2,$a1,$91,$e4,$70,$b4,$38,$1b,$2d,$8f,$87,$c7,$d3,$b8,$71
	db	$f8,$b0,$2e,$aa,$a3,$99,$95,$b2,$05,$3d,$e2,$13,$b7,$f8,$d8,$8e
	db	$7c,$ca,$89,$26,$45,$85,$ca,$b0,$e2,$f5,$ec,$f8,$7f,$3e,$8e,$4e
	db	$13,$a3,$41,$61,$64,$54,$38,$3c,$4c,$2e,$d5,$52,$67,$b9,$49,$2f
	db	$59,$97,$99,$3a,$f2,$06,$bb,$98,$93,$95,$d6,$c8,$c3,$72,$d1,$69
	db	$7a,$5c,$2e,$1d,$8b,$45,$93,$a4,$c2,$41,$f3,$78,$5a,$3d,$ff,$57
	db	$57,$ea,$54,$a9,$90,$44,$13,$25,$a5,$4a,$b4,$4a,$4e,$69,$55,$53
	db	$b7,$e0,$87,$7b,$e2,$b2,$2a,$3d,$9a,$1e,$5a,$95,$4b,$d3,$68,$69
	db	$69,$b9,$2a,$97,$ae,$c6,$25,$35,$29,$29,$49,$58,$c5,$b5,$d1,$db
	db	$7e,$af,$cd,$96,$56,$45,$49,$e2,$90,$34,$61,$d1,$14,$5d,$a8,$0f
	db	$9e,$46,$97,$4b,$f3,$68,$ab,$b8,$2a,$97,$d6,$4a,$d3,$2a,$b5,$14
	db	$17,$55,$ca,$6a,$69,$d9,$aa,$4b,$ab,$45,$4b,$25,$45,$a5,$d4,$69
	db	$d9,$f4,$3d,$7f,$da,$16,$2f,$c5,$c2,$05,$5a,$d0,$12,$5c,$4a,$9a
	db	$46,$b5,$62,$5b,$66,$4d,$97,$4d,$cb,$a6,$55,$ba,$e4,$aa,$b4,$52
	db	$4b,$95,$a6,$a2,$55,$e9,$54,$6d,$39,$5b,$2e,$4b,$a5,$4a,$85,$c1
	db	$b2,$68,$33,$79,$fe,$ee,$8b,$7d,$c9,$96,$68,$92,$a4,$85,$64,$89
	db	$55,$52,$55,$95,$ac,$b2,$a9,$a5,$e5,$d2,$5a,$da,$54,$b5,$5c,$5a
	db	$35,$97,$ca,$a5,$b2,$62,$71,$b1,$ac,$2a,$57,$ab,$96,$56,$a9,$4a
	db	$4a,$54,$49,$93,$d9,$a2,$df,$bb,$5d,$6d,$8f,$5a,$25,$a6,$a8,$a4
	db	$24,$69,$54,$2a,$2d,$5a,$4a,$9b,$a6,$95,$55,$b3,$f2,$d8,$b4,$b4
	db	$56,$a6,$55,$4d,$53,$4d,$95,$aa,$52,$53,$d9,$d8,$aa,$b5,$5a,$a5
	db	$2b,$56,$12,$95,$a2,$aa,$64,$d9,$f8,$2f,$bf,$2e,$af,$95,$a5,$a2
	db	$51,$49,$58,$92,$2a,$2a,$4d,$a5,$aa,$b2,$a6,$5a,$56,$ab,$aa,$55
	db	$d5,$b4,$6a,$55,$b6,$d4,$2a,$9b,$4a,$8b,$a6,$aa,$b2,$9a,$5c,$35
	db	$5d,$aa,$56,$c5,$92,$c2,$a2,$b4,$64,$74,$5d,$7b,$77,$57,$b7,$ba
	db	$92,$4a,$4a,$49,$92,$52,$a2,$4a,$5a,$34,$55,$35,$ad,$56,$ab,$a5
	db	$ab,$6a,$aa,$96,$9a,$96,$55,$55,$55,$d5,$2c,$55,$aa,$52,$55,$55
	db	$63,$ab,$d5,$6a,$6a,$35,$5a,$14,$1a,$25,$4b,$25,$eb,$ea,$db,$de
	db	$da,$d6,$96,$aa,$a4,$92,$52,$58,$92,$54,$2a,$4d,$a5,$aa,$aa,$65
	db	$d5,$ac,$5a,$55,$4b,$d5,$aa,$aa,$55,$b6,$d4,$2a,$9b,$4a,$4b,$a5
	db	$00,$00,$00,$00,$a8,$da,$e7,$f9,$fe,$ab,$42,$00,$81,$a0,$aa,$54
	db	$5d,$57,$c7,$51,$55,$2d,$1c,$e2,$24,$55,$d5,$75,$8e,$57,$75,$b5
	db	$aa,$e2,$9c,$3a,$aa,$d2,$7b,$66,$4c,$aa,$12,$c5,$f0,$bb,$ba,$aa
	db	$ea,$71,$0c,$83,$48,$a9,$38,$3e,$5a,$55,$8f,$e3,$6a,$0e,$17,$55
	db	$55,$31,$c7,$33,$ad,$56,$05,$17,$63,$e8,$da,$5d,$b7,$cf,$a1,$a8
	db	$a0,$2a,$52,$b2,$46,$ed,$8c,$9b,$b9,$51,$6d,$ae,$42,$cd,$98,$2a
	db	$4f,$5d,$59,$1e,$13,$4a,$b8,$f0,$f9,$79,$3e,$47,$a5,$c8,$21,$25
	db	$25,$67,$6a,$e9,$6a,$56,$55,$c7,$95,$15,$a7,$b1,$8a,$86,$37,$a7
	db	$63,$36,$4a,$0c,$4d,$eb,$f1,$7d,$2e,$33,$43,$49,$c9,$48,$4e,$96
	db	$59,$b9,$c6,$a6,$95,$35,$ba,$e2,$e4,$58,$c9,$b1,$56,$a7,$e3,$38
	db	$34,$8a,$ca,$e6,$f3,$de,$19,$53,$45,$8a,$49,$31,$55,$56,$ea,$cc
	db	$9a,$9c,$39,$35,$5b,$ca,$d1,$e2,$70,$5a,$d6,$c6,$d5,$a8,$62,$a8
	db	$94,$5b,$7b,$f7,$54,$4d,$86,$8a,$8a,$32,$d5,$54,$ce,$2a,$a7,$5a
	db	$d6,$78,$5c,$5c,$a9,$c6,$a8,$99,$39,$73,$66,$66,$94,$18,$b5,$55
	db	$f7,$5d,$b3,$aa,$88,$8a,$52,$4a,$93,$69,$5a,$2d,$1e,$8f,$55,$35
	db	$73,$aa,$aa,$8a,$a9,$5a,$39,$6e,$4e,$55,$94,$a8,$ac,$59,$bf,$5b
	db	$ab,$46,$51,$91,$92,$8a,$a3,$c5,$65,$2d,$9b,$99,$33,$b3,$aa,$aa
	db	$2a,$63,$a9,$aa,$39,$a7,$99,$2a,$4a,$ca,$ac,$b9,$fb,$3a,$ae,$4a
	db	$51,$94,$54,$52,$a3,$a6,$56,$cd,$5c,$55,$d5,$72,$aa,$a9,$46,$55
	db	$c5,$a9,$75,$56,$55,$aa,$48,$16,$33,$f7,$ee,$bc,$ac,$54,$a4,$a8
	db	$a8,$54,$99,$aa,$55,$ce,$6c,$59,$39,$ab,$6a,$aa,$aa,$98,$a6,$6a
	db	$35,$97,$65,$2a,$4a,$95,$1c,$bf,$5b,$b7,$ac,$54,$94,$28,$a9,$32
	db	$8e,$ce,$cc,$aa,$5a,$55,$55,$d3,$ac,$b2,$54,$a5,$aa,$9a,$b5,$aa
	db	$65,$45,$29,$8e,$59,$af,$bb,$d6,$4c,$a9,$28,$4a,$c5,$34,$55,$55
	db	$55,$ad,$9a,$55,$55,$b5,$aa,$aa,$4a,$a5,$99,$71,$d5,$aa,$c5,$51
	db	$31,$a3,$5a,$ef,$b6,$ae,$4a,$45,$89,$8a,$aa,$2a,$cb,$d2,$ac,$ac
	db	$aa,$5a,$55,$ab,$aa,$aa,$4a,$55,$95,$59,$d3,$55,$a5,$8a,$92,$29
	db	$ad,$7b,$bb,$b5,$52,$29,$4a,$51,$ca,$32,$d5,$aa,$4a,$73,$99,$59
	db	$55,$ab,$aa,$5a,$4c,$55,$65,$d9,$aa,$6a,$a3,$89,$51,$25,$5b,$6f
	db	$db,$ba,$a4,$54,$92,$8a,$a9,$52,$55,$ab,$aa,$aa,$aa,$96,$55,$b3
	db	$aa,$56,$45,$55,$d5,$58,$75,$55,$a5,$a4,$92,$49,$5d,$ef,$b6,$b5
	db	$52,$49,$8a,$91,$b2,$54,$95,$55,$d5,$1c,$97,$56,$55,$35,$ab,$aa
	db	$4a,$65,$aa,$3a,$73,$56,$55,$45,$aa,$18,$d7,$dd,$ba,$b6,$54,$51
	db	$a2,$92,$aa,$54,$55,$53,$cb,$aa,$96,$96,$b5,$ac,$aa,$66,$54,$65
	db	$6a,$71,$b5,$aa,$a3,$61,$54,$29,$db,$6e,$d7,$b5,$54,$29,$49,$29
	db	$aa,$29,$4b,$53,$55,$ad,$aa,$56,$55,$ad,$aa,$9a,$2a,$a5,$6a,$59
	db	$cd,$b2,$a5,$a2,$4a,$c5,$b9,$ed,$ea,$b9,$54,$52,$91,$8a,$aa,$52
	db	$55,$55,$4b,$6d,$96,$95,$d5,$ac,$aa,$aa,$52,$59,$6a,$dc,$aa,$6a
	db	$65,$62,$54,$a9,$ba,$db,$b5,$b5,$94,$52,$94,$8a,$c6,$4a,$55,$d3
	db	$aa,$aa,$96,$e6,$ac,$aa,$aa,$1a,$4b,$55,$6a,$5a,$75,$ac,$69,$a4
	db	$d4,$a8,$ce,$bb,$ba,$3a,$aa,$64,$98,$a2,$a9,$b2,$d2,$b2,$2a,$ab
	db	$aa,$56,$8e,$ab,$aa,$a9,$2a,$95,$69,$5a,$ad,$6a,$a9,$a4,$62,$c5
	db	$d5,$bb,$b5,$2d,$a5,$14,$65,$54,$aa,$54,$55,$d5,$2a,$ab,$56,$55
	db	$b5,$96,$9a,$69,$54,$a9,$aa,$da,$9c,$6a,$71,$64,$54,$ca,$b6,$db
	db	$75,$55,$29,$25,$a5,$a2,$aa,$aa,$d2,$ac,$aa,$66,$a5,$69,$56,$ad
	db	$aa,$2a,$55,$55,$5a,$55,$ad,$5a,$a9,$a4,$54,$c9,$f5,$76,$eb,$aa
	db	$24,$55,$14,$a5,$4a,$55,$55,$55,$cb,$6a,$56,$d5,$aa,$9a,$a6,$29
	db	$53,$aa,$aa,$56,$ad,$e9,$a8,$94,$54,$a9,$ae,$bb,$ae,$55,$29,$25
	db	$00,$00,$00,$00,$88,$fb,$5c,$ff,$ef,$4c,$02,$01,$80,$4e,$e9,$4e
	db	$d5,$d5,$b9,$6a,$c0,$18,$aa,$32,$47,$8d,$3b,$d7,$73,$55,$71,$c5
	db	$a8,$8e,$3a,$bb,$71,$39,$51,$51,$1a,$75,$55,$5f,$75,$e6,$31,$aa
	db	$18,$50,$a9,$5c,$c5,$b5,$54,$c7,$95,$c7,$71,$95,$a8,$e2,$aa,$56
	db	$57,$2d,$56,$64,$a8,$74,$75,$f7,$76,$8e,$8a,$0c,$8a,$d1,$18,$53
	db	$d3,$99,$53,$37,$55,$97,$31,$5b,$a2,$ca,$e5,$4c,$dd,$d2,$91,$18
	db	$29,$ea,$f5,$f6,$bc,$85,$66,$48,$4a,$4c,$ca,$65,$ac,$ae,$5a,$cd
	db	$32,$67,$96,$a6,$aa,$8c,$d5,$e8,$d9,$98,$0d,$8b,$91,$71,$9e,$fb
	db	$79,$ac,$0c,$45,$4a,$15,$4e,$9a,$59,$4d,$ad,$5a,$33,$63,$2b,$47
	db	$0e,$27,$c7,$96,$2e,$e7,$52,$34,$8a,$c9,$73,$f5,$37,$ab,$4a,$a4
	db	$c8,$a4,$8c,$59,$99,$99,$b3,$99,$39,$ad,$9a,$aa,$74,$54,$1c,$e7
	db	$6c,$5c,$8d,$89,$91,$52,$73,$e7,$f7,$52,$47,$62,$a4,$62,$cc,$54
	db	$e5,$ac,$72,$ec,$54,$e3,$71,$6a,$c6,$d2,$68,$aa,$ce,$9c,$99,$19
	db	$29,$31,$5b,$f3,$bb,$3a,$2d,$45,$8c,$92,$4a,$55,$65,$99,$8b,$a7
	db	$63,$35,$33,$a7,$6a,$34,$8e,$aa,$e6,$5c,$4d,$95,$a2,$18,$6b,$d6
	db	$ef,$d6,$aa,$42,$45,$45,$c9,$8c,$96,$99,$ad,$3a,$95,$33,$b3,$aa
	db	$2a,$d3,$58,$71,$99,$73,$65,$29,$a5,$28,$ab,$ba,$fb,$6a,$57,$e2
	db	$50,$24,$9c,$54,$69,$5a,$3a,$ab,$66,$55,$cb,$a6,$a9,$4c,$95,$aa
	db	$a9,$73,$55,$99,$89,$a4,$71,$3c,$bf,$f3,$72,$54,$a2,$a4,$a8,$94
	db	$9a,$66,$35,$35,$9b,$55,$b3,$aa,$16,$a7,$52,$aa,$66,$ae,$5c,$99
	db	$2a,$2a,$46,$c7,$ef,$b6,$cb,$4a,$4a,$92,$94,$ca,$98,$55,$55,$b5
	db	$5a,$a6,$d6,$b8,$aa,$aa,$58,$aa,$aa,$e9,$9c,$5a,$15,$a5,$52,$6a
	db	$be,$b7,$36,$4b,$2a,$62,$a4,$ca,$54,$55,$d5,$b2,$ac,$6a,$d5,$b4
	db	$aa,$aa,$4a,$a9,$aa,$5a,$ad,$6c,$aa,$18,$8b,$71,$f5,$6e,$af,$4a
	db	$49,$89,$8a,$ca,$51,$b3,$d2,$aa,$c6,$95,$55,$35,$ab,$aa,$2a,$95
	db	$a9,$6a,$73,$66,$65,$a4,$54,$4a,$db,$bb,$6d,$ab,$a4,$a4,$28,$a9
	db	$54,$55,$55,$1d,$73,$9a,$a5,$56,$ab,$aa,$ca,$54,$96,$95,$55,$ab
	db	$95,$8a,$29,$25,$5b,$6f,$d7,$56,$a9,$14,$a9,$54,$2a,$d5,$34,$ad
	db	$72,$aa,$5a,$e6,$74,$71,$56,$a6,$54,$35,$56,$a7,$5a,$1a,$29,$95
	db	$ac,$bd,$5d,$d7,$52,$2a,$8a,$52,$c5,$54,$59,$cd,$aa,$66,$69,$55
	db	$ad,$aa,$aa,$32,$65,$69,$69,$73,$5a,$a5,$52,$aa,$70,$f5,$6e,$6b
	db	$4b,$26,$29,$4a,$aa,$52,$55,$55,$ab,$ca,$a6,$56,$ad,$aa,$a6,$aa
	db	$54,$a9,$c6,$cb,$aa,$9a,$8a,$52,$29,$db,$ee,$7a,$2d,$55,$8a,$54
	db	$8c,$aa,$aa,$34,$2d,$b3,$aa,$9a,$e5,$aa,$9a,$99,$52,$35,$9a,$aa
	db	$2e,$5b,$2a,$46,$95,$6a,$b7,$eb,$d6,$52,$51,$92,$52,$65,$54,$d5
	db	$d4,$aa,$6a,$65,$55,$cd,$b2,$aa,$54,$a9,$6a,$5a,$ab,$5a,$99,$a2
	db	$54,$ca,$f5,$5d,$d7,$52,$2a,$4a,$4a,$95,$52,$55,$53,$4b,$a7,$55
	db	$39,$33,$c7,$72,$c6,$52,$69,$65,$d5,$aa,$a6,$a2,$d4,$a8,$75,$bb
	db	$f5,$8c,$29,$45,$15,$96,$4a,$55,$4d,$2d,$ab,$5c,$55,$55,$ab,$66
	db	$95,$52,$99,$aa,$56,$cb,$96,$8a,$32,$25,$57,$ef,$d6,$b5,$24,$95
	db	$a8,$54,$2a,$55,$55,$b5,$b2,$5a,$55,$ad,$aa,$aa,$55,$d1,$54,$6a
	db	$d6,$ca,$5c,$1c,$29,$55,$69,$bd,$5d,$5b,$95,$92,$94,$52,$a5,$aa
	db	$cc,$aa,$ca,$69,$a9,$59,$d5,$52,$ab,$b2,$8a,$a9,$59,$b5,$6a,$a9
	db	$a4,$54,$a9,$eb,$ee,$3a,$2b,$2a,$4a,$49,$4a,$35,$6a,$56,$4b,$9d
	db	$a9,$d3,$aa,$96,$a6,$2a,$95,$6a,$a6,$55,$a7,$8d,$89,$51,$a5,$b6
	db	$73,$b7,$56,$a9,$a8,$a8,$18,$35,$55,$b3,$aa,$6a,$56,$56,$55,$b3
	db	$d4,$2a,$95,$9a,$96,$53,$9d,$2d,$26,$2a,$95,$6c,$bd,$db,$6a,$65
	db	$92,$a2,$8a,$65,$cc,$54,$55,$cd,$aa,$6a,$ad,$aa,$aa,$99,$4a,$95
	db	$00,$00,$00,$00,$80,$6b,$57,$d7,$ff,$bf,$8a,$44,$08,$20,$a8,$78
	db	$ab,$aa,$fa,$e1,$aa,$2a,$36,$c0,$51,$b5,$c9,$70,$55,$5d,$eb,$56
	db	$d5,$29,$47,$55,$f5,$c2,$51,$a5,$af,$99,$a3,$42,$85,$54,$d5,$8f
	db	$b7,$aa,$aa,$37,$8f,$aa,$80,$98,$12,$57,$a5,$4e,$ab,$6a,$3c,$ae
	db	$46,$9d,$38,$54,$55,$ad,$1c,$f3,$ad,$64,$1c,$5a,$cc,$21,$f5,$ea
	db	$fa,$bb,$a8,$8a,$11,$0e,$8e,$94,$99,$72,$ec,$2c,$bd,$52,$d6,$31
	db	$6d,$55,$ca,$62,$65,$c5,$e9,$72,$87,$2e,$46,$4a,$19,$f1,$f3,$e6
	db	$fa,$19,$2b,$86,$8c,$92,$23,$a6,$ca,$9a,$56,$b5,$d9,$54,$4d,$5d
	db	$93,$5c,$16,$33,$66,$39,$b5,$72,$d6,$a4,$22,$63,$e2,$e9,$b9,$fd
	db	$3a,$2a,$15,$25,$25,$53,$52,$a6,$69,$55,$c7,$9a,$59,$66,$55,$d5
	db	$b1,$e2,$51,$29,$73,$96,$9d,$9c,$2b,$46,$c3,$a8,$b2,$ed,$ba,$77
	db	$a6,$2a,$23,$89,$2c,$29,$4e,$59,$a9,$33,$cb,$96,$39,$4b,$c7,$c6
	db	$b2,$b4,$34,$71,$9a,$56,$97,$55,$a3,$8a,$a1,$62,$cd,$3d,$77,$cf
	db	$cc,$91,$a1,$a2,$94,$31,$e3,$54,$4e,$35,$9d,$5a,$55,$e3,$c5,$65
	db	$71,$ac,$54,$19,$67,$8e,$9b,$56,$65,$94,$98,$72,$56,$dd,$af,$2e
	db	$b3,$a8,$a8,$28,$a5,$d4,$64,$aa,$59,$2d,$1d,$8f,$55,$e3,$cc,$a9
	db	$72,$d4,$58,$9a,$56,$d5,$96,$55,$15,$15,$a5,$aa,$59,$df,$6b,$cd
	db	$1a,$29,$46,$45,$a9,$38,$ec,$a8,$59,$b3,$8e,$8e,$35,$b3,$aa,$6a
	db	$1c,$2d,$aa,$5a,$56,$75,$65,$a5,$52,$91,$32,$6b,$ee,$3d,$b7,$aa
	db	$8a,$91,$61,$62,$45,$95,$56,$aa,$8e,$cb,$a6,$b3,$b4,$5c,$69,$9a
	db	$4a,$53,$95,$a5,$e6,$5c,$55,$65,$a2,$94,$b1,$71,$7e,$4f,$2f,$2b
	db	$8b,$a8,$44,$a9,$54,$95,$9a,$55,$39,$cb,$a6,$8d,$ab,$a6,$9a,$59
	db	$34,$5a,$1c,$97,$2d,$a7,$65,$c5,$28,$59,$74,$bc,$b7,$75,$cb,$4a
	db	$29,$29,$4a,$aa,$54,$55,$55,$4d,$35,$6b,$5a,$d5,$aa,$aa,$2a,$2b
	db	$55,$aa,$aa,$a6,$ab,$aa,$59,$49,$2a,$8d,$5a,$7e,$dd,$5a,$ab,$64
	db	$14,$a3,$54,$1c,$53,$55,$55,$35,$cb,$55,$59,$55,$b3,$b4,$9c,$2a
	db	$55,$aa,$1a,$57,$ab,$aa,$71,$54,$e4,$a8,$5a,$df,$b6,$b6,$4a,$29
	db	$49,$29,$65,$54,$35,$ab,$ac,$4c,$a7,$a9,$66,$55,$b5,$aa,$aa,$4a
	db	$95,$aa,$66,$cd,$aa,$5a,$c6,$28,$55,$54,$db,$dd,$ae,$ad,$4c,$4a
	db	$4a,$49,$46,$55,$55,$4d,$b3,$aa,$aa,$99,$a6,$55,$ad,$aa,$16,$53
	db	$59,$95,$69,$cb,$a6,$8e,$26,$26,$95,$b4,$f5,$b6,$6d,$55,$25,$a5
	db	$a4,$54,$aa,$52,$55,$ad,$aa,$aa,$6a,$6a,$5a,$ad,$aa,$6a,$a6,$aa
	db	$54,$35,$b6,$aa,$5a,$a5,$a1,$91,$25,$75,$bd,$5d,$5b,$2b,$95,$a4
	db	$a8,$14,$d3,$58,$55,$55,$cb,$6a,$95,$9a,$e3,$b4,$b4,$aa,$2a,$55
	db	$a5,$96,$55,$ab,$5a,$99,$62,$54,$15,$d7,$eb,$d6,$d5,$52,$45,$29
	db	$2a,$a9,$2a,$55,$55,$b5,$aa,$aa,$a6,$aa,$b9,$72,$5a,$aa,$4a,$55
	db	$a5,$aa,$5a,$ab,$3a,$9a,$a8,$54,$d2,$d6,$eb,$ba,$b5,$54,$49,$49
	db	$45,$a9,$46,$55,$35,$b3,$d4,$6a,$aa,$55,$d5,$ac,$96,$99,$2a,$55
	db	$65,$a9,$ce,$ca,$a6,$52,$46,$95,$aa,$ed,$76,$ba,$2e,$55,$92,$52
	db	$8a,$a9,$54,$53,$4b,$ad,$b2,$aa,$6a,$96,$ab,$32,$ad,$ca,$54,$66
	db	$5a,$d6,$aa,$6a,$65,$51,$31,$65,$5c,$bd,$6b,$5b,$4b,$a9,$28,$a5
	db	$a8,$aa,$54,$55,$53,$ab,$9c,$99,$5a,$35,$cd,$b1,$aa,$4a,$55,$96
	db	$99,$56,$75,$5c,$a9,$a4,$d4,$98,$56,$ef,$ea,$ce,$51,$52,$2a,$2a
	db	$95,$2a,$55,$55,$55,$53,$b3,$aa,$56,$75,$9c,$aa,$aa,$2a,$a3,$a9
	db	$aa,$55,$ab,$5a,$2a,$29,$55,$aa,$b6,$bb,$b5,$b5,$94,$52,$51,$51
	db	$a9,$4a,$55,$55,$b5,$d4,$6a,$65,$b5,$aa,$9a,$6a,$aa,$2a,$55,$9a
	db	$6a,$cd,$a6,$16,$47,$46,$8d,$b1,$ed,$76,$ad,$55,$25,$a5,$14,$55
	db	$a5,$aa,$4a,$d5,$b1,$6a,$56,$aa,$59,$55,$ab,$6a,$ca,$a2,$9a,$56
	db	$00,$00,$00,$00,$c2,$d6,$af,$ff,$6f,$10,$20,$10,$3a,$55,$ad,$ce
	db	$53,$23,$57,$50,$25,$86,$96,$2b,$b5,$73,$dd,$a8,$63,$e5,$6a,$1c
	db	$b9,$ab,$d4,$35,$a2,$18,$56,$aa,$fa,$4f,$ad,$3c,$35,$2a,$30,$54
	db	$23,$ae,$35,$e5,$b9,$53,$d1,$99,$62,$a5,$ac,$d1,$b6,$6a,$4b,$51
	db	$54,$e8,$ee,$9d,$f7,$46,$24,$03,$35,$8a,$5c,$31,$9d,$ab,$ea,$5c
	db	$59,$6a,$2c,$35,$4a,$67,$ba,$66,$35,$4a,$4a,$34,$5c,$bf,$ee,$1d
	db	$c3,$41,$8c,$4a,$69,$a6,$56,$73,$5a,$cb,$ac,$6a,$55,$66,$2c,$a6
	db	$56,$67,$63,$0b,$93,$c1,$b8,$ae,$f7,$5d,$46,$23,$61,$54,$61,$96
	db	$5c,$55,$ad,$66,$66,$4d,$2d,$2b,$07,$17,$b3,$a5,$cb,$39,$45,$a5
	db	$28,$db,$d5,$ef,$c6,$4c,$8c,$c8,$c4,$54,$66,$66,$e6,$96,$35,$d3
	db	$b1,$a9,$c9,$61,$71,$96,$b3,$5a,$8d,$49,$91,$d4,$dc,$fd,$ce,$4c
	db	$25,$26,$46,$32,$53,$95,$53,$73,$ea,$d4,$b2,$74,$aa,$b2,$98,$9a
	db	$a9,$cb,$5a,$a5,$94,$44,$6d,$75,$7f,$4e,$4d,$91,$92,$a4,$54,$99
	db	$9a,$b9,$38,$9b,$55,$39,$9d,$9a,$aa,$64,$66,$56,$6b,$55,$95,$48
	db	$a9,$aa,$77,$6f,$2b,$33,$12,$15,$29,$39,$9a,$99,$ad,$9c,$ce,$cc
	db	$aa,$32,$2b,$8b,$c5,$9a,$d5,$69,$a5,$62,$24,$b3,$ea,$77,$d7,$aa
	db	$18,$19,$89,$49,$95,$aa,$56,$39,$6b,$55,$cd,$a6,$aa,$26,$a6,$65
	db	$e6,$5a,$59,$a5,$28,$2a,$a7,$bd,$4f,$cf,$61,$92,$12,$a9,$54,$a5
	db	$6a,$cd,$ca,$66,$66,$67,$6a,$aa,$34,$35,$6a,$d9,$9c,$56,$29,$52
	db	$a6,$f1,$db,$eb,$b2,$54,$a4,$48,$2a,$e5,$64,$55,$ad,$6a,$56,$36
	db	$33,$2d,$2b,$95,$2a,$6b,$b5,$a6,$59,$52,$e1,$98,$f9,$de,$da,$4c
	db	$2a,$52,$54,$ac,$54,$b5,$52,$cd,$a9,$55,$2d,$cb,$aa,$2a,$95,$a9
	db	$59,$ad,$6a,$cc,$a8,$52,$6a,$ef,$76,$ad,$94,$24,$29,$a6,$cc,$4c
	db	$d5,$2a,$67,$66,$59,$b5,$b2,$aa,$54,$55,$aa,$36,$a7,$96,$91,$52
	db	$49,$eb,$dd,$6d,$2b,$a5,$28,$4a,$46,$4b,$55,$b5,$ac,$5a,$56,$56
	db	$2b,$ab,$aa,$54,$95,$a6,$ce,$66,$a3,$62,$54,$b1,$f5,$6e,$6b,$95
	db	$92,$a4,$a8,$2a,$35,$ab,$aa,$72,$a6,$a6,$35,$6e,$65,$a9,$52,$93
	db	$59,$ad,$5c,$19,$49,$95,$78,$bd,$d7,$b5,$94,$92,$28,$69,$4c,$55
	db	$55,$ad,$72,$a5,$65,$d5,$aa,$aa,$8a,$55,$9a,$5a,$67,$55,$23,$49
	db	$95,$da,$dd,$b5,$4d,$15,$29,$4a,$2a,$55,$55,$d5,$cc,$a9,$6a,$d6
	db	$6a,$6a,$9a,$52,$a9,$ca,$d5,$aa,$96,$91,$52,$c9,$f6,$76,$5d,$53
	db	$c5,$48,$4a,$69,$aa,$54,$b5,$b2,$aa,$9a,$55,$ad,$66,$a6,$8a,$95
	db	$e5,$e2,$ac,$b1,$a8,$94,$9a,$bd,$eb,$d6,$54,$52,$a4,$52,$29,$4d
	db	$55,$ad,$ca,$a6,$56,$35,$cb,$9a,$4c,$a5,$6a,$56,$ad,$56,$2a,$46
	db	$95,$3a,$df,$75,$2d,$a5,$44,$4a,$a9,$52,$53,$d3,$aa,$9a,$65,$4d
	db	$d5,$aa,$2a,$33,$95,$9a,$56,$ad,$9a,$92,$d2,$a8,$b5,$bb,$5e,$99
	db	$51,$91,$4a,$a9,$d4,$b4,$32,$b5,$56,$9a,$e9,$9c,$9a,$95,$2c,$56
	db	$6a,$d5,$b2,$a9,$a4,$54,$b1,$bb,$db,$d6,$54,$8a,$a4,$54,$2a,$35
	db	$55,$35,$ad,$a6,$55,$ab,$a6,$99,$19,$55,$66,$5c,$b5,$6a,$1c,$29
	db	$95,$dc,$6e,$b7,$36,$25,$45,$4a,$a5,$4a,$55,$2b,$ad,$aa,$69,$56
	db	$cd,$72,$a5,$aa,$98,$5a,$2e,$ab,$96,$8a,$52,$95,$76,$77,$5b,$2b
	db	$2a,$31,$92,$ca,$a8,$55,$55,$b3,$69,$56,$d5,$a9,$96,$2a,$55,$aa
	db	$65,$e5,$66,$65,$a2,$52,$a9,$f5,$76,$6b,$a5,$94,$a4,$42,$a7,$34
	db	$35,$ab,$5a,$95,$95,$53,$cb,$2a,$53,$a5,$5a,$35,$6b,$b5,$98,$18
	db	$95,$6c,$bd,$bd,$5a,$95,$94,$28,$a5,$46,$4d,$55,$4d,$ad,$aa,$d5
	db	$6a,$95,$aa,$4a,$a9,$9a,$5a,$97,$36,$26,$c9,$94,$da,$6e,$af,$4e
	db	$29,$29,$45,$a5,$2a,$53,$d5,$4a,$b3,$aa,$d6,$5a,$6a,$95,$52,$9a
	db	$9a,$d5,$aa,$55,$85,$4a,$a5,$ed,$ae,$57,$2b,$54,$92,$52,$a9,$54
	db	$00,$00,$00,$00,$c0,$ef,$fe,$ff,$12,$01,$80,$88,$58,$b9,$95,$e9
	db	$8d,$d4,$32,$82,$2b,$b9,$91,$df,$ca,$8d,$5c,$a9,$9d,$5c,$6d,$d4
	db	$a3,$95,$19,$55,$62,$a3,$cf,$ad,$f4,$4a,$2c,$24,$86,$d9,$8a,$53
	db	$2b,$37,$7a,$a9,$4e,$2c,$74,$4a,$dd,$e6,$b8,$8c,$28,$86,$eb,$f7
	db	$ea,$67,$42,$42,$31,$8a,$6a,$6c,$33,$5b,$55,$55,$57,$53,$56,$61
	db	$95,$b9,$65,$67,$32,$04,$53,$d7,$af,$3f,$23,$33,$18,$a8,$54,$35
	db	$99,$b5,$36,$a7,$a6,$5a,$2b,$93,$2a,$99,$cb,$e9,$64,$29,$19,$c9
	db	$75,$de,$fb,$18,$23,$51,$8c,$b1,$4a,$67,$5a,$99,$c9,$d5,$6c,$73
	db	$19,$4d,$4c,$4d,$d3,$71,$46,$65,$94,$ed,$dc,$ae,$a9,$54,$8a,$4c
	db	$26,$a7,$33,$8d,$65,$2a,$67,$eb,$b5,$b2,$34,$94,$aa,$54,$66,$99
	db	$9a,$cc,$6c,$b6,$b3,$99,$c9,$68,$94,$55,$35,$67,$b1,$14,$65,$d5
	db	$76,$5f,$d5,$c4,$48,$26,$a5,$9a,$ca,$72,$9a,$56,$33,$8f,$d3,$58
	db	$c5,$64,$56,$b3,$33,$95,$52,$a4,$36,$bb,$9f,$6b,$29,$92,$a4,$18
	db	$8b,$d5,$cc,$c5,$6c,$56,$73,$1d,$cd,$54,$52,$35,$d5,$66,$56,$32
	db	$52,$56,$dd,$db,$99,$8d,$a4,$18,$53,$1a,$c7,$65,$2a,$b3,$59,$dd
	db	$6a,$d5,$c4,$a8,$54,$96,$d5,$54,$65,$32,$ab,$d9,$9d,$d5,$4c,$4a
	db	$b1,$52,$d5,$2c,$95,$4a,$35,$b3,$dd,$6d,$56,$26,$54,$4a,$a5,$a6
	db	$a6,$5a,$aa,$95,$cd,$b9,$2a,$2b,$13,$53,$a5,$b5,$66,$66,$12,$95
	db	$e5,$fc,$e7,$72,$92,$22,$31,$2a,$55,$55,$35,$9b,$d5,$cc,$66,$55
	db	$59,$99,$98,$59,$ad,$d5,$54,$a2,$34,$96,$ef,$ad,$cb,$91,$94,$a8
	db	$64,$2a,$ab,$99,$aa,$56,$6a,$67,$b3,$aa,$52,$4c,$55,$d5,$cc,$aa
	db	$52,$c9,$2c,$bd,$5b,$9b,$4a,$89,$4a,$a5,$56,$55,$55,$96,$aa,$e6
	db	$ba,$56,$ab,$c4,$a4,$94,$56,$59,$4d,$53,$6a,$a6,$b6,$b5,$aa,$95
	db	$94,$52,$69,$b5,$b4,$1a,$2a,$33,$b6,$bb,$9d,$55,$29,$49,$4a,$66
	db	$aa,$9a,$a9,$96,$9a,$35,$ab,$55,$55,$2a,$55,$66,$6d,$d6,$62,$94
	db	$54,$6c,$ef,$eb,$56,$52,$12,$29,$a5,$d2,$6a,$66,$6a,$95,$d6,$aa
	db	$d5,$4c,$95,$54,$95,$d5,$a9,$55,$62,$32,$59,$bb,$db,$5a,$2a,$49
	db	$2a,$55,$95,$55,$95,$69,$aa,$d6,$56,$6b,$a9,$52,$a9,$4c,$ad,$52
	db	$ab,$92,$aa,$54,$db,$ba,$ad,$52,$4a,$a9,$d4,$4c,$ad,$92,$29,$53
	db	$6d,$bb,$ae,$a6,$52,$a2,$54,$aa,$aa,$56,$a5,$95,$99,$cd,$66,$ad
	db	$4a,$29,$53,$63,$75,$5a,$95,$94,$4a,$ad,$77,$6d,$27,$c5,$48,$52
	db	$a9,$32,$ab,$aa,$ac,$56,$53,$6b,$65,$56,$32,$95,$55,$6b,$65,$63
	db	$a4,$4a,$da,$ee,$b6,$2d,$95,$22,$15,$93,$95,$6a,$a9,$b2,$aa,$d6
	db	$56,$ab,$99,$54,$29,$35,$55,$cb,$ca,$64,$2a,$b5,$b9,$ad,$ab,$2a
	db	$49,$a9,$54,$55,$55,$a5,$aa,$aa,$da,$d6,$d6,$54,$29,$a5,$54,$56
	db	$55,$55,$93,$a9,$aa,$b6,$b5,$56,$2a,$a5,$52,$b5,$aa,$6a,$2a,$a9
	db	$52,$ab,$b7,$ad,$95,$52,$52,$91,$95,$aa,$5a,$a6,$56,$69,$cd,$6a
	db	$56,$4b,$29,$55,$53,$ab,$59,$99,$a4,$54,$d6,$bd,$dd,$1a,$a9,$84
	db	$4a,$65,$aa,$aa,$9a,$9a,$9a,$b5,$da,$4c,$2d,$65,$52,$56,$b5,$aa
	db	$a5,$54,$aa,$d4,$de,$b6,$56,$4a,$2a,$29,$95,$99,$59,$95,$aa,$aa
	db	$d6,$b6,$56,$55,$2a,$a9,$54,$55,$55,$4b,$a5,$6a,$b2,$75,$ad,$35
	db	$a3,$94,$52,$59,$33,$ab,$4c,$aa,$2a,$6d,$db,$d6,$aa,$94,$92,$54
	db	$55,$56,$55,$a5,$66,$aa,$d6,$6a,$ad,$ca,$a8,$4c,$55,$ad,$6a,$a9
	db	$a8,$4a,$ad,$b7,$eb,$26,$25,$25,$52,$65,$34,$b5,$aa,$9a,$55,$b3
	db	$9a,$55,$55,$26,$55,$d5,$ca,$65,$63,$52,$2a,$d9,$ee,$6d,$ad,$94
	db	$24,$46,$66,$b1,$72,$6a,$65,$56,$ad,$ac,$66,$a6,$ca,$54,$35,$67
	db	$56,$8b,$49,$52,$a9,$bd,$bb,$b6,$52,$8a,$54,$52,$26,$ab,$ca,$ca
	db	$5a,$d5,$6a,$95,$55,$29,$95,$59,$b6,$56,$2d,$25,$a9,$94,$eb,$b5
	db	$00,$00,$00,$fc,$ff,$00,$00,$00,$a3,$e2,$41,$05,$44,$ae,$fb,$7d
	db	$37,$c9,$55,$eb,$c8,$18,$d1,$fb,$5b,$00,$82,$c9,$a6,$d3,$ed,$e8
	db	$38,$74,$2d,$06,$cc,$ef,$ff,$89,$44,$80,$c1,$6a,$d7,$ab,$52,$1a
	db	$f2,$67,$06,$c4,$fc,$bf,$0b,$05,$a0,$cc,$6d,$bb,$cc,$a9,$52,$a3
	db	$ab,$62,$90,$fb,$7f,$03,$10,$52,$c9,$da,$17,$9b,$93,$51,$b3,$d3
	db	$44,$b0,$ff,$bf,$02,$01,$a2,$aa,$d5,$ed,$ac,$91,$c9,$36,$9b,$00
	db	$75,$ff,$bf,$04,$80,$92,$66,$76,$cb,$6d,$2a,$c9,$e6,$a6,$40,$bc
	db	$fb,$7f,$20,$20,$92,$6a,$76,$5d,$cd,$52,$d1,$ea,$32,$82,$ce,$ff
	db	$9f,$08,$20,$03,$5b,$37,$ab,$59,$63,$31,$6d,$65,$82,$d5,$ff,$1f
	db	$11,$40,$32,$9a,$dd,$da,$d4,$2a,$1a,$bb,$52,$60,$f2,$ff,$4f,$18
	db	$80,$a4,$d9,$6c,$9d,$9d,$89,$66,$36,$53,$24,$e6,$ff,$4f,$04,$41
	db	$62,$d6,$6c,$ae,$d6,$92,$c9,$36,$1b,$70,$f4,$ff,$4d,$04,$42,$54
	db	$b6,$56,$eb,$b4,$94,$99,$4e,$13,$29,$fc,$ff,$a5,$20,$22,$52,$d5
	db	$66,$9b,$cd,$4c,$99,$59,$13,$89,$fa,$ff,$15,$11,$04,$93,$d9,$6a
	db	$b3,$ce,$cc,$d8,$d4,$22,$85,$fe,$7f,$13,$81,$44,$54,$b5,$66,$b3
	db	$d6,$64,$aa,$e9,$a4,$44,$fe,$df,$25,$21,$44,$52,$b3,$56,$b3,$55
	db	$4d,$39,$36,$49,$a1,$f7,$bf,$25,$22,$88,$52,$b5,$5a,$b5,$d5,$32
	db	$35,$36,$31,$e1,$ee,$bf,$4a,$44,$88,$4c,$b3,$5a,$cd,$55,$95,$95
	db	$35,$29,$51,$f7,$bf,$45,$24,$44,$49,$ab,$66,$b5,$d5,$54,$a9,$95
	db	$2a,$d2,$ee,$bf,$4a,$84,$48,$d1,$aa,$56,$6d,$d5,$54,$95,$8d,$26
	db	$b2,$fe,$bd,$12,$11,$51,$52,$ab,$56,$6d,$d5,$d4,$94,$4b,$25,$d4
	db	$fe,$b7,$4a,$88,$88,$52,$55,$67,$5b,$b5,$54,$c9,$a5,$8a,$d4,$fd
	db	$b7,$12,$89,$90,$38,$ab,$b5,$5a,$ad,$54,$69,$63,$89,$d4,$fe,$af
	db	$12,$21,$92,$58,$d5,$55,$5b,$ab,$54,$65,$53,$49,$6c,$bf,$af,$22
	db	$12,$94,$58,$d5,$59,$5b,$35,$55,$6a,$a5,$89,$6c,$ff,$5b,$91,$20
	db	$91,$cc,$6a,$d5,$5a,$55,$55,$6a,$a9,$91,$b4,$bf,$af,$12,$22,$a2
	db	$d8,$ac,$b5,$ad,$2a,$55,$6a,$95,$12,$b5,$ff,$ce,$44,$42,$24,$d6
	db	$6c,$ad,$56,$4d,$55,$ea,$54,$21,$75,$ff,$ab,$42,$82,$24,$55,$6b


