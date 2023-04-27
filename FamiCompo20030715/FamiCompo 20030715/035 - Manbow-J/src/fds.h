sound_fds:
	lda	channel_sel
	asl	a
	tax
	dec	sound_counter,x
	bne	return200
	jsr	sound_fds_read
	lda	rest_flag,x
	and	#%00000001
	cmp	#%00000001
	beq	return199
fds_softenve_write:
	lda	effect_flag,x
	and	#%00000001
	cmp	#%00000001
	bne	fds_lfo_write
	jsr	sound_fds_softenve

fds_lfo_write:
	lda	effect_flag,x
	and	#%00010000
	cmp	#%00010000
	bne	fds_pitch_enve_write
	jsr	sound_fds_lfo

fds_pitch_enve_write:
	lda	effect_flag,x
	and	#%00000010
	cmp	#%00000010
	bne	fds_note_enve_write
	jsr	sound_fds_pitch_enve

fds_note_enve_write:
	lda	effect_flag,x
	and	#%00001000
	cmp	#%00001000
	bne	fds_hard_enve_write
	jsr	sound_fds_note_enve

fds_hard_enve_write:
	lda	effect_flag,x
	and	#%00000100
	cmp	#%00000100
	bne	fds_freq_write
	jsr	sound_fds_hard_enve

fds_freq_write:
	jsr	sound_fds_write
return199
	rts
return200
	lda	rest_flag,x
	and	#%00000001
	cmp	#%00000001
	beq	return201
fds_softenve_write2:
	lda	effect_flag,x
	and	#%00000001
	cmp	#%00000001
	bne	fds_lfo_write_2
	jsr	sound_fds_softenve
fds_lfo_write_2:
	lda	effect_flag,x
	and	#%00010000
	cmp	#%00010000
	bne	fds_pitch_enve_write_2
	jsr	sound_fds_lfo

fds_pitch_enve_write_2:
	lda	effect_flag,x
	and	#%00000010
	cmp	#%00000010
	bne	fds_note_enve_write_2
	jsr	sound_fds_pitch_enve

fds_note_enve_write_2:
	lda	effect_flag,x
	and	#%00001000
	cmp	#%00001000
	bne	fds_hard_enve_write_2
	jsr	sound_fds_note_enve

fds_hard_enve_write_2:
	lda	effect_flag,x
	and	#%00000100
	cmp	#%00000100
	bne	return201
	jsr	sound_fds_hard_enve

return201:
	rts
;------------------------------------------------
fds_freq_set:
	lda	channel_sel
	asl	a
	tax
	lda	sound_sel,x		;���K�f�[�^�ǂݏo��
	and	#%00001111		;����4bit�����o����
	asl	a
	tay

	lda	fds_frequency_table,y	;PSG���g���e�[�u������Low��ǂݏo��
	sta	sound_freq_low,x	;��������
	iny				;y���P���₵��
	lda	fds_frequency_table,y	;PSG���g���e�[�u������High��ǂݏo��
	sta	sound_freq_high,x	;��������

fds_oct_set1:

	lda	sound_sel,x		;���K�f�[�^�ǂݏo��
	lsr	a			;���4bit�����o��
	lsr	a			;
	lsr	a			;
	lsr	a			;
	cmp	#$06
	beq	fds_freq_end		;�[���Ȃ炻�̂܂܏I���
	tay

fds_oct_set2:

	lsr	sound_freq_high,x	;�E�V�t�g�@������C��
	ror	sound_freq_low,x	;C���玝���Ă���ł�@�E���[�e�C�g
	iny				;
	cpy	#$06
	bne	fds_oct_set2		;�I�N�^�[�u���J��Ԃ�

fds_freq_end:
	jsr	detune_write_sub
	rts
;---------------------------------------------------------------
sound_fds_read:
	jsr	reg400x
	lda	[sound_add_low,x]
;----------
;���[�v����1
fds_loop_program
	cmp	#$a0
	bne	fds_loop_program2
	jsr	loop_sub
	jmp	sound_fds_read
;----------
;���[�v����2(����)
fds_loop_program2
	cmp	#$a1
	bne	fds_data_end
	jsr	loop_sub2
	jmp	sound_fds_read
;----------
;�f�[�^�G���h�ݒ�
fds_data_end:
	cmp	#$ff
	bne	fds_wave_set
	jsr	data_end_sub
	jmp	sound_fds_read
;----------
;���F�ݒ�
fds_wave_set:
	cmp	#$fe
	bne	fds_volume_set
	jsr	sound_data_address
	lda	[sound_add_low,x]

	asl	a
	tax
	lda	fds_data_table,x
	sta	<fds_wave_address
	inx
	lda	fds_data_table,x
	sta	<fds_wave_addhigh

	ldy	#$00
	ldx	#$00
	lda	#$80
	sta	$4089
wave_data_set:
	lda	[fds_wave_address],y
	sta	$4040,y
	iny
	cpy	#$40
	bne	wave_data_set

	lda	#$00
	sta	$4089
	jsr	reg400x
	jsr	sound_data_address
	jmp	sound_fds_read
;----------
;���ʐݒ�
fds_volume_set:
	cmp	#$fd
	bne	fds_rest_set
	jsr	sound_data_address
	lda	[sound_add_low,x]
	pha
	and	#%11000000		;bit7,6
	cmp	#%11000000
	beq	fds_softenve_part	;�\�t�g�G���x������

fds_volume_part:
	lda	effect_flag,x
	and	#%11111110
	sta	effect_flag,x		;�\�t�g�G���x�����w��

	pla
	and	#%10111111
	ora	#$80
	sta	fds_volume
;	sta	$4080			;�{�����[�����n�[�h�G���x��������
	jsr	sound_data_address
	jmp	sound_fds_read

fds_softenve_part:
	lda	effect_flag,x
	ora	#%00000001
	sta	effect_flag,x		;�\�t�g�G���x�L���w��

	pla
	and	#%00111111
	sta	softenve_sel,x
	asl	a
	tay
	lda	softenve_table,y	;�\�t�g�G���x�f�[�^�A�h���X�ݒ�
	sta	<soft_add_low,x
	iny
	lda	softenve_table,y
	sta	<soft_add_high,x
	jsr	sound_data_address
	jmp	sound_fds_read
;----------
fds_rest_set:
	cmp	#$fc
	bne	fds_lfo_set

	lda	rest_flag,x
	ora	#%00000001
	sta	rest_flag,x

	jsr	sound_data_address
	lda	[sound_add_low,x]
	sta	sound_counter,x

	lda	#$00
	sta	$4080
	jsr	sound_data_address
	rts
;----------
fds_lfo_set:
	cmp	#$fb
	bne	fds_detune_set
	jsr	lfo_set_sub
	jmp	sound_fds_read
;----------
fds_detune_set:
	cmp	#$fa
	bne	fds_pitch_set
	jsr	detune_sub
	jmp	sound_fds_read
;----------
;�s�b�`�G���x���[�v�ݒ�
fds_pitch_set:
	cmp	#$f8
	bne	fds_arpeggio_set
	jsr	pitch_set_sub
	jmp	sound_fds_read
;----------
;�m�[�g�G���x���[�v�ݒ�
fds_arpeggio_set:
	cmp	#$f7
	bne	fds_freq_direct_set
	jsr	arpeggio_set_sub
	jmp	sound_fds_read
;----------
;�Đ����g�����ڐݒ�
fds_freq_direct_set:
	cmp	#$f6
	bne	fds_y_command_set
	jsr	direct_freq_sub
	rts
;----------
;���R�}���h�ݒ�
fds_y_command_set:
	cmp	#$f5
	bne	fds_wait_set
	jsr	y_sub
	jmp	sound_fds_read
;----------
;�E�F�C�g�ݒ�
fds_wait_set:
	cmp	#$f4
	bne	fds_hard_lfo_set
	jsr	wait_sub
	rts
;----------
;FDS�����n�[�h�E�F�A�G�t�F�N�g�ݒ�
fds_hard_lfo_set:
	cmp	#$f3
	bne	fds_oto_set

	jsr	sound_data_address
	lda	[sound_add_low,x]
	cmp	#$ff
	bne	fds_hard_lfo_data_set

	jsr	reg400x
	lda	effect_flag,x
	and	#%11111011
	sta	effect_flag,x
	jsr	sound_data_address
	jmp	sound_fds_read
fds_hard_lfo_data_set:
	asl	a
	asl	a
	asl	a
	asl	a
	tay

	sta	fds_hard_select
	inc	fds_hard_select
	lda	fds_effect_select,y
	sta	fds_hard_count_1
	sta	fds_hard_count_2
	jsr	reg400x
	lda	effect_flag,x
	ora	#%00000100
	sta	effect_flag,x
	jsr	sound_data_address
	jmp	sound_fds_read
;----------
fds_oto_set:
	sta	sound_sel,x		;�����͂܂����
	jsr	sound_data_address
	lda	[sound_add_low,x]	;�����ǂݏo��
	sta	sound_counter,x		;���ۂ̃J�E���g�l�ƂȂ�܂�
	jsr	sound_data_address
	lda	#$00
	sta	$4083
	sta	rest_flag,x
	jsr	fds_freq_set		;���g���Z�b�g��
	lda	fds_volume
	sta	$4080
	jsr	effect_init
	jsr	reg400x
;hard enveope init

	lda	fds_hard_count_2
	sta	fds_hard_count_1
	lda	#$00
	sta	$4084
	sta	$4085
	sta	$4086
	sta	$4087
	rts
;-------------------------------------------------------------------------------
sound_fds_write:
	jsr	reg400x
	lda	sound_freq_low,x	;Low Write
	sta	$4082
	lda	sound_freq_high,x	;High Write
	sta	$4083
	rts
;-------------------------------------------------------------------------------
sound_fds_softenve:
	jsr	volume_enve_sub
	and	#%00111111
	ora	#$80
	sta	$4080
	jsr	enverope_address
	rts
;-------------------------------------------------------------------------------
sound_fds_lfo:
	jsr	lfo_sub
	jsr	sound_fds_write
	rts
;-------------------------------------------------------------------------------
sound_fds_pitch_enve:
	jsr	pitch_sub
	jsr	sound_fds_write
	jsr	pitch_enverope_address
	rts
;-------------------------------------------------------------------------------
sound_fds_note_enve
	jsr	note_enve_sub
	jsr	fds_freq_set
	jsr	sound_fds_write
	jsr	arpeggio_address
	rts
;-------------------------------------------------------------------------------
sound_fds_hard_enve:
	lda	fds_hard_count_1
	cmp	#$00
	beq	start_effect
	cmp	#$ff
	beq	return6809
	dec	fds_hard_count_1
return6809:
	rts
start_effect:
	lda	fds_hard_select
	tax
start_effect_2:
	lda	fds_effect_select,x
	tay
	inx
	cmp	#$ff
	beq	count_effect
	cmp	#$88
	beq	set_4088
	lda	fds_effect_select,x
	sta	$4000,y
	inx
	jmp	start_effect_2

count_effect:
	dec	fds_hard_count_1
	rts
set_4088:
	lda	fds_effect_select,x
	stx	temporary

	asl	a
	asl	a
	asl	a
	asl	a
	asl	a
	tay
	ldx	#$00
fds_4088_write:
	lda	fds_4088_data,y
	sta	$4088
	iny
	inx
	cpx	#$20
	beq	oshimai
	jmp	fds_4088_write
oshimai:
	ldx	temporary
	inx
	jmp	start_effect_2
;-------------------------------------------------------------------------------
