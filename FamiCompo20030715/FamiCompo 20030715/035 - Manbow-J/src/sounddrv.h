;-------------------------------------------------------------------------------
;���������[�`��
sound_init:
	lda	#$0f
	sta	$4015
	lda	#$00
	sta	channel_sel

	sta	$4080
	sta	$4082
	sta	$4083
	sta	$4084
	sta	$4085
	sta	$4086
	sta	$4087
	sta	$4088
	sta	$4089
	lda	#$e8
	sta	$408a

	ldx	#$00
	lda	#$80
	sta	$f800
	lda	#$00
soresore:
	sta	$4800
	inx
	cpx	#$00
	beq	owari
	jmp	soresore
owari:
	lda	#$7f
	sta	$f800
	lda	n106_channel
	sec
	sbc	#$01
	asl	a
	asl	a
	asl	a
	asl	a
	sta	$4800
	sta	n106_7f

sound_channel_set:
	lda	channel_sel

	sec
	sbc	#$06
	cmp	n106_channel		;n106�͏I��肩�H
	beq	sound_channel_reset
	lda	channel_sel

	asl	a
	tax
	lda	#$00
;	sta	lfo_st_counter_1,x
	sta	effect_flag,x
	lda	#$01
	sta	sound_counter,x

	lda	sound_data_table,x
	sta	<sound_add_low,x	;�f�[�^�J�n�ʒu��������
	inx
	lda	sound_data_table,x
	sta	<sound_add_low,x	;�f�[�^�J�n�ʒu��������
	inc	channel_sel
	jmp	sound_channel_set

;-------------------------------------------------------------------------------
sound_channel_reset:			;init �� play ���R�R���Ō�
	lda	#$00
	sta	channel_sel
	rts				;����ł��I��
;--------------------------
sound_expansion_part:
	jsr	sound_fds		;FDS�s���Ă���
	inc	channel_sel		;���̃`�����l����ݒ肵��
n106_return:
	jsr	sound_n106		;n106�s���Ă���
	inc	channel_sel		;���̃`�����l����ݒ肵��
	lda	channel_sel
	sec
	sbc	#$06
	cmp	n106_channel		;n106�͏I��肩�H
	bne	n106_return		;�܂��Ȃ�߂�

	jmp	sound_channel_reset

;--------------------------
sound_driver_start:

	lda	channel_sel
;	cmp	#$06
;	beq	sound_channel_reset	;channel_sel��05�Ȃ炨�I��
	cmp	#$05
	beq	sound_expansion_part
	cmp	#$04
	beq	sound_dpcm_part

	asl	a
	tax
	dec	sound_counter,x		;�J�E���^���������炵
	bne	return1			;�[���ȊO�Ȃ�J�E���^���炵��

	jsr	sound_data_read		;�[���Ȃ�T�E���h�ǂݍ���

	lda	rest_flag,x
	and	#%00000001
	bne	channel_end		;�x���Ȃ炨�I��

duty_write:
	lda	effect_flag,x
	and	#%00000100
;	cmp	#%00000100
	beq	enve_write
	jsr	sound_duty_enverope	;����i�H�j���F�������`

enve_write:
	lda	effect_flag,x
	and	#%00000001
;	cmp	#%00000001
	beq	lfo_write
	jsr	sound_software_enverope	;�G���x���[�v�������`

lfo_write:
	lda	effect_flag,x
	and	#%00010000
;	cmp	#%00010000
	beq	pitchenve_write
	jsr	sound_lfo
;	jmp	channel_end

pitchenve_write:
	lda	effect_flag,x
	and	#%00000010
;	cmp	#%00000010
	beq	arpeggio_write
	jsr	sound_pitch_enverope
;	jmp	channel_end

arpeggio_write:
	lda	effect_flag,x
	and	#%00001000
;	cmp	#%00001000
	beq	freq_data_write
	jsr	sound_high_speed_arpeggio
	jmp	channel_end

freq_data_write:
	jsr	sound_data_write	;�����ăf�[�^�����o��

channel_end:
	inc	channel_sel		;���̃`�����l����ݒ肵��
	jmp	sound_driver_start	;�͂��߂ɖ߂�

sound_dpcm_part:
	asl	a
	tax
	dec	sound_counter,x		;�J�E���^���������炵
	bne	channel_end
	jsr	sound_dpcm_play
	jmp	channel_end
;-------
return1:
	lda	rest_flag,x
	and	#%00000001
	bne	return7			;�x���Ȃ��΂�

duty_write2:
	lda	effect_flag,x
	and	#%00000100
	cmp	#%00000100
	bne	enve_write2
	jsr	sound_duty_enverope

enve_write2:
	lda	effect_flag,x
	and	#%00000001
	cmp	#%00000001
	bne	lfo_write2
	jsr	sound_software_enverope

lfo_write2:
	lda	effect_flag,x
	and	#%00010000
	cmp	#%00010000
	bne	pitchenve_write2
	jsr	sound_lfo

pitchenve_write2:
	lda	effect_flag,x
	and	#%00000010
	cmp	#%00000010
	bne	arpeggio_write2
	jsr	sound_pitch_enverope

arpeggio_write2:
	lda	effect_flag,x
	and	#%00001000
	cmp	#%00001000
	bne	return7
	jsr	sound_high_speed_arpeggio
	jmp	return7

sound_dpcm_part2:
	jsr	sound_dpcm_play
return7:
	inc	channel_sel		;���̃`�����l����ݒ肵��
	jmp	sound_driver_start	;�͂��߂ɖ߂�
;-------------------------------------------------------------------------------
frequency_set:

	lda	channel_sel
	asl	a
	tax
	lda	sound_sel,x		;���K�f�[�^�ǂݏo��
	and	#%00001111		;����4bit�����o����
	asl	a
	tay

	lda	channel_sel
	cmp	#$03
	beq	noise_frequency_get	;�S�`�����l���ڂȂ�m�C�Y���g���擾��

	lda	psg_frequency_table,y	;PSG���g���e�[�u������Low��ǂݏo��
	sta	sound_freq_low,x	;��������
	iny				;y���P���₵��
	lda	psg_frequency_table,y	;PSG���g���e�[�u������High��ǂݏo��
	sta	sound_freq_high,x	;��������

oct_set1:

	lda	sound_sel,x		;���K�f�[�^�ǂݏo��
	lsr	a			;���4bit�����o��
	lsr	a			;
	lsr	a			;
	lsr	a			;
	beq	freq_end		;�[���Ȃ炻�̂܂܏I���
	tay				;

oct_set2:

	lsr	sound_freq_high,x	;�E�V�t�g�@������C��
	ror	sound_freq_low,x	;C���玝���Ă���ł�@�E���[�e�C�g
	dey				;
	bne	oct_set2		;�I�N�^�[�u���J��Ԃ�

freq_end:
	jsr	detune_write_sub
	rts

detune_write_sub:
	lda	effect_flag,x
	and	#%10000000
	bne	detune_part
	rts

detune_part:
	lda	detune_dat,x
	and	#%10000000
	bne	detune_minus

detune_plus:
	lda	detune_dat,x
	clc
	adc	sound_freq_low,x
	sta	sound_freq_low,x
	bcs	mid_plus
	rts
mid_plus:
	inc	sound_freq_high,x
	bne	n106_high_through
	inc	sound_freq_n106,x
n106_high_through:
	rts

detune_minus:
	lda	detune_dat,x
	and	#%01111111
	sta	detune_tmp
	lda	sound_freq_low,x
	sec
	sbc	detune_tmp
	sta	sound_freq_low,x
	bcc	mid_minus
	rts
mid_minus:
	dec	sound_freq_high,x
	bne	n106_high_through
	dec	sound_freq_n106,x
	rts

noise_frequency_get:
	lda	noise_frequency_table,y	;���g���e�[�u������Low��ǂݏo��
	sta	sound_freq_low,x	;��������
	iny				;y���P���₵��
	lda	noise_frequency_table,y	;���g���e�[�u������High��ǂݏo��
	sta	sound_freq_high,x	;��������
	rts
;-------------------------------------------------------------------------------
sound_data_read:
	jsr	reg400x
	lda	[sound_add_low,x]
;----------
;���[�v����1
loop_program
	cmp	#$a0
	bne	loop_program2
	jsr	loop_sub
	jmp	sound_data_read
;----------
;���[�v����2(����)
loop_program2
	cmp	#$a1
	bne	data_end		;duty_set
	jsr	loop_sub2
	jmp	sound_data_read
;----------
;�f�[�^�G���h�ݒ�
data_end:
	cmp	#$ff
	bne	duty_set
	jsr	data_end_sub
	jmp	sound_data_read

data_end_sub:
	lda	loop_point_table,x
	sta	<sound_add_low,x	;���[�v�J�n�ʒu�������� Low
	inx
	lda	loop_point_table,x
	sta	<sound_add_low,x	;���[�v�J�n�ʒu�������� High
	rts
;----------
;���F�ݒ�
duty_set:
	cmp	#$fe
	bne	volume_set
	jsr	sound_data_address
	lda	[sound_add_low,x]	;���F�f�[�^�ǂݏo��
	pha
	and	#%10000000		;8bit�ڊm�F
	cmp	#%10000000
	bne	duty_enverope_part	;�a���[�e�B�G���x������

duty_select_part:
	lda	effect_flag,x
	and	#%11111011
	sta	effect_flag,x		;�f���[�e�B�G���x���[�v�����w��
	jsr	reg400x
	pla
	asl	a
	asl	a
	asl	a
	asl	a
	sta	register_high,x		;��������
	ora	register_low,x
	sta	$4000,y
	jsr	sound_data_address
	jmp	sound_data_read

duty_enverope_part:
	lda	effect_flag,x
	ora	#%00000100
	sta	effect_flag,x		;�f���[�e�B�G���x���[�v�L���w��
	pla
	sta	duty_sel,x
	asl	a
	tay
	lda	dutyenve_table,y	;�f���[�e�B�G���x���[�v�A�h���X�ݒ�
	sta	<duty_add_low,x
	iny
	lda	dutyenve_table,y
	sta	<duty_add_high,x
	jsr	sound_data_address
	jmp	sound_data_read

;----------
;���ʐݒ�
volume_set:
	cmp	#$fd
	bne	rest_set
	jsr	sound_data_address
	lda	[sound_add_low,x]
	sta	temporary
	and	#%10000000		;bit7�m�F
	cmp	#%10000000
	bne	softenve_part		;�\�t�g�G���x������

volume_part:
	lda	effect_flag,x
	and	#%11111110
	sta	effect_flag,x		;�\�t�g�G���x�����w��

	lda	temporary
	and	#%00001111
	sta	register_low,x
	ora	register_high,x
	sta	$4000,y			;�{�����[����������
	jsr	sound_data_address
	jmp	sound_data_read

softenve_part:
	jsr	volume_sub
	jmp	sound_data_read
volume_sub:
	lda	effect_flag,x
	ora	#%00000001
	sta	effect_flag,x		;�\�t�g�G���x�L���w��

;	lda	#$00
;	sta	register_low,x		;�ʏ�{�����[�����[����

	lda	temporary
	sta	softenve_sel,x
	asl	a
	tay
	lda	softenve_table,y	;�\�t�g�G���x�f�[�^�A�h���X�ݒ�
	sta	<soft_add_low,x
	iny
	lda	softenve_table,y
	sta	<soft_add_high,x
	jsr	sound_data_address
	rts
;----------
rest_set:
	cmp	#$fc
	bne	lfo_set

	lda	rest_flag,x
	ora	#%00000001
	sta	rest_flag,x

	jsr	sound_data_address
	lda	[sound_add_low,x]
	sta	sound_counter,x

	lda	channel_sel
	cmp	#$02
	beq	tri

	lda	register_high,x
	sta	$4000,y
	jsr	sound_data_address
	rts
tri:
	lda	#$00
	sta	$4000,y
	jsr	sound_data_address
	rts
;----------
lfo_set:
	cmp	#$fb
	bne	detune_set
	jsr	lfo_set_sub
	jmp	sound_data_read

lfo_set_sub:
	jsr	sound_data_address
	lda	[sound_add_low,x]
	cmp	#$ff
	bne	lfo_data_set

	jsr	reg400x
	lda	effect_flag,x
	and	#%10001111		;LFO��������
	sta	effect_flag,x
	jsr	sound_data_address
	rts
lfo_data_set:
	asl	a
	asl	a
	sta	lfo_data873

	tay
	lda	channel_sel
	asl	a
	tax
	lda	lfo_data,y
	sta	lfo_count		;�f�B���C�Z�b�g
	sta	lfo_start_count,x
	iny
	lda	lfo_data,y
	sta	lfo_revers		;�X�s�[�h�Z�b�g
	sta	lfo_revers_count,x
	iny
	lda	lfo_data,y
	sta	lfo_depth		;�f�v�X�Z�b�g
	iny
	lda	lfo_data,y
	sta	lfo_harf_time
	sta	lfo_harf_count,x		;1/2�J�E���^�Z�b�g

	jsr	warizan_start

	lda	channel_sel		;�Ȃ����̏��������Ă��邩�Ƃ�����
	sec				;���������Ɗg��������+-���t������ł���
	sbc	#$05
	bcc	urararara2


	lda	effect_flag,x
	ora	#%00110000
	sta	effect_flag,x
	jmp	ittoke2
urararara2:
	lda	effect_flag,x
	and	#%11011111		;�g�`�|����
	ora	#%00010000		;LFO�L���t���O�Z�b�g
	sta	effect_flag,x
ittoke2:
	jsr	sound_data_address
	rts
;----------
detune_set:
	cmp	#$fa
	bne	sweep_set
	jsr	detune_sub
	jmp	sound_data_read

detune_sub:
	jsr	sound_data_address
	lda	[sound_add_low,x]
	cmp	#$ff
	bne	detune_data_set

	jsr	reg400x
	lda	effect_flag,x
	and	#%01111111		;detune��������
	sta	effect_flag,x
	jsr	sound_data_address
	rts
detune_data_set:
	pha
	jsr	reg400x
	pla
	tay
	sta	detune_dat,x
	lda	effect_flag,x
	ora	#%10000000		;detune�L������
	sta	effect_flag,x
	jsr	sound_data_address
	rts
;----------
sweep_set:
	cmp	#$f9
	bne	pitch_set

	jsr	sound_data_address
	lda	[sound_add_low,x]
	sta	$4001,y
	jsr	sound_data_address
	jmp	sound_data_read
;----------
;�s�b�`�G���x���[�v�ݒ�
pitch_set:
	cmp	#$f8
	bne	arpeggio_set
	jsr	pitch_set_sub
	jmp	sound_data_read

pitch_set_sub:
	jsr	sound_data_address
	lda	[sound_add_low,x]
	cmp	#$ff
	bne	pitch_enverope_part
	lda	effect_flag,x
	and	#%11111101
	sta	effect_flag,x
	jsr	sound_data_address
	rts

pitch_enverope_part:
	sta	pitch_sel,x
	asl	a
	tay
	lda	pitchenve_table,y
	sta	<pitch_add_low,x
	iny
	lda	pitchenve_table,y
	sta	<pitch_add_high,x
	lda	effect_flag,x
	ora	#%00000010
	sta	effect_flag,x
	jsr	sound_data_address
	rts
;----------
;�m�[�g�G���x���[�v�ݒ�
arpeggio_set:
	cmp	#$f7
	bne	freq_direct_set
	jsr	arpeggio_set_sub
	jmp	sound_data_read

arpeggio_set_sub:
	jsr	sound_data_address
	lda	[sound_add_low,x]
	cmp	#$ff
	bne	arpeggio_part

	lda	effect_flag,x
	and	#%11110111
	sta	effect_flag,x
	jsr	sound_data_address
	rts

arpeggio_part:
	sta	arpeggio_sel,x
	asl	a
	tay
	lda	arpeggio_table,y
	sta	<arpe_add_low,x
	iny
	lda	arpeggio_table,y
	sta	<arpe_add_high,x

	lda	effect_flag,x
	ora	#%00001000
	sta	effect_flag,x
	jsr	sound_data_address
	rts
;----------
;�Đ����g�����ڐݒ�
freq_direct_set:
	cmp	#$f6
	bne	y_command_set
	jsr	direct_freq_sub
	rts

direct_freq_sub:
	jsr	sound_data_address
	lda	[sound_add_low,x]
	sta	sound_freq_low,x		;Low
	jsr	sound_data_address
	lda	[sound_add_low,x]
	sta	sound_freq_high,x		;High
	jsr	sound_data_address
	lda	[sound_add_low,x]
	sta	sound_counter,x			;Counter
	jsr	sound_data_address
	jsr	effect_init
	rts
;----------
;���R�}���h�ݒ�
y_command_set:
	cmp	#$f5
	bne	wait_set
	jsr	y_sub
	jmp	sound_data_read

y_sub:
	jsr	sound_data_address
	lda	[sound_add_low,x]
	sta	<reg_add_low
	jsr	sound_data_address
	lda	[sound_add_low,x]
	sta	<reg_add_high
	jsr	sound_data_address
	lda	[sound_add_low,x]
	ldx	#$00
	sta	[reg_add_low,x]
	jsr	reg400x
	jsr	sound_data_address
	rts
;----------
;�E�F�C�g�ݒ�
wait_set:
	cmp	#$f4
	bne	oto_set

wait_sub:
	jsr	sound_data_address
	lda	[sound_add_low,x]
	sta	sound_counter,x
	jsr	sound_data_address

	rts
	rts
	rts
;----------
oto_set:
	sta	sound_sel,x		;�����͂܂����

	jsr	sound_data_address
	lda	[sound_add_low,x]	;�����ǂݏo��
	sta	sound_counter,x		;���ۂ̃J�E���g�l�ƂȂ�܂�
	jsr	sound_data_address

	jsr	frequency_set		;���g���Z�b�g��
	jsr	effect_init
	rts
;-----------------
sound_data_address:
	inc	<sound_add_low,x	;�f�[�^�A�h���X�{�P
	bne	return2			;�ʂ��オ������
	inc	<sound_add_high,x	;�f�[�^�A�h���X�S�̈ʁi��j�{�P
return2:
	rts
;-------------------------------------------------------------------------------
sound_data_write:
	jsr	reg400x
	lda	register_low,x		;���ʕێ�
	ora	register_high,x
	sta	$4000,y
write:
	lda	sound_freq_low,x	;Low Write
	sta	$4002,y
	lda	sound_freq_high,x	;High Write
	sta	$4003,y
	rts
;-------------------------------------------------------------------------------
sound_software_enverope:
	jsr	volume_enve_sub
	sta	register_low,x
	ora	register_high,x		;���F�f�[�^�i���4bit�j�Ɖ���4bit�ő����Z
	sta	$4000,y			;�������݁`
	jsr	enverope_address	;�A�h���X����₵��
	rts				;�����܂�

volume_enve_sub:
	jsr	reg400x

	lda	[soft_add_low,x]	;�G���x���[�v�f�[�^�ǂݍ���
	cmp	#$ff			;�Ōォ�ǁ[��
	beq	return3			;�Ō�Ȃ烋�[�v������
	rts

return3:
	lda	softenve_sel,x
	asl	a
	tay
	lda	softenve_lp_table,y
	sta	<soft_add_low,x
	iny
	lda	softenve_lp_table,y
	sta	<soft_add_high,x
	jmp	volume_enve_sub
;-------------------------------------------------------------------------------
enverope_address:
	inc	<soft_add_low,x
	bne	return5
	inc	<soft_add_high,x
return5:
	rts
;--------------------------------------	
reg400x:
	lda	channel_sel
	asl	a
	tax
	asl	a
	tay
	rts
;-------------------------------------------------------------------------------
sound_duty_enverope:
	jsr	reg400x

	lda	channel_sel
	cmp	#$02
	beq	return21		;�O�p�g�Ȃ��΂��`

	lda	[duty_add_low,x]	;�G���x���[�v�f�[�^�ǂݍ���
	cmp	#$ff			;�Ōォ�ǁ[��
	beq	return22		;�Ō�Ȃ炻�̂܂܂����܂�
	asl	a
	asl	a
	asl	a
	asl	a
	sta	register_high,x
	ora	register_low,x		;���F�f�[�^�i���4bit�j�Ɖ���4bit�ő����Z
	sta	$4000,y			;�������݁`
	jsr	duty_enverope_address	;�A�h���X����₵��
return21:
	rts				;�����܂�

return22:
	lda	duty_sel,x
	asl	a
	tay
	lda	dutyenve_lp_table,y
	sta	<duty_add_low,x
	iny
	lda	dutyenve_lp_table,y
	sta	<duty_add_high,x
	jmp	sound_duty_enverope

;-------------------------------------------------------------------------------
duty_enverope_address:
	inc	<duty_add_low,x
	bne	return23
	inc	<duty_add_high,x
return23:
	rts
;--------------------------------------	
sound_dpcm_play:
	jsr	reg400x
	lda	[sound_add_low,x]
;----------
;���[�v����1
	cmp	#$a0
	bne	dmc_loop_program2
	jsr	loop_sub
	jmp	sound_dpcm_play
;----------
;���[�v����2(����)
dmc_loop_program2
	cmp	#$a1
	bne	dmc_data_end
	jsr	loop_sub2
	jmp	sound_dpcm_play
;----------
dmc_data_end:
	cmp	#$ff
	bne	no_dpcm
	jsr	data_end_sub
	jmp	sound_dpcm_play
;----------
no_dpcm:
	cmp	#$fc
	bne	wait_set2
	lda	#$00
	sta	$4011
	jmp	ontyou2

wait_set2:
	cmp	#$f4
	bne	dpcm_set
	jsr	wait_sub
	rts

dpcm_set:
	asl	a
	asl	a
	tax

	pha
	lda	#$0F
	sta	$4015
;;;;;;;;;; ��������� "MCK virtual keyboard" by Norix
	lda	#$FF		; �炷���I
	sta	$07A0+4*2	; �x���t���O�g�����Ⴄ��[
;;;;;;;;;;
	pla

	lda	dpcm_data,x		;DPCM control
	sta	$4010
	inx	
	lda	dpcm_data,x		;DPCM wave control
	sta	$4011
	inx	
	lda	dpcm_data,x		;DPCM address set
	sta	$4012
	inx	
	lda	dpcm_data,x		;DPCM length set
	sta	$4013

	lda	#$1F
	sta	$4015

ontyou2:
	jsr	reg400x
	jsr	sound_data_address
	lda	[sound_add_low,x]
	sta	sound_counter,x
	jsr	sound_data_address
	rts
;-------------------------------------------------------------------------------
sound_lfo:
	lda	sound_freq_high,x
	sta	temporary

	jsr	lfo_sub

	lda	sound_freq_low,x
	sta	$4002,y			;�@�@���ݒl�����W�X�^�ɃZ�b�g
	lda	sound_freq_high,x
	cmp	temporary
	beq	end4
	sta	$4003,y
end4:
	rts				;�����܂�
;-------------------------------------------------------------------------------
lfo_sub:
	jsr	reg400x
	lda	lfo_start_count,x
	beq	lfo_start
	dec	lfo_start_count,x
	rts
lfo_start:

	lda	effect_flag,x
	and	#%01000000
	bne	hanbun

	lda	lfo_harf_count,x
	beq	lfo_start_2

	dec	lfo_harf_count,x
	bne	lfo_start_2

	lda	effect_flag,x
	ora	#%01000000
	sta	effect_flag,x
hanbun:
	jsr	lfo_set_2
	lsr	lfo_revers
	lsr	lfo_revers_count,x
	jsr	warizan

lfo_start_2:
	asl	lfo_revers
	lda	lfo_revers_count,x	;���݂̒l��ǂݍ����
	cmp	lfo_revers
	beq	lfo_revers_set		;�K�萔�ɒB���Ă����甽�]�Z�b�g
	jmp	lfo_depth_set		;�B���Ă��Ȃ���΃f�v�X������

lfo_revers_set:
	lda	#$00			;
	sta	lfo_revers_count,x	;���]�J�E���^������
	lda	effect_flag,x		;�G�t�F�N�g�ǂݍ����
	pha				;�ꎞ�ޔ�
	and	#%00100000
	bne	lfo_revers_p

	pla
	ora	#%00100000
	sta	effect_flag,x
	jmp	lfo_depth_set
lfo_revers_p:
	pla
	and	#%11011111
	sta	effect_flag,x

lfo_depth_set:
	lsr	lfo_revers
	lda	lfo_depth_count,x	;���ԓǂݍ���
	cmp	lfo_adc_sbc_time	;���݂̃J�E���^�Ɣ�r
	beq	lfo_depth_work		;��v���Ă���΃f�v�X������
	jmp	lfo_count_plus		;�܂��Ȃ�J�E���^�v���X��

lfo_depth_work:
	lda	#$00			;
	sta	lfo_depth_count,x	;�f�v�X�J�E���^������
	lda	effect_flag,x		;�{���|��
	and	#%00100000
	bne	lfo_depth_plus

lfo_depth_minus:
	lda	sound_freq_low,x	;�f�v�X�ǂݍ���
	sec
	sbc	lfo_depth		;����
	sta	sound_freq_low,x
	bcc	lfo_high_minus		;��������
	jmp	lfo_count_plus

lfo_high_minus:
	dec	sound_freq_high,x	;������
	bne	lfo_count_plus
	dec	sound_freq_n106,x
	jmp	lfo_count_plus
lfo_depth_plus:
	lda	sound_freq_low,x	;�f�v�X�ǂݍ���
	clc
	adc	lfo_depth		;����
	sta	sound_freq_low,x
	bcs	lfo_high_plus		;��������
	jmp	lfo_count_plus

lfo_high_plus:
	inc	sound_freq_high,x	;������
	bne	lfo_count_plus
	inc	sound_freq_n106,x

lfo_count_plus:
	inc	lfo_revers_count,x	;�J�E���^�����Ă��I��
	inc	lfo_depth_count,x
	lda	effect_flag,x
	and	#%01000000
	beq	endend
	jsr	lfo_set_2
	jsr	warizan
endend:
	rts

;-------------------------------------------------------------------------------
lfo_set_2:
	lda	lfo_data873
	tay
	lda	channel_sel
	asl	a
	tax
	iny
	lda	lfo_data,y
	sta	lfo_revers		;�X�s�[�h�Z�b�g
	sta	lfo_revers_count,x
	iny
	lda	lfo_data,y
	sta	lfo_depth		;�f�v�X�Z�b�g
	rts
;-------------------------------------------------------------------------------
sound_pitch_enverope:
	lda	sound_freq_high,x
	sta	temporary
	jsr	pitch_sub
pitch_write:
	lda	sound_freq_low,x
	sta	$4002,y
	lda	sound_freq_high,x
	cmp	temporary
	beq	end3
	sta	$4003,y
end3:
	jsr	pitch_enverope_address
	rts
;-------------------------------------------------------------------------------
pitch_sub:
	jsr	reg400x
	lda	[pitch_add_low,x]
	cmp	#$ff
	beq	return62

	and	#%10000000
;	cmp	#%10000000
	bne	pitch_plus

	lda	[pitch_add_low,x]
	clc
	adc	sound_freq_low,x
	sta	sound_freq_low,x	;low����������
	bcs	freq_high_plus_2
	rts
freq_high_plus_2:
	inc	sound_freq_high,x	;high���{�P
	bne	rreturn
	inc	sound_freq_n106,x
rreturn
	rts				;���W�X�^�������݂�GO!
pitch_plus:
	lda	[pitch_add_low,x]
	and	#%01111111
	sta	pitch_tmp
	sec
	lda	sound_freq_low,x
	sbc	pitch_tmp
	sta	sound_freq_low,x
	bcc	freq_high_minus_2
	rts
freq_high_minus_2:
	dec	sound_freq_high,x
	bne	rreturn2
	dec	sound_freq_n106,x
rreturn2
	rts
;-------------------------------------------------------------------------------
return62:
	lda	[pitch_add_low,x]
	lda	pitch_sel,x
	asl	a
	tay
	lda	pitchenve_lp_table,y
	sta	<pitch_add_low,x
	iny
	lda	pitchenve_lp_table,y
	sta	<pitch_add_high,x
	jmp	pitch_sub
;-------------------------------------------------------------------------------
pitch_enverope_address:
	inc	<pitch_add_low,x
	bne	return63
	inc	<pitch_add_high,x
return63:
	rts
;-------------------------------------------------------------------------------
sound_high_speed_arpeggio:		;note enverope
	lda	sound_freq_high,x
	sta	temporary2
	jsr	note_enve_sub
	jsr	frequency_set
note_freq_write:
	jsr	reg400x
	lda	sound_freq_low,x
	sta	$4002,y
	lda	sound_freq_high,x
	cmp	temporary2,y
	beq	end2
	sta	$4003,y
end2:
	jsr	arpeggio_address
	rts
;-------------------------------------------------------------------------------
note_add_set:
	lda	arpeggio_sel,x
	asl	a
	tay
	lda	arpeggio_lp_table,y
	sta	<arpe_add_low,x
	iny
	lda	arpeggio_lp_table,y
	sta	<arpe_add_high,x
	jmp	note_enve_sub
;-------------------------------------------------------------------------------
arpeggio_address:
	inc	<arpe_add_low,x
	bne	return83
	inc	<arpe_add_high,x
return83:
	rts
;-------------------------------------------------------------------------------
note_enve_sub:

	jsr	reg400x
	lda	[arpe_add_low,x]	;�m�[�g�G���x�f�[�^�ǂݏo��
	cmp	#$ff			;$ff�i���I���j���H
	beq	note_add_set
	cmp	#$00			;�[�����H
	beq	return83		;�[���Ȃ牽���������I��
	cmp	#$80
	beq	return83		;�[���Ȃ牽���������I��
	and	#%10000000
;	cmp	#%10000000		;�|���H
	bne	arpeggio_minus		;�|������

arpeggio_plus:
	lda	[arpe_add_low,x]	;�m�[�g�G���x�f�[�^��ǂݏo����
	sta	arpeggio_tmp		;�e���|�����ɒu���i���[�v�񐔁j
arpeggio_plus2:
	lda	sound_sel,x		;���K�f�[�^�ǂݏo��
	and	#$0f			;����4bit���o
	cmp	#$0b			;����b�Ȃ�
	beq	oct_plus		;�I�N�^�[�u�{������
	inc	sound_sel,x		;�łȂ���Ή��K�{�P
	jmp	loop_1			;���[�v�����P��
oct_plus:
	lda	sound_sel,x		;���K�f�[�^�ǂݏo��
	and	#$f0			;���4bit���o��������4bit�[��
	clc
	adc	#$10			;�I�N�^�[�u�{�P
	sta	sound_sel,x		;���K�f�[�^�����o��
loop_1:
	dec	arpeggio_tmp		;���[�v�񐔁|�P
	lda	arpeggio_tmp		;��œǂݏo��
;	cmp	#$00			;�[�����H
	beq	note_enve_end		;�Ȃ烋�[�v�����I���
	jmp	arpeggio_plus2		;�łȂ���΂܂�����

arpeggio_minus:
	lda	[arpe_add_low,x]
	and	#%01111111
	sta	arpeggio_tmp
arpeggio_minus2:
	lda	sound_sel,x		;���K�f�[�^�ǂݏo��
	and	#$0f			;����4bit���o
;	cmp	#$00			;�[�����H
	beq	oct_minus		;�[���Ȃ�|������
	dec	sound_sel,x		;�łȂ���Ή��K�|�P
	jmp	loop_2			;���[�v�����Q��
oct_minus:
	lda	sound_sel,x		;���K�f�[�^�ǂݏo��
	clc
	adc	#$0b			;+b
	sec
	sbc	#$10			;-10
	sta	sound_sel,x		;���K�f�[�^�����o��
loop_2:
	dec	arpeggio_tmp		;���[�v�񐔁|�P
	lda	arpeggio_tmp		;��œǂݏo��
	cmp	#$00			;�[�����H
	bne	arpeggio_minus2		;�Ȃ烋�[�v�����I���
note_enve_end:
	rts				;�łȂ���΂܂�����
;-------------------------------------------------------------------------------
effect_init:
;�\�t�g�E�F�A�G���x���[�v�ǂݍ��݃A�h���X������
	lda	softenve_sel,x
	asl	a
	tay
	lda	softenve_table,y
	sta	<soft_add_low,x
	iny
	lda	softenve_table,y
	sta	<soft_add_high,x

;�s�b�`�G���x���[�v�ǂݍ��݃A�h���X������
	lda	pitch_sel,x
	asl	a
	tay
	lda	pitchenve_table,y
	sta	<pitch_add_low,x
	iny
	lda	pitchenve_table,y
	sta	<pitch_add_high,x

;�f���[�e�B�G���x���[�v�ǂݍ��݃A�h���X������
	lda	duty_sel,x
	asl	a
	tay
	lda	dutyenve_table,y
	sta	<duty_add_low,x
	iny
	lda	dutyenve_table,y
	sta	<duty_add_high,x

;�m�[�g�G���x���[�v�ǂݍ��݃A�h���X������
	lda	arpeggio_sel,x
	asl	a
	tay
	lda	arpeggio_table,y
	sta	<arpe_add_low,x
	iny
	lda	arpeggio_table,y
	sta	<arpe_add_high,x
;�\�t�g�E�F�ALFO������
	lda	lfo_count
	sta	lfo_start_count,x
	lda	lfo_adc_sbc_time
	sta	lfo_depth_count,x
	lda	lfo_harf_time
	sta	lfo_harf_count,x
	lda	lfo_revers
	sta	lfo_revers_count,x

	lda	channel_sel
	sec
	sbc	#$04
	bmi	urararara

	lda	effect_flag,x
	and	#%10111111
	ora	#%00100000
	sta	effect_flag,x
	jmp	ittoke
urararara:
	lda	effect_flag,x
	and	#%10011111
	sta	effect_flag,x
	
ittoke:
;�x���t���O�N���A
	lda	#$00
	sta	rest_flag,x


	rts
;-------------------------------------------------------------------------------
loop_sub:
	jsr	sound_data_address
	lda	channel_loop,x
	bne	loop_dec

	lda	[sound_add_low,x]
	sta	channel_loop,x
	jmp	loop_start
loop_dec:
	dec	channel_loop,x
	lda	#$01
	cmp	channel_loop,x
	beq	loop_end
loop_start:
	jsr	sound_data_address
	lda	[sound_add_low,x]
	pha
	jsr	sound_data_address
	lda	[sound_add_low,x]
	sta	<sound_add_high,x
	pla
	sta	<sound_add_low,x	;���[�v�A�h���X��������
	rts
loop_end:
	dec	channel_loop,x
	jsr	sound_data_address	;�f�[�^�A�h���X�i�߂�x3
	jsr	sound_data_address
	jsr	sound_data_address
	rts				;�����܂�
;-------------------------------------------------------------------------------
loop_sub2:
	lda	channel_loop,x
	bne	loop_sbc2
loop_through:
	jsr	sound_data_address
	jsr	sound_data_address
	jsr	sound_data_address
	rts
loop_sbc2
	and	#%00000001
	bne	loop_through		;�[���łȂ���΃X���[
	dec	channel_loop,x
	jsr	sound_data_address	;�[���Ȃ烋�[�v�A�h���X��������
	lda	[sound_add_low,x]
	pha
	jsr	sound_data_address	;�[���Ȃ烋�[�v�A�h���X��������
	lda	[sound_add_low,x]
	sta	<sound_add_high,x
	pla
	sta	<sound_add_low,x	;���[�v�J�n�ʒu�������� High
	rts
;-------------------------------------------------------------------------------
warizan_start:
	lda	#$00
	sta	kotae
	lda	lfo_revers
	cmp	lfo_depth
	beq	plus_one
	bmi	depth_wari
revers_wari:
	lda	lfo_depth
	sta	waru
	lda	lfo_revers
	jsr	warizan
	lda	kotae
	sta	lfo_adc_sbc_time
	sta	lfo_depth_count,x
	lda	#$01
	sta	lfo_depth
	rts
depth_wari:
	lda	lfo_revers
	sta	waru
	lda	lfo_depth
	jsr	warizan
	lda	kotae
	sta	lfo_depth
	lda	#$01
	sta	lfo_adc_sbc_time
	sta	lfo_depth_count,x
	rts
plus_one:
	lda	#$01
	sta	lfo_depth
	sta	lfo_adc_sbc_time
	sta	lfo_depth_count,x
	rts
warizan:
	inc	kotae
	sec
	sbc	waru
	beq	warizan_end
	bcc	warizan_end
	jmp	warizan
warizan_end:
	rts
;-------------------------------------------------------------------------------

;�[���y�[�W�ɕK�v�ȃ�����
;14ch sq1 sq2 tri noiz dpcm fds 106 106 106 106 106 106 106 106 28bytes
soft_add_low	=	$0040	;6bytes $c0,$c1 ch1 - $ca,$cb ch6 *ch5�͖��g�p
soft_add_high	=	$0041	;6bytes
pitch_add_low	=	$0060	;8bytes $d0,$d1 ch1 - $da,$db ch6 *ch4-5�͖��g�p
pitch_add_high	=	$0061	;8bytes
duty_add_low	=	$0080	;4bytes $e6,$e7 ch1 - $e8,$e9 ch2 *ch3-6�͖��g�p
duty_add_high	=	$0081	;4bytes
arpe_add_low	=	$00a0	;6bytes $e0,$e1 ch1 - $ea,$eb ch6 *ch4-5�͖��g�p
arpe_add_high	=	$00a1	;6bytes
sound_add_low	=	$00c0	;6bytes $f0,$f1 ch1 - $fa,$fb ch6
sound_add_high	=	$00c1	;6bytes

reg_add_low	=	$00de	;temp
reg_add_high	=	$00df
fds_wave_address=	$00de
fds_wave_addhigh=	$00df
n106_wave_add	=	$00de
n106_wave_add_hi=	$00df
waru		=	$00de
kotae		=	$00df
;����ȊO�ɕK�v�ȃ�����

lfo_revers_count=	$0700
lfo_depth_count	=	$0701
lfo_start_count	=	$0720

lfo_count	=	$0721
lfo_adc_sbc_time=	$0723
lfo_depth	=	$0725
lfo_revers	=	$0727
lfo_harf_time	=	$0729
lfo_data873	=	$072b

lfo_harf_count	=	$0740
detune_dat	=	$0500	;6bytes(6

register_high	=	$0620	;2bytes(8
register_low	=	$0630	;2bytes(8
duty_sel	=	$0640	;2bytes(4

channel_loop	=	$06a0

softenve_sel	=	$0760	;10bytes(20
pitch_sel	=	$0761	;10bytes(20
arpeggio_sel	=	$0780	;10bytes(20
effect_flag	=	$0781	;10bytes(20

rest_flag	=	$07a0	;10bytes(20
detune_tmp	=	$07a1	;1byte
pitch_tmp	=	$07a3	;1byte
arpeggio_tmp	=	$07a5	;1byte
temporary	=	$07a7	;1byte
channel_sel	=	$07a9	;1byte
temporary2	=	$07ab
fds_hard_count_1=	$0300
fds_hard_count_2=	$0350

sound_sel	=	$07c0	;14bytes(20
sound_counter	=	$07c1	;14bytes(20
sound_freq_low	=	$07e0	;14bytes(20
sound_freq_n106	=	$0741
sound_freq_high	=	$07e1	;10bytes(20
fds_hard_select	=	$07af
fds_volume	=	$07b1
n106_volume	=	$0660
n106_7f		=	$07b5

n106_7c		=	$0680

n106_temp	=	$07b9
n106_temp_2	=	$07bb

;+------ detune flag
;l+----- software LFO�X�s�[�h�σt���O�i�\��j
;ll+---- software LFO�����t���O0=- 1=+
;lll+--- software LFO flag
;llll+---- note enverope flag
;lllll+--- duty enverope flag / FDS hardware effect flag
;llllll+-- pitch enverope flag
;lllllll+- software enverope flag
;llllllll
;DLLLadpv
