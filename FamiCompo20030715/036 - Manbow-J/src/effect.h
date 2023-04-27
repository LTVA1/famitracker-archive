	.include	"memoire.h"
dutyenve_table:
	dw	dutyenve_000
	dw	dutyenve_001
	dw	dutyenve_002
	dw	dutyenve_003
	dw	dutyenve_004
dutyenve_lp_table:
	dw	dutyenve_lp_000
	dw	dutyenve_lp_001
	dw	dutyenve_lp_002
	dw	dutyenve_lp_003
	dw	dutyenve_lp_004

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
	db	$03
dutyenve_lp_004:
	db	$07,$ff

softenve_table:
	dw	softenve_000
	dw	softenve_001
	dw	softenve_002
	dw	softenve_003
	dw	0
	dw	softenve_005
	dw	softenve_006
	dw	0
	dw	0
	dw	0
	dw	softenve_010
	dw	softenve_011
	dw	softenve_012
	dw	softenve_013
	dw	softenve_014
	dw	softenve_015
softenve_lp_table:
	dw	softenve_lp_000
	dw	softenve_lp_001
	dw	softenve_lp_002
	dw	softenve_lp_003
	dw	0
	dw	softenve_lp_005
	dw	softenve_lp_006
	dw	0
	dw	0
	dw	0
	dw	softenve_lp_010
	dw	softenve_lp_011
	dw	softenve_lp_012
	dw	softenve_lp_013
	dw	softenve_lp_014
	dw	softenve_lp_015

softenve_000:
	db	$06,$08,$07,$06,$05,$04,$07,$06
	db	$05,$04
softenve_lp_000:
	db	$03,$ff
softenve_001:
	db	$0a,$08,$07,$06,$05,$04,$07,$06
	db	$05,$04
softenve_lp_001:
	db	$03,$ff
softenve_002:
	db	$08,$0c,$0a,$09,$08,$0a,$09,$08
	db	$07
softenve_lp_002:
	db	$06,$ff
softenve_003:
	db	$0c,$0a,$09,$08,$07,$0a,$09,$08
	db	$07
softenve_lp_003:
	db	$06,$ff
softenve_005:
	db	$04,$06,$06,$05
softenve_lp_005:
	db	$04,$ff
softenve_006:
	db	$01,$02,$02,$02
softenve_lp_006:
	db	$01,$ff
softenve_010:
	db	$0d
softenve_lp_010:
	db	$00,$ff
softenve_011:
	db	$0f,$0c,$08,$04
softenve_lp_011:
	db	$00,$ff
softenve_012:
	db	$08,$04,$02
softenve_lp_012:
	db	$00,$ff
softenve_013:
	db	$07,$03,$01
softenve_lp_013:
	db	$00,$ff
softenve_014:
	db	$06,$03,$01
softenve_lp_014:
	db	$00,$ff
softenve_015:
	db	$08,$07,$06,$06,$05,$05,$04,$04
	db	$03,$03,$02,$02,$01,$01
softenve_lp_015:
	db	$00,$ff

pitchenve_table:
	dw	pitchenve_000
pitchenve_lp_table:
	dw	pitchenve_lp_000

pitchenve_000:
	db	$00
pitchenve_lp_000:
	db	$03,$ff

arpeggio_table:
	dw	0
	dw	arpeggio_001
arpeggio_lp_table:
	dw	0
	dw	arpeggio_lp_001

arpeggio_001:
	db	$00
arpeggio_lp_001:
	db	$04,$05,$89,$ff

lfo_data:
fds_data_table:
fds_effect_select:
fds_4088_data:


n106_channel:
	db	1
n106_wave_init:
n106_wave_table:


dpcm_data:
	db	$0f,$00,$00,$2a
	db	$00,$00,$00,$00
	db	$0f,$00,$0b,$8f
	.bank	2
	.org	$c000
	db	$00,$00,$00,$00,$00,$97,$c2,$93,$9e,$31,$87,$69,$f8,$f8,$f8,$fc
	db	$fd,$bf,$ef,$f4,$0f,$2f,$cd,$54,$55,$15,$b1,$14,$a2,$81,$94,$00
	db	$03,$00,$03,$20,$28,$34,$52,$69,$a9,$9a,$ea,$a2,$47,$37,$75,$6b
	db	$ad,$be,$fa,$e9,$bf,$ef,$ff,$ff,$df,$db,$b6,$56,$55,$55,$55,$95
	db	$52,$45,$a5,$0a,$15,$a4,$2c,$a0,$a0,$20,$44,$02,$48,$a0,$42,$21
	db	$55,$a4,$56,$95,$aa,$6a,$56,$ad,$a9,$6d,$55,$bb,$da,$da,$56,$7b
	db	$d7,$b6,$ad,$7b,$ab,$db,$d6,$d5,$b2,$6e,$6a,$4d,$55,$2b,$b5,$a9
	db	$6a,$d1,$56,$51,$ab,$a3,$2d,$2d,$ad,$aa,$95,$6a,$aa,$d4,$54,$95
	db	$4a,$95,$52,$aa,$44,$25,$25,$49,$4a,$42,$89,$94,$10,$21,$29,$22
	db	$49,$49,$a9,$54,$55,$55,$55,$b5,$aa,$55,$6b,$ad,$b5,$ad,$ad,$b5
	db	$db,$da,$ae,$f6,$b6,$ee,$f6,$bd,$6f,$df,$77,$db,$ad,$b5,$aa,$aa
	db	$aa,$aa,$2a,$55,$aa,$54,$4a,$49,$49,$49,$49,$8a,$24,$25,$49,$22
	db	$45,$92,$48,$84,$48,$24,$12,$52,$a4,$a4,$54,$aa,$4a,$55,$55,$b5
	db	$aa,$5a,$b5,$5a,$ad,$d5,$d6,$b6,$ba,$d5,$ad,$6d,$db,$b6,$6d,$db
	db	$da,$b6,$6d,$5b,$db,$da,$d6,$d6,$6a,$b5,$56,$b5,$aa,$aa,$55,$55
	db	$55,$a9,$aa,$54,$a9,$52,$a9,$94,$52,$4a,$49,$29,$29,$25,$25,$29
	db	$29,$25,$29,$49,$4a,$49,$49,$a9,$a4,$52,$aa,$52,$a5,$aa,$52,$55
	db	$55,$d5,$aa,$aa,$56,$ab,$56,$ab,$d5,$5a,$ad,$b5,$d6,$6a,$6d,$b5
	db	$d6,$5a,$ad,$b5,$5a,$b5,$5a,$ad,$aa,$55,$55,$55,$ad,$aa,$aa,$aa
	db	$aa,$aa,$2a,$55,$55,$55,$a9,$aa,$2a,$55,$55,$55,$55,$aa,$aa,$aa
	db	$52,$55,$95,$aa,$aa,$52,$55,$a5,$2a,$55,$55,$a9,$4a,$55,$a9,$aa
	db	$54,$55,$a9,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$6a,$aa,$aa,$aa,$6a
	db	$59,$aa,$6a,$59,$55,$55,$55,$d5,$aa,$aa,$aa,$55,$55,$ad,$aa,$6a
	db	$55,$55,$ad,$aa,$aa,$55,$55,$55,$d5,$aa,$aa,$aa,$aa,$aa,$4a,$55
	db	$55,$55,$55,$55,$a9,$aa,$aa,$2a,$55,$55,$55,$55,$55,$55,$55,$55
	db	$55,$95,$9a,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$56
	db	$55,$55,$55,$55,$55,$55,$55,$55,$55,$55,$55,$55,$55,$55,$55,$55
	db	$55,$55,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa
	db	$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$55,$55,$55
	db	$55,$55,$55,$55,$55,$55,$55,$55,$55,$55,$55,$55,$a9,$aa,$55,$55
	db	$55,$55,$55,$55,$b5,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$4a
	db	$55,$55,$55,$55,$55,$aa,$aa,$aa,$aa,$aa,$aa,$54,$55,$55,$55,$55
	db	$55,$ab,$aa,$aa,$aa,$aa,$aa,$5a,$55,$55,$55,$55,$55,$ab,$aa,$aa
	db	$aa,$aa,$aa,$aa,$aa,$aa,$54,$55,$55,$55,$55,$55,$aa,$aa,$aa,$aa
	db	$aa,$54,$55,$55,$55,$55,$55,$55,$55,$55,$ab,$aa,$aa,$aa,$aa,$aa
	db	$6a,$55,$55,$55,$55,$d5,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa
	db	$aa,$aa,$aa,$aa,$2a,$55,$55,$55,$55,$55,$55,$55,$55,$99,$aa,$aa
	db	$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa
	db	$aa,$aa,$aa,$aa,$aa,$aa,$56,$55,$55,$55,$55,$55,$55,$55,$55,$55
	db	$55,$55,$55,$55,$55,$55,$55,$55,$55,$55,$55,$55,$55,$55,$55,$55
	db	$55,$55,$55,$55,$55,$55,$55,$55,$55,$55,$55,$55,$55,$55,$55,$55
	db	$55,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa
	db	$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa
	db	$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa
	db	$00,$00,$e0,$7f,$38,$00,$00,$00,$00,$f8,$7f,$fc,$ff,$ff,$ff,$02
	db	$0f,$3c,$9a,$a4,$92,$00,$00,$00,$00,$c0,$ff,$1f,$be,$60,$c0,$87
	db	$fd,$ff,$ff,$ff,$ff,$ff,$92,$00,$80,$01,$3c,$f0,$0f,$00,$00,$00
	db	$c0,$b6,$6d,$ed,$fe,$ff,$ff,$ff,$ff,$c1,$03,$00,$f7,$b9,$73,$02
	db	$00,$11,$00,$00,$06,$c0,$6b,$fe,$ef,$ef,$33,$00,$ff,$ff,$fc,$ff
	db	$5f,$7b,$0c,$f8,$80,$01,$3a,$00,$00,$00,$88,$7b,$cc,$83,$13,$f7
	db	$f8,$ff,$e7,$fe,$ef,$e7,$a3,$1b,$01,$07,$00,$fc,$1e,$f0,$03,$00
	db	$00,$06,$12,$ef,$d1,$0b,$fe,$b3,$ff,$f7,$fe,$07,$7f,$e4,$e3,$61
	db	$83,$19,$80,$60,$18,$00,$80,$1d,$7e,$f6,$db,$ff,$18,$c4,$03,$03
	db	$ff,$7f,$ff,$3f,$1e,$41,$0c,$18,$9c,$27,$06,$93,$03,$c1,$61,$00
	db	$1c,$8d,$7f,$fe,$ff,$3f,$7f,$3c,$cc,$18,$1f,$84,$8e,$c1,$9e,$0d
	db	$1e,$83,$91,$21,$06,$98,$e7,$f9,$8f,$73,$8c,$03,$3f,$30,$f8,$ff
	db	$db,$ff,$89,$d8,$08,$10,$61,$00,$1e,$c1,$9f,$a1,$1f,$fc,$0c,$fc
	db	$e4,$ee,$f3,$69,$c4,$2b,$8e,$e3,$31,$67,$60,$1c,$f3,$1c,$3d,$03
	db	$33,$0c,$06,$39,$0e,$73,$ae,$73,$fc,$fe,$98,$07,$87,$39,$b3,$c7
	db	$cd,$c3,$82,$30,$0c,$80,$f6,$e9,$79,$e3,$cf,$1d,$34,$21,$72,$08
	db	$37,$db,$fc,$f2,$73,$87,$8a,$05,$27,$b9,$83,$39,$0d,$78,$88,$9c
	db	$d8,$79,$c3,$fc,$ee,$e2,$37,$1e,$6c,$11,$12,$c7,$88,$f3,$e0,$f1
	db	$23,$25,$2f,$e6,$d4,$0f,$fe,$05,$0d,$e3,$20,$e2,$66,$71,$dc,$9f
	db	$f1,$c2,$a1,$39,$ec,$78,$f1,$f0,$80,$03,$3c,$f1,$7d,$0f,$ff,$98
	db	$1c,$d0,$09,$71,$66,$63,$63,$4b,$15,$23,$39,$3c,$c7,$fe,$71,$db
	db	$8c,$47,$62,$52,$e0,$99,$83,$cf,$8b,$bc,$7c,$19,$c3,$c1,$60,$07
	db	$8b,$3d,$ce,$9f,$19,$33,$ae,$23,$1f,$63,$1d,$47,$c3,$92,$71,$fc
	db	$c4,$13,$87,$33,$42,$34,$e8,$6e,$e7,$89,$1c,$07,$ce,$03,$bf,$e7
	db	$7c,$67,$8f,$f1,$07,$00,$71,$70,$18,$9f,$8f,$e1,$30,$66,$1e,$c3
	db	$83,$8f,$cc,$cf,$7e,$dc,$1b,$86,$00,$b7,$1c,$7f,$b0,$cf,$90,$06
	db	$87,$0b,$1c,$e1,$fc,$d8,$7d,$dc,$03,$de,$e0,$38,$0e,$e7,$74,$de
	db	$02,$63,$45,$1a,$f4,$1b,$37,$6d,$f4,$8e,$27,$c8,$28,$2c,$c8,$b4
	db	$3e,$3c,$fc,$9a,$ec,$b0,$c3,$e7,$62,$3e,$3c,$47,$86,$f9,$01,$3c
	db	$1c,$f0,$60,$0d,$d6,$72,$3e,$3c,$ff,$83,$7f,$c0,$79,$6c,$60,$79
	db	$18,$2c,$c3,$f0,$71,$e6,$f0,$30,$87,$8c,$17,$9f,$d4,$af,$ed,$1b
	db	$56,$b8,$20,$04,$78,$f8,$61,$bb,$b6,$ee,$83,$ce,$19,$27,$0d,$f6
	db	$50,$95,$62,$94,$33,$70,$87,$f9,$e0,$8e,$df,$e3,$8f,$63,$4e,$f0
	db	$84,$15,$1a,$e6,$8c,$63,$8e,$09,$93,$2b,$9e,$e3,$de,$71,$5a,$37
	db	$5c,$a6,$e5,$20,$3c,$06,$1f,$ea,$0a,$0f,$1e,$73,$d3,$ca,$d1,$79
	db	$e6,$b8,$ca,$49,$d2,$a8,$21,$dc,$0d,$73,$cc,$58,$b3,$a3,$cf,$e1
	db	$d9,$d8,$65,$3e,$14,$b9,$50,$a3,$62,$9c,$54,$d8,$e6,$c4,$c7,$fc
	db	$31,$8e,$0d,$7e,$c3,$e6,$32,$6b,$c2,$2c,$9a,$89,$86,$83,$d5,$e3
	db	$2c,$5d,$13,$2e,$bb,$3f,$3c,$75,$33,$88,$a1,$84,$43,$bd,$a5,$da
	db	$29,$cb,$ca,$58,$a3,$96,$6c,$f5,$d6,$1b,$57,$98,$30,$11,$c5,$49
	db	$cc,$e8,$b6,$6f,$75,$39,$53,$ab,$4a,$67,$46,$d1,$70,$4c,$a2,$a3
	db	$7c,$b4,$aa,$5c,$15,$ff,$e8,$91,$8a,$6f,$6c,$e9,$c1,$c0,$e1,$30
	db	$51,$a4,$07,$6f,$7c,$7d,$ab,$67,$9e,$3a,$5c,$e3,$81,$0a,$32,$56
	db	$68,$38,$ae,$58,$dc,$6a,$b7,$d8,$f9,$2c,$96,$6b,$4e,$cb,$43,$b6
	db	$d0,$82,$28,$54,$d2,$f0,$e9,$ba,$b8,$db,$e6,$62,$3c,$6a,$5c,$ac
	db	$33,$aa,$19,$8e,$95,$bc,$44,$2d,$71,$86,$1b,$73,$d2,$55,$b7,$ca
	db	$9c,$31,$ae,$a0,$63,$93,$72,$8e,$b5,$c5,$19,$37,$3d,$93,$e5,$8d
	db	$d1,$68,$c8,$91,$b8,$e1,$38,$ce,$b1,$68,$75,$e1,$c6,$59,$eb,$ea
	db	$5e,$d6,$13,$95,$05,$42,$09,$61,$4d,$e3,$a5,$97,$e5,$63,$ea,$9e
	db	$63,$e7,$4a,$ab,$07,$95,$89,$85,$54,$6a,$38,$55,$36,$59,$74,$ab
	db	$b2,$47,$79,$74,$3c,$ae,$ac,$8d,$a6,$93,$2e,$64,$ca,$51,$aa,$b6
	db	$71,$da,$c5,$aa,$45,$61,$8d,$e5,$31,$ba,$19,$67,$34,$8b,$e1,$aa
	db	$4a,$d5,$37,$bb,$76,$19,$47,$49,$35,$22,$aa,$b2,$c4,$74,$63,$3c
	db	$b9,$3a,$74,$75,$6b,$e5,$9a,$ab,$d4,$c4,$c2,$52,$85,$26,$4f,$8d
	db	$2a,$a5,$56,$23,$bd,$4e,$77,$da,$9e,$e6,$24,$35,$84,$2c,$a4,$e3
	db	$18,$37,$b6,$3a,$ba,$54,$eb,$c4,$ad,$5c,$cd,$d1,$8c,$19,$5a,$2c
	db	$a6,$52,$d5,$b2,$c6,$6c,$45,$bb,$72,$ab,$56,$35,$55,$a5,$b2,$24
	db	$4a,$55,$71,$37,$6d,$95,$99,$2a,$6d,$6c,$56,$2b,$bc,$99,$3a,$95
	db	$1a,$d5,$92,$72,$61,$ca,$d2,$4c,$d5,$99,$6d,$5a,$6b,$e3,$64,$35
	db	$29,$55,$69,$8d,$a5,$4a,$e9,$a8,$6a,$69,$ad,$b2,$15,$5b,$2b,$ba
	db	$aa,$2e,$31,$57,$2a,$8d,$aa,$08,$cb,$68,$53,$eb,$39,$6d,$e7,$69
	db	$69,$99,$93,$58,$4a,$29,$65,$55,$65,$4b,$72,$15,$75,$56,$a6,$a9
	db	$ab,$a3,$f6,$54,$35,$4d,$4a,$4b,$65,$9c,$b4,$64,$16,$ab,$8a,$a7
	db	$b5,$55,$d9,$ac,$a5,$33,$4e,$51,$25,$36,$6a,$59,$95,$b3,$a9,$46
	db	$e3,$ac,$aa,$4d,$d5,$d6,$b2,$94,$4a,$15,$aa,$54,$55,$56,$6d,$3a
	db	$35,$ab,$56,$5a,$53,$35,$73,$ad,$ac,$4a,$c5,$52,$a5,$46,$aa,$54
	db	$65,$ab,$d4,$35,$55,$4b,$5d,$56,$d3,$6a,$4d,$e9,$2c,$a6,$b1,$64
	db	$a4,$aa,$24,$ae,$b2,$6e,$d5,$a5,$d5,$54,$7a,$71,$ac,$8c,$a7,$4a
	db	$ab,$8c,$ca,$aa,$46,$c7,$aa,$a5,$29,$ab,$d2,$96,$6a,$a9,$2c,$55
	db	$56,$55,$d5,$72,$6a,$b5,$b2,$b2,$ac,$aa,$9a,$a5,$a9,$55,$4c,$95
	db	$94,$46,$2d,$d5,$aa,$6a,$d3,$52,$ad,$6a,$a9,$56,$55,$73,$4a,$6d
	db	$aa,$a9,$aa,$64,$a9,$aa,$68,$96,$ac,$26,$57,$4d,$b5,$aa,$56,$55
	db	$ad,$2a,$6b,$69,$aa,$32,$a5,$aa,$4a,$aa,$55,$ad,$aa,$d6,$2a,$1b
	db	$53,$59,$a9,$4a,$aa,$aa,$aa,$55,$d5,$5a,$35,$b5,$aa,$b4,$d2,$d8
	db	$92,$4b,$b5,$2a,$5a,$95,$54,$aa,$aa,$56,$95,$69,$2d,$b5,$5a,$d5
	db	$4a,$d5,$4a,$d3,$54,$55,$55,$55,$55,$55,$a9,$52,$55,$a9,$9a,$aa
	db	$6a,$d5,$aa,$6a,$55,$ad,$6a,$5a,$29,$8d,$a6,$2c,$b5,$34,$ab,$ca
	db	$a6,$9a,$aa,$4a,$2b,$ab,$a9,$56,$b5,$54,$a9,$2a,$cb,$2a,$d3,$aa
	db	$6a,$55,$55,$55,$55,$69,$6a,$59,$56,$a5,$aa,$b2,$d4,$d4,$d2,$ca
	db	$aa,$aa,$35,$55,$ad,$54,$55,$aa,$5a,$aa,$d2,$56,$a5,$aa,$69,$a5
	db	$ca,$4c,$55,$59,$d5,$6a,$55,$4d,$ad,$aa,$2a,$cd,$4a,$55,$55,$59
	db	$a9,$b1,$4a,$55,$a5,$55,$95,$ad,$aa,$95,$56,$2b,$55,$d3,$54,$55
	db	$a5,$aa,$56,$4a,$2b,$2d,$55,$b5,$59,$aa,$aa,$56,$55,$ab,$4a,$55
	db	$55,$aa,$b4,$2a,$ad,$65,$9a,$aa,$aa,$56,$a5,$aa,$96,$aa,$aa,$5a
	db	$95,$5a,$55,$95,$a6,$96,$aa,$aa,$b4,$aa,$6a,$aa,$aa,$4a,$55,$b5
	db	$2a,$5b,$55,$b5,$4a,$55,$5a,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa
	db	$6a,$55,$55,$55,$35,$95,$aa,$b4,$b2,$d2,$aa,$4a,$9d,$aa,$a6,$a5
	db	$aa,$59,$aa,$55,$55,$55,$a9,$aa,$aa,$aa,$aa,$2a,$4b,$d3,$ac,$96
	db	$55,$5a,$55,$aa,$aa,$aa,$aa,$56,$55,$56,$ad,$cc,$54,$aa,$52,$55
	db	$35,$b5,$55,$a9,$5a,$a5,$aa,$aa,$aa,$aa,$56,$55,$b5,$aa,$aa,$54
	db	$aa,$54,$aa,$a5,$5a,$ad,$aa,$aa,$56,$55,$55,$55,$55,$55,$a9,$6a
	db	$6a,$aa,$a5,$aa,$56,$95,$a5,$55,$95,$52,$2b,$55,$a5,$55,$b5,$d2
	db	$aa,$aa,$6a,$55,$55,$b3,$aa,$52,$55,$55,$55,$95,$6a,$aa,$2a,$55
	db	$55,$55,$55,$55,$ab,$aa,$d6,$ca,$aa,$4a,$b5,$54,$55,$d5,$b2,$52
	db	$95,$5a,$aa,$32,$55,$a9,$aa,$aa,$6a,$b5,$aa,$56,$d5,$aa,$aa,$a6
	db	$aa,$aa,$aa,$32,$55,$a9,$aa,$54,$a9,$5a,$55,$55,$55,$ab,$aa,$aa
	db	$aa,$aa,$55,$d5,$5a,$55,$a6,$4a,$53,$55,$a9,$aa,$4a,$2b,$4b,$55
	db	$55,$55,$55,$55,$55,$ad,$aa,$55,$ad,$2a,$ab,$aa,$aa,$4a,$55,$55
	db	$aa,$54,$ab,$2a,$b5,$54,$b5,$d4,$aa,$52,$55,$55,$4b,$ab,$a9,$55
	db	$ab,$b4,$aa,$aa,$96,$95,$2a,$55,$95,$4a,$a5,$aa,$aa,$aa,$5a,$55
	db	$6b,$55,$55,$55,$56,$55,$55,$ab,$aa,$aa,$aa,$54,$a9,$2a,$55,$55
	db	$55,$55,$4b,$ab,$52,$4b,$55,$b5,$aa,$6a,$55,$ab,$aa,$52,$55,$55
	db	$6a,$55,$a5,$aa,$9a,$aa,$2a,$55,$55,$56,$b5,$aa,$6a,$55,$55,$56
	db	$5a,$a5,$aa,$aa,$56,$55,$b5,$aa,$52,$55,$95,$52,$55,$55,$55,$35
	db	$55,$b5,$aa,$aa,$aa,$aa,$aa,$56,$4d,$6b,$aa,$aa,$b4,$52,$a6,$aa
	db	$ca,$4a,$55,$55,$55,$35,$2b,$ad,$aa,$6a,$55,$55,$ad,$2a,$55,$55
	db	$55,$a5,$55,$55,$55,$95,$aa,$2a,$53,$95,$aa,$5a,$65,$ad,$55,$55
	db	$4d,$55,$55,$55,$55,$55,$55,$aa,$aa,$aa,$aa,$aa,$aa,$5a,$5a,$55
	db	$55,$a9,$aa,$aa,$aa,$6a,$55,$aa,$a6,$aa,$aa,$aa,$aa,$aa,$aa,$aa
	db	$56,$55,$55,$55,$aa,$a5,$4a,$ab,$ac,$9a,$aa,$aa,$55,$95,$56,$a5
	db	$aa,$aa,$aa,$aa,$aa,$aa,$a6,$56,$55,$55,$55,$55,$95,$aa,$2a,$ab
	db	$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$5a,$55,$55,$55,$55
	db	$55,$95,$2a,$ab,$aa,$aa,$aa,$96,$5a,$a5,$aa,$aa,$aa,$b2,$aa,$aa
	db	$55,$55,$55,$65,$55,$6a,$65,$a9,$95,$aa,$aa,$aa,$54,$ab,$2a,$b5
	db	$aa,$aa,$5a,$55,$55,$55,$55,$aa,$6a,$a9,$aa,$aa,$6a,$5a,$55,$55
	db	$55,$aa,$aa,$b2,$aa,$aa,$56,$95,$5a,$96,$56,$aa,$aa,$aa,$4a,$5b
	db	$55,$99,$aa,$2a,$d5,$aa,$aa,$aa,$55,$55,$55,$55,$a5,$59,$a9,$aa
	db	$aa,$aa,$aa,$aa,$aa,$54,$55,$b5,$aa,$aa,$55,$55,$55,$55,$95,$aa
	db	$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa
	db	$aa,$aa,$2a,$ab,$aa,$5a,$55,$2d,$55,$55,$55,$a5,$aa,$aa,$aa,$aa
	db	$aa,$aa,$4a,$ad,$aa,$6a,$55,$55,$55,$a9,$56,$aa,$aa,$aa,$aa,$5a
	db	$a5,$6a,$55,$55,$95,$aa,$aa,$aa,$52,$55,$d5,$aa,$aa,$9a,$55,$a5
	db	$5a,$55,$6a,$55,$55,$55,$55,$69,$a5,$aa,$aa,$2a,$55,$2d,$b5,$b4
	db	$aa,$aa,$aa,$55,$95,$5a,$a5,$aa,$56,$55,$55,$55,$95,$aa,$aa,$aa
	db	$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$56,$55,$55,$55,$55,$a5,$aa,$6a
	db	$55,$95,$aa,$aa,$aa,$aa,$54,$ab,$aa,$aa,$aa,$aa,$aa,$6a,$55,$55
	db	$55,$55,$55,$55,$a9,$aa,$aa,$aa,$aa,$99,$aa,$aa,$aa,$aa,$aa,$aa
	db	$aa,$aa,$aa,$aa,$aa,$aa,$aa,$5a,$55,$69,$55,$95,$95,$aa,$aa,$aa
	db	$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$5a,$55,$a9,$aa
	db	$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$55,$55
	db	$55,$55,$a9,$5a,$55,$55,$55,$a5,$aa,$aa,$aa,$54,$b5,$aa,$aa,$aa
	db	$aa,$56,$55,$55,$55,$a5,$55,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa
	db	$aa,$55,$55,$a5,$55,$a5,$aa,$aa,$aa,$aa,$aa,$aa,$5a,$55,$95,$aa
	db	$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$56
	db	$a9,$aa,$aa,$aa,$6a,$a9,$aa,$aa,$aa,$55,$55,$55,$95,$aa,$32,$55
	db	$55,$d5,$aa,$aa,$aa,$56,$95,$6a,$69,$a5,$6a,$55,$55,$55,$55,$a9
	db	$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$55,$55,$95,$aa
	db	$aa,$aa,$aa,$5a,$55,$55,$55,$55,$aa,$aa,$aa,$52,$55,$55,$ab,$aa
	db	$56,$55,$55,$55,$a9,$aa,$aa,$aa,$aa,$6a,$55,$55,$a5,$aa,$aa,$aa
	db	$6a,$a9,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$6a,$55,$55,$55,$55,$55,$65
	db	$aa,$96,$a9,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$56,$55,$55,$56,$a5
	db	$aa,$aa,$aa,$aa,$aa,$aa,$aa,$5a,$55,$55,$a9,$aa,$6a,$55,$55,$99
	db	$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$55,$95,$aa,$aa,$aa,$aa,$aa,$aa
	db	$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa,$aa


