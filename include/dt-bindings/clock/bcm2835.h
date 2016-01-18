/*
 * Copyright (C) 2015 Broadcom Corporation
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation version 2.
 *
 * This program is distributed "as is" WITHOUT ANY WARRANTY of any
 * kind, whether express or implied; without even the implied warranty
 * of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#define BCM2835_PLLA			0
#define BCM2835_PLLB			1
#define BCM2835_PLLC			2
#define BCM2835_PLLD			3
#define BCM2835_PLLH			4

#define BCM2835_PLLA_CORE		5
#define BCM2835_PLLA_PER		6
#define BCM2835_PLLB_ARM		7
#define BCM2835_PLLC_CORE0		8
#define BCM2835_PLLC_CORE1		9
#define BCM2835_PLLC_CORE2		10
#define BCM2835_PLLC_PER		11
#define BCM2835_PLLD_CORE		12
#define BCM2835_PLLD_PER		13
#define BCM2835_PLLH_RCAL		14
#define BCM2835_PLLH_AUX		15
#define BCM2835_PLLH_PIX		16

#define BCM2835_CLOCK_TIMER		17
#define BCM2835_CLOCK_OTP		18
#define BCM2835_CLOCK_UART		19
#define BCM2835_CLOCK_VPU		20
#define BCM2835_CLOCK_V3D		21
#define BCM2835_CLOCK_ISP		22
#define BCM2835_CLOCK_H264		23
#define BCM2835_CLOCK_VEC		24
#define BCM2835_CLOCK_HSM		25
#define BCM2835_CLOCK_SDRAM		26
#define BCM2835_CLOCK_TSENS		27
#define BCM2835_CLOCK_EMMC		28
#define BCM2835_CLOCK_PERI_IMAGE	29
#define BCM2835_CLOCK_PWM		30
#define BCM2835_CLOCK_PCM		31
#define BCM2835_CLOCK_AVEO		32
#define BCM2835_CLOCK_CAM0		33
#define BCM2835_CLOCK_CAM1		34
#define BCM2835_CLOCK_CCP2		35
#define BCM2835_CLOCK_DFT		36
#define BCM2835_CLOCK_DPI		37
#define BCM2835_CLOCK_DSI0E		38
#define BCM2835_CLOCK_DSI0P		39
#define BCM2835_CLOCK_DSI1E		40
#define BCM2835_CLOCK_DSI1P		41
#define BCM2835_CLOCK_GNRIC		42
#define BCM2835_CLOCK_GP0		43
#define BCM2835_CLOCK_GP1		44
#define BCM2835_CLOCK_GP2		45
#define BCM2835_CLOCK_PERIA		46
#define BCM2835_CLOCK_PULSE		47
#define BCM2835_CLOCK_SLIM		48
#define BCM2835_CLOCK_SMI		49
#define BCM2835_CLOCK_SYS		50
#define BCM2835_CLOCK_TD0		51
#define BCM2835_CLOCK_TD1		52
#define BCM2835_CLOCK_TEC		53

/* the mash divider options */
#define BCM2835_MASH_NONE		0
#define BCM2835_MASH_ORDER_1		1
#define BCM2835_MASH_ORDER_2		2
#define BCM2835_MASH_ORDER_3		3

#define BCM2835_MASH_INTEGER		BCM2835_MASH_NONE
#define BCM2835_MASH_FRAC		BCM2835_MASH_ORDER_1
