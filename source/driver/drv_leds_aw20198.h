#ifndef __DRV_LEDS_AW20198_H__
#define __DRV_LEDS_AW20198_H__

/*!<--------------------------------------------------------------------------------------------*/
#define ADDR_REG_PAGE0_GCR			0x00		/*!< Global Control Register					*/
#define ADDR_REG_PAGE0_GCCR			0x01		/*!< Global Current Control Register			*/
#define ADDR_REG_PAGE0_DGCR			0x02		/*!< De-ghost Control Register					*/
#define ADDR_REG_PAGE0_OSR0			0x03		/*!< Open/Short Status Register(SW1)(CS1~CS6)	*/
#define ADDR_REG_PAGE0_OSR1			0x04		/*!< Open/Short Status Register(SW1)(CS7~CS12)	*/
#define ADDR_REG_PAGE0_OSR2			0x05		/*!< Open/Short Status Register(SW1)(CS13~CS18)	*/
#define ADDR_REG_PAGE0_OSR3			0x06		/*!< Open/Short Status Register(SW2)(CS1~CS6)	*/
#define ADDR_REG_PAGE0_OSR4			0x07		/*!< Open/Short Status Register(SW2)(CS7~CS12)	*/
#define ADDR_REG_PAGE0_OSR5			0x08		/*!< Open/Short Status Register(SW2)(CS13~CS18)	*/
#define ADDR_REG_PAGE0_OSR6			0x09		/*!< Open/Short Status Register(SW3)(CS1~CS6)	*/
#define ADDR_REG_PAGE0_OSR7			0x0A		/*!< Open/Short Status Register(SW3)(CS7~CS12)	*/
#define ADDR_REG_PAGE0_OSR8			0x0B		/*!< Open/Short Status Register(SW3)(CS13~CS18)	*/
#define ADDR_REG_PAGE0_OSR9			0x0C		/*!< Open/Short Status Register(SW4)(CS1~CS6)	*/
#define ADDR_REG_PAGE0_OSR10		0x0D		/*!< Open/Short Status Register(SW4)(CS7~CS12)	*/
#define ADDR_REG_PAGE0_OSR11		0x0E		/*!< Open/Short Status Register(SW4)(CS13~CS18)	*/
#define ADDR_REG_PAGE0_OSR12		0x0F		/*!< Open/Short Status Register(SW5)(CS1~CS6)	*/
#define ADDR_REG_PAGE0_OSR13		0x10		/*!< Open/Short Status Register(SW5)(CS7~CS12)	*/
#define ADDR_REG_PAGE0_OSR14		0x11		/*!< Open/Short Status Register(SW5)(CS13~CS18)	*/
#define ADDR_REG_PAGE0_OSR15		0x12		/*!< Open/Short Status Register(SW6)(CS1~CS6)	*/
#define ADDR_REG_PAGE0_OSR16		0x13		/*!< Open/Short Status Register(SW6)(CS7~CS12)	*/
#define ADDR_REG_PAGE0_OSR17		0x14		/*!< Open/Short Status Register(SW6)(CS13~CS18)	*/
#define ADDR_REG_PAGE0_OSR18		0x15		/*!< Open/Short Status Register(SW7)(CS1~CS6)	*/
#define ADDR_REG_PAGE0_OSR19		0x16		/*!< Open/Short Status Register(SW7)(CS7~CS12)	*/
#define ADDR_REG_PAGE0_OSR20		0x17		/*!< Open/Short Status Register(SW7)(CS13~CS18)	*/
#define ADDR_REG_PAGE0_OSR21		0x18		/*!< Open/Short Status Register(SW8)(CS1~CS6)	*/
#define ADDR_REG_PAGE0_OSR22		0x19		/*!< Open/Short Status Register(SW8)(CS7~CS12)	*/
#define ADDR_REG_PAGE0_OSR23		0x1A		/*!< Open/Short Status Register(SW8)(CS13~CS18)	*/
#define ADDR_REG_PAGE0_OSR24		0x1B		/*!< Open/Short Status Register(SW9)(CS1~CS6)	*/
#define ADDR_REG_PAGE0_OSR25		0x1C		/*!< Open/Short Status Register(SW9)(CS7~CS12)	*/
#define ADDR_REG_PAGE0_OSR26		0x1D		/*!< Open/Short Status Register(SW9)(CS13~CS18)	*/
#define ADDR_REG_PAGE0_OSR27		0x1E		/*!< Open/Short Status Register(SW10)(CS1~CS6)	*/
#define ADDR_REG_PAGE0_OSR28		0x1F		/*!< Open/Short Status Register(SW10)(CS7~CS12)	*/
#define ADDR_REG_PAGE0_OSR29		0x20		/*!< Open/Short Status Register(SW10)(CS13~CS18)*/
#define ADDR_REG_PAGE0_OSR30		0x21		/*!< Open/Short Status Register(SW11)(CS1~CS6)	*/
#define ADDR_REG_PAGE0_OSR31		0x22		/*!< Open/Short Status Register(SW11)(CS7~CS12)	*/
#define ADDR_REG_PAGE0_OSR32		0x23		/*!< Open/Short Status Register(SW11)(CS13~CS18)*/
#define ADDR_REG_PAGE0_OTCR			0x27		/*!< Over Temperature Control Register			*/
#define ADDR_REG_PAGE0_SSCR			0x28		/*!< Spread Spectrum Control Register			*/
#define ADDR_REG_PAGE0_PCCR			0x29		/*!< PWM Clock Control Register					*/
#define ADDR_REG_PAGE0_UVCR			0x2A		/*!< UVLO Control Register						*/
#define ADDR_REG_PAGE0_SRCR			0x2B		/*!< Open/Short Control Register				*/
#define ADDR_REG_PAGE0_RSTN			0x2F		/*!< Reset Register								*/
#define ADDR_REG_PAGE0_PWMH0		0x30		/*!< Maximum Brightness for Auto Breath			*/
#define ADDR_REG_PAGE0_PWMH1		0x31		/*!< Maximum Brightness for Auto Breath			*/
#define ADDR_REG_PAGE0_PWMH2		0x32		/*!< Maximum Brightness for Auto Breath			*/
#define ADDR_REG_PAGE0_PWML0		0x33		/*!< Minimum Brightness for Auto Breath			*/
#define ADDR_REG_PAGE0_PWML1		0x34		/*!< Minimum Brightness for Auto Breath			*/
#define ADDR_REG_PAGE0_PWML2		0x35		/*!< Minimum Brightness for Auto Breath			*/
#define ADDR_REG_PAGE0_PAT0T0		0x36		/*!< Pattern Timer 0							*/
#define ADDR_REG_PAGE0_PAT0T1		0x37		/*!< Pattern Timer 1							*/
#define ADDR_REG_PAGE0_PAT0T2		0x38		/*!< Pattern Control Register 1					*/
#define ADDR_REG_PAGE0_PAT0T3		0x39		/*!< Pattern Control Register 2					*/
#define ADDR_REG_PAGE0_PAT1T0		0x3A		/*!< Pattern Timer 0							*/
#define ADDR_REG_PAGE0_PAT1T1		0x3B		/*!< Pattern Timer 1							*/
#define ADDR_REG_PAGE0_PAT1T2		0x3C		/*!< Pattern Control Register 1					*/
#define ADDR_REG_PAGE0_PAT1T3		0x3D		/*!< Pattern Control Register 2					*/
#define ADDR_REG_PAGE0_PAT2T0		0x3E		/*!< Pattern Timer 0							*/
#define ADDR_REG_PAGE0_PAT2T1		0x3F		/*!< Pattern Timer 1							*/
#define ADDR_REG_PAGE0_PAT2T2		0x40		/*!< Pattern Control Register 1					*/
#define ADDR_REG_PAGE0_PAT2T3		0x41		/*!< Pattern Control Register 2					*/
#define ADDR_REG_PAGE0_PAT0CFG		0x42		/*!< Configure Register							*/
#define ADDR_REG_PAGE0_PAT1CFG		0x43		/*!< Configure Register							*/
#define ADDR_REG_PAGE0_PAT2CFG		0x44		/*!< Configure Register							*/
#define ADDR_REG_PAGE0_PATGO		0x45		/*!< Start Control Register						*/
#define ADDR_REG_PAGE0_MIXCR		0x46		/*!< Mix Function Control Register				*/
#define ADDR_REG_PAGE0_SDCR			0x4D		/*!< SW Drive Capability Register				*/
#define ADDR_REG_PAGE0_PAGE			0xF0		/*!< Page register								*/
/*!<--------------------------------------------------------------------------------------------*/
#define ADDR_REG_PAGE1_PWM0			0x00		/*!< PWMx Configure Register(x=0)				*/
#define ADDR_REG_PAGE1_PWM1			0x01		/*!< PWMx Configure Register(x=1)				*/
#define ADDR_REG_PAGE1_PWM2			0x02		/*!< PWMx Configure Register(x=2)				*/
#define ADDR_REG_PAGE1_PWM3			0x03		/*!< PWMx Configure Register(x=3)				*/
#define ADDR_REG_PAGE1_PWM4			0x04		/*!< PWMx Configure Register(x=4)				*/
#define ADDR_REG_PAGE1_PWM5			0x05		/*!< PWMx Configure Register(x=5)				*/
#define ADDR_REG_PAGE1_PWM6			0x06		/*!< PWMx Configure Register(x=6)				*/
#define ADDR_REG_PAGE1_PWM7			0x07		/*!< PWMx Configure Register(x=7)				*/
#define ADDR_REG_PAGE1_PWM8			0x08		/*!< PWMx Configure Register(x=8)				*/
#define ADDR_REG_PAGE1_PWM9			0x09		/*!< PWMx Configure Register(x=9)				*/
#define ADDR_REG_PAGE1_PWM10		0x0A		/*!< PWMx Configure Register(x=10)				*/
#define ADDR_REG_PAGE1_PWM11		0x0B		/*!< PWMx Configure Register(x=11)				*/
#define ADDR_REG_PAGE1_PWM12		0x0C		/*!< PWMx Configure Register(x=12)				*/
#define ADDR_REG_PAGE1_PWM13		0x0D		/*!< PWMx Configure Register(x=13)				*/
#define ADDR_REG_PAGE1_PWM14		0x0E		/*!< PWMx Configure Register(x=14)				*/
#define ADDR_REG_PAGE1_PWM15		0x0F		/*!< PWMx Configure Register(x=15)				*/
#define ADDR_REG_PAGE1_PWM16		0x10		/*!< PWMx Configure Register(x=16)				*/
#define ADDR_REG_PAGE1_PWM17		0x11		/*!< PWMx Configure Register(x=17)				*/
#define ADDR_REG_PAGE1_PWM18		0x12		/*!< PWMx Configure Register(x=18)				*/
#define ADDR_REG_PAGE1_PWM19		0x13		/*!< PWMx Configure Register(x=19)				*/
#define ADDR_REG_PAGE1_PWM20		0x14		/*!< PWMx Configure Register(x=20)				*/
#define ADDR_REG_PAGE1_PWM21		0x15		/*!< PWMx Configure Register(x=21)				*/
#define ADDR_REG_PAGE1_PWM22		0x16		/*!< PWMx Configure Register(x=22)				*/
#define ADDR_REG_PAGE1_PWM23		0x17		/*!< PWMx Configure Register(x=23)				*/
#define ADDR_REG_PAGE1_PWM24		0x18		/*!< PWMx Configure Register(x=24)				*/
#define ADDR_REG_PAGE1_PWM25		0x19		/*!< PWMx Configure Register(x=25)				*/
#define ADDR_REG_PAGE1_PWM26		0x1A		/*!< PWMx Configure Register(x=26)				*/
#define ADDR_REG_PAGE1_PWM27		0x1B		/*!< PWMx Configure Register(x=27)				*/
#define ADDR_REG_PAGE1_PWM28		0x1C		/*!< PWMx Configure Register(x=28)				*/
#define ADDR_REG_PAGE1_PWM29		0x1D		/*!< PWMx Configure Register(x=29)				*/
#define ADDR_REG_PAGE1_PWM30		0x1E		/*!< PWMx Configure Register(x=30)				*/
#define ADDR_REG_PAGE1_PWM31		0x1F		/*!< PWMx Configure Register(x=31)				*/
#define ADDR_REG_PAGE1_PWM32		0x20		/*!< PWMx Configure Register(x=32)				*/
#define ADDR_REG_PAGE1_PWM33		0x21		/*!< PWMx Configure Register(x=33)				*/
#define ADDR_REG_PAGE1_PWM34		0x22		/*!< PWMx Configure Register(x=34)				*/
#define ADDR_REG_PAGE1_PWM35		0x23		/*!< PWMx Configure Register(x=35)				*/
#define ADDR_REG_PAGE1_PWM36		0x24		/*!< PWMx Configure Register(x=36)				*/
#define ADDR_REG_PAGE1_PWM37		0x25		/*!< PWMx Configure Register(x=37)				*/
#define ADDR_REG_PAGE1_PWM38		0x26		/*!< PWMx Configure Register(x=38)				*/
#define ADDR_REG_PAGE1_PWM39		0x27		/*!< PWMx Configure Register(x=39)				*/
#define ADDR_REG_PAGE1_PWM40		0x28		/*!< PWMx Configure Register(x=40)				*/
#define ADDR_REG_PAGE1_PWM41		0x29		/*!< PWMx Configure Register(x=41)				*/
#define ADDR_REG_PAGE1_PWM42		0x2A		/*!< PWMx Configure Register(x=42)				*/
#define ADDR_REG_PAGE1_PWM43		0x2B		/*!< PWMx Configure Register(x=43)				*/
#define ADDR_REG_PAGE1_PWM44		0x2C		/*!< PWMx Configure Register(x=44)				*/
#define ADDR_REG_PAGE1_PWM45		0x2D		/*!< PWMx Configure Register(x=45)				*/
#define ADDR_REG_PAGE1_PWM46		0x2E		/*!< PWMx Configure Register(x=46)				*/
#define ADDR_REG_PAGE1_PWM47		0x2F		/*!< PWMx Configure Register(x=47)				*/
#define ADDR_REG_PAGE1_PWM48		0x30		/*!< PWMx Configure Register(x=48)				*/
#define ADDR_REG_PAGE1_PWM49		0x31		/*!< PWMx Configure Register(x=49)				*/
#define ADDR_REG_PAGE1_PWM50		0x32		/*!< PWMx Configure Register(x=50)				*/
#define ADDR_REG_PAGE1_PWM51		0x33		/*!< PWMx Configure Register(x=51)				*/
#define ADDR_REG_PAGE1_PWM52		0x34		/*!< PWMx Configure Register(x=52)				*/
#define ADDR_REG_PAGE1_PWM53		0x35		/*!< PWMx Configure Register(x=53)				*/
#define ADDR_REG_PAGE1_PWM54		0x36		/*!< PWMx Configure Register(x=54)				*/
#define ADDR_REG_PAGE1_PWM55		0x37		/*!< PWMx Configure Register(x=55)				*/
#define ADDR_REG_PAGE1_PWM56		0x38		/*!< PWMx Configure Register(x=56)				*/
#define ADDR_REG_PAGE1_PWM57		0x39		/*!< PWMx Configure Register(x=57)				*/
#define ADDR_REG_PAGE1_PWM58		0x3A		/*!< PWMx Configure Register(x=58)				*/
#define ADDR_REG_PAGE1_PWM59		0x3B		/*!< PWMx Configure Register(x=59)				*/
#define ADDR_REG_PAGE1_PWM60		0x3C		/*!< PWMx Configure Register(x=60)				*/
#define ADDR_REG_PAGE1_PWM61		0x3D		/*!< PWMx Configure Register(x=61)				*/
#define ADDR_REG_PAGE1_PWM62		0x3E		/*!< PWMx Configure Register(x=62)				*/
#define ADDR_REG_PAGE1_PWM63		0x3F		/*!< PWMx Configure Register(x=63)				*/
#define ADDR_REG_PAGE1_PWM64		0x40		/*!< PWMx Configure Register(x=64)				*/
#define ADDR_REG_PAGE1_PWM65		0x41		/*!< PWMx Configure Register(x=65)				*/
#define ADDR_REG_PAGE1_PWM66		0x42		/*!< PWMx Configure Register(x=66)				*/
#define ADDR_REG_PAGE1_PWM67		0x43		/*!< PWMx Configure Register(x=67)				*/
#define ADDR_REG_PAGE1_PWM68		0x44		/*!< PWMx Configure Register(x=68)				*/
#define ADDR_REG_PAGE1_PWM69		0x45		/*!< PWMx Configure Register(x=69)				*/
#define ADDR_REG_PAGE1_PWM70		0x46		/*!< PWMx Configure Register(x=70)				*/
#define ADDR_REG_PAGE1_PWM71		0x47		/*!< PWMx Configure Register(x=71)				*/
#define ADDR_REG_PAGE1_PWM72		0x48		/*!< PWMx Configure Register(x=72)				*/
#define ADDR_REG_PAGE1_PWM73		0x49		/*!< PWMx Configure Register(x=73)				*/
#define ADDR_REG_PAGE1_PWM74		0x4A		/*!< PWMx Configure Register(x=74)				*/
#define ADDR_REG_PAGE1_PWM75		0x4B		/*!< PWMx Configure Register(x=75)				*/
#define ADDR_REG_PAGE1_PWM76		0x4C		/*!< PWMx Configure Register(x=76)				*/
#define ADDR_REG_PAGE1_PWM77		0x4D		/*!< PWMx Configure Register(x=77)				*/
#define ADDR_REG_PAGE1_PWM78		0x4E		/*!< PWMx Configure Register(x=78)				*/
#define ADDR_REG_PAGE1_PWM79		0x4F		/*!< PWMx Configure Register(x=79)				*/
#define ADDR_REG_PAGE1_PWM80		0x50		/*!< PWMx Configure Register(x=80)				*/
#define ADDR_REG_PAGE1_PWM81		0x51		/*!< PWMx Configure Register(x=81)				*/
#define ADDR_REG_PAGE1_PWM82		0x52		/*!< PWMx Configure Register(x=82)				*/
#define ADDR_REG_PAGE1_PWM83		0x53		/*!< PWMx Configure Register(x=83)				*/
#define ADDR_REG_PAGE1_PWM84		0x54		/*!< PWMx Configure Register(x=84)				*/
#define ADDR_REG_PAGE1_PWM85		0x55		/*!< PWMx Configure Register(x=85)				*/
#define ADDR_REG_PAGE1_PWM86		0x56		/*!< PWMx Configure Register(x=86)				*/
#define ADDR_REG_PAGE1_PWM87		0x57		/*!< PWMx Configure Register(x=87)				*/
#define ADDR_REG_PAGE1_PWM88		0x58		/*!< PWMx Configure Register(x=88)				*/
#define ADDR_REG_PAGE1_PWM89		0x59		/*!< PWMx Configure Register(x=89)				*/
#define ADDR_REG_PAGE1_PWM90		0x5A		/*!< PWMx Configure Register(x=90)				*/
#define ADDR_REG_PAGE1_PWM91		0x5B		/*!< PWMx Configure Register(x=91)				*/
#define ADDR_REG_PAGE1_PWM92		0x5C		/*!< PWMx Configure Register(x=92)				*/
#define ADDR_REG_PAGE1_PWM93		0x5D		/*!< PWMx Configure Register(x=93)				*/
#define ADDR_REG_PAGE1_PWM94		0x5E		/*!< PWMx Configure Register(x=94)				*/
#define ADDR_REG_PAGE1_PWM95		0x5F		/*!< PWMx Configure Register(x=95)				*/
#define ADDR_REG_PAGE1_PWM96		0x60		/*!< PWMx Configure Register(x=96)				*/
#define ADDR_REG_PAGE1_PWM97		0x61		/*!< PWMx Configure Register(x=97)				*/
#define ADDR_REG_PAGE1_PWM98		0x62		/*!< PWMx Configure Register(x=98)				*/
#define ADDR_REG_PAGE1_PWM99		0x63		/*!< PWMx Configure Register(x=99)				*/
#define ADDR_REG_PAGE1_PWM100		0x64		/*!< PWMx Configure Register(x=100)				*/
#define ADDR_REG_PAGE1_PWM101		0x65		/*!< PWMx Configure Register(x=101)				*/
#define ADDR_REG_PAGE1_PWM102		0x66		/*!< PWMx Configure Register(x=102)				*/
#define ADDR_REG_PAGE1_PWM103		0x67		/*!< PWMx Configure Register(x=103)				*/
#define ADDR_REG_PAGE1_PWM104		0x68		/*!< PWMx Configure Register(x=104)				*/
#define ADDR_REG_PAGE1_PWM105		0x69		/*!< PWMx Configure Register(x=105)				*/
#define ADDR_REG_PAGE1_PWM106		0x6A		/*!< PWMx Configure Register(x=106)				*/
#define ADDR_REG_PAGE1_PWM107		0x6B		/*!< PWMx Configure Register(x=107)				*/
#define ADDR_REG_PAGE1_PWM108		0x6C		/*!< PWMx Configure Register(x=108)				*/
#define ADDR_REG_PAGE1_PWM109		0x6D		/*!< PWMx Configure Register(x=109)				*/
#define ADDR_REG_PAGE1_PWM110		0x6E		/*!< PWMx Configure Register(x=110)				*/
#define ADDR_REG_PAGE1_PWM111		0x6F		/*!< PWMx Configure Register(x=111)				*/
#define ADDR_REG_PAGE1_PWM112		0x70		/*!< PWMx Configure Register(x=112)				*/
#define ADDR_REG_PAGE1_PWM113		0x71		/*!< PWMx Configure Register(x=113)				*/
#define ADDR_REG_PAGE1_PWM114		0x72		/*!< PWMx Configure Register(x=114)				*/
#define ADDR_REG_PAGE1_PWM115		0x73		/*!< PWMx Configure Register(x=115)				*/
#define ADDR_REG_PAGE1_PWM116		0x74		/*!< PWMx Configure Register(x=116)				*/
#define ADDR_REG_PAGE1_PWM117		0x75		/*!< PWMx Configure Register(x=117)				*/
#define ADDR_REG_PAGE1_PWM118		0x76		/*!< PWMx Configure Register(x=118)				*/
#define ADDR_REG_PAGE1_PWM119		0x77		/*!< PWMx Configure Register(x=119)				*/
#define ADDR_REG_PAGE1_PWM120		0x78		/*!< PWMx Configure Register(x=120)				*/
#define ADDR_REG_PAGE1_PWM121		0x79		/*!< PWMx Configure Register(x=121)				*/
#define ADDR_REG_PAGE1_PWM122		0x7A		/*!< PWMx Configure Register(x=122)				*/
#define ADDR_REG_PAGE1_PWM123		0x7B		/*!< PWMx Configure Register(x=123)				*/
#define ADDR_REG_PAGE1_PWM124		0x7C		/*!< PWMx Configure Register(x=124)				*/
#define ADDR_REG_PAGE1_PWM125		0x7D		/*!< PWMx Configure Register(x=125)				*/
#define ADDR_REG_PAGE1_PWM126		0x7E		/*!< PWMx Configure Register(x=126)				*/
#define ADDR_REG_PAGE1_PWM127		0x7F		/*!< PWMx Configure Register(x=127)				*/
#define ADDR_REG_PAGE1_PWM128		0x80		/*!< PWMx Configure Register(x=128)				*/
#define ADDR_REG_PAGE1_PWM129		0x81		/*!< PWMx Configure Register(x=129)				*/
#define ADDR_REG_PAGE1_PWM130		0x82		/*!< PWMx Configure Register(x=130)				*/
#define ADDR_REG_PAGE1_PWM131		0x83		/*!< PWMx Configure Register(x=131)				*/
#define ADDR_REG_PAGE1_PWM132		0x84		/*!< PWMx Configure Register(x=132)				*/
#define ADDR_REG_PAGE1_PWM133		0x85		/*!< PWMx Configure Register(x=133)				*/
#define ADDR_REG_PAGE1_PWM134		0x86		/*!< PWMx Configure Register(x=134)				*/
#define ADDR_REG_PAGE1_PWM135		0x87		/*!< PWMx Configure Register(x=135)				*/
#define ADDR_REG_PAGE1_PWM136		0x88		/*!< PWMx Configure Register(x=136)				*/
#define ADDR_REG_PAGE1_PWM137		0x89		/*!< PWMx Configure Register(x=137)				*/
#define ADDR_REG_PAGE1_PWM138		0x8A		/*!< PWMx Configure Register(x=138)				*/
#define ADDR_REG_PAGE1_PWM139		0x8B		/*!< PWMx Configure Register(x=139)				*/
#define ADDR_REG_PAGE1_PWM140		0x8C		/*!< PWMx Configure Register(x=140)				*/
#define ADDR_REG_PAGE1_PWM141		0x8D		/*!< PWMx Configure Register(x=141)				*/
#define ADDR_REG_PAGE1_PWM142		0x8E		/*!< PWMx Configure Register(x=142)				*/
#define ADDR_REG_PAGE1_PWM143		0x8F		/*!< PWMx Configure Register(x=143)				*/
#define ADDR_REG_PAGE1_PWM144		0x90		/*!< PWMx Configure Register(x=144)				*/
#define ADDR_REG_PAGE1_PWM145		0x91		/*!< PWMx Configure Register(x=145)				*/
#define ADDR_REG_PAGE1_PWM146		0x92		/*!< PWMx Configure Register(x=146)				*/
#define ADDR_REG_PAGE1_PWM147		0x93		/*!< PWMx Configure Register(x=147)				*/
#define ADDR_REG_PAGE1_PWM148		0x94		/*!< PWMx Configure Register(x=148)				*/
#define ADDR_REG_PAGE1_PWM149		0x95		/*!< PWMx Configure Register(x=149)				*/
#define ADDR_REG_PAGE1_PWM150		0x96		/*!< PWMx Configure Register(x=150)				*/
#define ADDR_REG_PAGE1_PWM151		0x97		/*!< PWMx Configure Register(x=151)				*/
#define ADDR_REG_PAGE1_PWM152		0x98		/*!< PWMx Configure Register(x=152)				*/
#define ADDR_REG_PAGE1_PWM153		0x99		/*!< PWMx Configure Register(x=153)				*/
#define ADDR_REG_PAGE1_PWM154		0x9A		/*!< PWMx Configure Register(x=154)				*/
#define ADDR_REG_PAGE1_PWM155		0x9B		/*!< PWMx Configure Register(x=155)				*/
#define ADDR_REG_PAGE1_PWM156		0x9C		/*!< PWMx Configure Register(x=156)				*/
#define ADDR_REG_PAGE1_PWM157		0x9D		/*!< PWMx Configure Register(x=157)				*/
#define ADDR_REG_PAGE1_PWM158		0x9E		/*!< PWMx Configure Register(x=158)				*/
#define ADDR_REG_PAGE1_PWM159		0x9F		/*!< PWMx Configure Register(x=159)				*/
#define ADDR_REG_PAGE1_PWM160		0xA0		/*!< PWMx Configure Register(x=160)				*/
#define ADDR_REG_PAGE1_PWM161		0xA1		/*!< PWMx Configure Register(x=161)				*/
#define ADDR_REG_PAGE1_PWM162		0xA2		/*!< PWMx Configure Register(x=162)				*/
#define ADDR_REG_PAGE1_PWM163		0xA3		/*!< PWMx Configure Register(x=163)				*/
#define ADDR_REG_PAGE1_PWM164		0xA4		/*!< PWMx Configure Register(x=164)				*/
#define ADDR_REG_PAGE1_PWM165		0xA5		/*!< PWMx Configure Register(x=165)				*/
#define ADDR_REG_PAGE1_PWM166		0xA6		/*!< PWMx Configure Register(x=166)				*/
#define ADDR_REG_PAGE1_PWM167		0xA7		/*!< PWMx Configure Register(x=167)				*/
#define ADDR_REG_PAGE1_PWM168		0xA8		/*!< PWMx Configure Register(x=168)				*/
#define ADDR_REG_PAGE1_PWM169		0xA9		/*!< PWMx Configure Register(x=169)				*/
#define ADDR_REG_PAGE1_PWM170		0xAA		/*!< PWMx Configure Register(x=170)				*/
#define ADDR_REG_PAGE1_PWM171		0xAB		/*!< PWMx Configure Register(x=171)				*/
#define ADDR_REG_PAGE1_PWM172		0xAC		/*!< PWMx Configure Register(x=172)				*/
#define ADDR_REG_PAGE1_PWM173		0xAD		/*!< PWMx Configure Register(x=173)				*/
#define ADDR_REG_PAGE1_PWM174		0xAE		/*!< PWMx Configure Register(x=174)				*/
#define ADDR_REG_PAGE1_PWM175		0xAF		/*!< PWMx Configure Register(x=175)				*/
#define ADDR_REG_PAGE1_PWM176		0xB0		/*!< PWMx Configure Register(x=176)				*/
#define ADDR_REG_PAGE1_PWM177		0xB1		/*!< PWMx Configure Register(x=177)				*/
#define ADDR_REG_PAGE1_PWM178		0xB2		/*!< PWMx Configure Register(x=178)				*/
#define ADDR_REG_PAGE1_PWM179		0xB3		/*!< PWMx Configure Register(x=179)				*/
#define ADDR_REG_PAGE1_PWM180		0xB4		/*!< PWMx Configure Register(x=180)				*/
#define ADDR_REG_PAGE1_PWM181		0xB5		/*!< PWMx Configure Register(x=181)				*/
#define ADDR_REG_PAGE1_PWM182		0xB6		/*!< PWMx Configure Register(x=182)				*/
#define ADDR_REG_PAGE1_PWM183		0xB7		/*!< PWMx Configure Register(x=183)				*/
#define ADDR_REG_PAGE1_PWM184		0xB8		/*!< PWMx Configure Register(x=184)				*/
#define ADDR_REG_PAGE1_PWM185		0xB9		/*!< PWMx Configure Register(x=185)				*/
#define ADDR_REG_PAGE1_PWM186		0xBA		/*!< PWMx Configure Register(x=186)				*/
#define ADDR_REG_PAGE1_PWM187		0xBB		/*!< PWMx Configure Register(x=187)				*/
#define ADDR_REG_PAGE1_PWM188		0xBC		/*!< PWMx Configure Register(x=188)				*/
#define ADDR_REG_PAGE1_PWM189		0xBD		/*!< PWMx Configure Register(x=189)				*/
#define ADDR_REG_PAGE1_PWM190		0xBE		/*!< PWMx Configure Register(x=190)				*/
#define ADDR_REG_PAGE1_PWM191		0xBF		/*!< PWMx Configure Register(x=191)				*/
#define ADDR_REG_PAGE1_PWM192		0xC0		/*!< PWMx Configure Register(x=192)				*/
#define ADDR_REG_PAGE1_PWM193		0xC1		/*!< PWMx Configure Register(x=193)				*/
#define ADDR_REG_PAGE1_PWM194		0xC2		/*!< PWMx Configure Register(x=194)				*/
#define ADDR_REG_PAGE1_PWM195		0xC3		/*!< PWMx Configure Register(x=195)				*/
#define ADDR_REG_PAGE1_PWM196		0xC4		/*!< PWMx Configure Register(x=196)				*/
#define ADDR_REG_PAGE1_PWM197		0xC5		/*!< PWMx Configure Register(x=197)				*/
#define ADDR_REG_PAGE1_PAGE			0xF0		/*!< Page register								*/
/*!<--------------------------------------------------------------------------------------------*/
#define ADDR_REG_PAGE2_SL0			0x00		/*!< SLx Configure Register(x=0)				*/
#define ADDR_REG_PAGE2_SL1			0x01		/*!< SLx Configure Register(x=1)				*/
#define ADDR_REG_PAGE2_SL2			0x02		/*!< SLx Configure Register(x=2)				*/
#define ADDR_REG_PAGE2_SL3			0x03		/*!< SLx Configure Register(x=3)				*/
#define ADDR_REG_PAGE2_SL4			0x04		/*!< SLx Configure Register(x=4)				*/
#define ADDR_REG_PAGE2_SL5			0x05		/*!< SLx Configure Register(x=5)				*/
#define ADDR_REG_PAGE2_SL6			0x06		/*!< SLx Configure Register(x=6)				*/
#define ADDR_REG_PAGE2_SL7			0x07		/*!< SLx Configure Register(x=7)				*/
#define ADDR_REG_PAGE2_SL8			0x08		/*!< SLx Configure Register(x=8)				*/
#define ADDR_REG_PAGE2_SL9			0x09		/*!< SLx Configure Register(x=9)				*/
#define ADDR_REG_PAGE2_SL10			0x0A		/*!< SLx Configure Register(x=10)				*/
#define ADDR_REG_PAGE2_SL11			0x0B		/*!< SLx Configure Register(x=11)				*/
#define ADDR_REG_PAGE2_SL12			0x0C		/*!< SLx Configure Register(x=12)				*/
#define ADDR_REG_PAGE2_SL13			0x0D		/*!< SLx Configure Register(x=13)				*/
#define ADDR_REG_PAGE2_SL14			0x0E		/*!< SLx Configure Register(x=14)				*/
#define ADDR_REG_PAGE2_SL15			0x0F		/*!< SLx Configure Register(x=15)				*/
#define ADDR_REG_PAGE2_SL16			0x10		/*!< SLx Configure Register(x=16)				*/
#define ADDR_REG_PAGE2_SL17			0x11		/*!< SLx Configure Register(x=17)				*/
#define ADDR_REG_PAGE2_SL18			0x12		/*!< SLx Configure Register(x=18)				*/
#define ADDR_REG_PAGE2_SL19			0x13		/*!< SLx Configure Register(x=19)				*/
#define ADDR_REG_PAGE2_SL20			0x14		/*!< SLx Configure Register(x=20)				*/
#define ADDR_REG_PAGE2_SL21			0x15		/*!< SLx Configure Register(x=21)				*/
#define ADDR_REG_PAGE2_SL22			0x16		/*!< SLx Configure Register(x=22)				*/
#define ADDR_REG_PAGE2_SL23			0x17		/*!< SLx Configure Register(x=23)				*/
#define ADDR_REG_PAGE2_SL24			0x18		/*!< SLx Configure Register(x=24)				*/
#define ADDR_REG_PAGE2_SL25			0x19		/*!< SLx Configure Register(x=25)				*/
#define ADDR_REG_PAGE2_SL26			0x1A		/*!< SLx Configure Register(x=26)				*/
#define ADDR_REG_PAGE2_SL27			0x1B		/*!< SLx Configure Register(x=27)				*/
#define ADDR_REG_PAGE2_SL28			0x1C		/*!< SLx Configure Register(x=28)				*/
#define ADDR_REG_PAGE2_SL29			0x1D		/*!< SLx Configure Register(x=29)				*/
#define ADDR_REG_PAGE2_SL30			0x1E		/*!< SLx Configure Register(x=30)				*/
#define ADDR_REG_PAGE2_SL31			0x1F		/*!< SLx Configure Register(x=31)				*/
#define ADDR_REG_PAGE2_SL32			0x20		/*!< SLx Configure Register(x=32)				*/
#define ADDR_REG_PAGE2_SL33			0x21		/*!< SLx Configure Register(x=33)				*/
#define ADDR_REG_PAGE2_SL34			0x22		/*!< SLx Configure Register(x=34)				*/
#define ADDR_REG_PAGE2_SL35			0x23		/*!< SLx Configure Register(x=35)				*/
#define ADDR_REG_PAGE2_SL36			0x24		/*!< SLx Configure Register(x=36)				*/
#define ADDR_REG_PAGE2_SL37			0x25		/*!< SLx Configure Register(x=37)				*/
#define ADDR_REG_PAGE2_SL38			0x26		/*!< SLx Configure Register(x=38)				*/
#define ADDR_REG_PAGE2_SL39			0x27		/*!< SLx Configure Register(x=39)				*/
#define ADDR_REG_PAGE2_SL40			0x28		/*!< SLx Configure Register(x=40)				*/
#define ADDR_REG_PAGE2_SL41			0x29		/*!< SLx Configure Register(x=41)				*/
#define ADDR_REG_PAGE2_SL42			0x2A		/*!< SLx Configure Register(x=42)				*/
#define ADDR_REG_PAGE2_SL43			0x2B		/*!< SLx Configure Register(x=43)				*/
#define ADDR_REG_PAGE2_SL44			0x2C		/*!< SLx Configure Register(x=44)				*/
#define ADDR_REG_PAGE2_SL45			0x2D		/*!< SLx Configure Register(x=45)				*/
#define ADDR_REG_PAGE2_SL46			0x2E		/*!< SLx Configure Register(x=46)				*/
#define ADDR_REG_PAGE2_SL47			0x2F		/*!< SLx Configure Register(x=47)				*/
#define ADDR_REG_PAGE2_SL48			0x30		/*!< SLx Configure Register(x=48)				*/
#define ADDR_REG_PAGE2_SL49			0x31		/*!< SLx Configure Register(x=49)				*/
#define ADDR_REG_PAGE2_SL50			0x32		/*!< SLx Configure Register(x=50)				*/
#define ADDR_REG_PAGE2_SL51			0x33		/*!< SLx Configure Register(x=51)				*/
#define ADDR_REG_PAGE2_SL52			0x34		/*!< SLx Configure Register(x=52)				*/
#define ADDR_REG_PAGE2_SL53			0x35		/*!< SLx Configure Register(x=53)				*/
#define ADDR_REG_PAGE2_SL54			0x36		/*!< SLx Configure Register(x=54)				*/
#define ADDR_REG_PAGE2_SL55			0x37		/*!< SLx Configure Register(x=55)				*/
#define ADDR_REG_PAGE2_SL56			0x38		/*!< SLx Configure Register(x=56)				*/
#define ADDR_REG_PAGE2_SL57			0x39		/*!< SLx Configure Register(x=57)				*/
#define ADDR_REG_PAGE2_SL58			0x3A		/*!< SLx Configure Register(x=58)				*/
#define ADDR_REG_PAGE2_SL59			0x3B		/*!< SLx Configure Register(x=59)				*/
#define ADDR_REG_PAGE2_SL60			0x3C		/*!< SLx Configure Register(x=60)				*/
#define ADDR_REG_PAGE2_SL61			0x3D		/*!< SLx Configure Register(x=61)				*/
#define ADDR_REG_PAGE2_SL62			0x3E		/*!< SLx Configure Register(x=62)				*/
#define ADDR_REG_PAGE2_SL63			0x3F		/*!< SLx Configure Register(x=63)				*/
#define ADDR_REG_PAGE2_SL64			0x40		/*!< SLx Configure Register(x=64)				*/
#define ADDR_REG_PAGE2_SL65			0x41		/*!< SLx Configure Register(x=65)				*/
#define ADDR_REG_PAGE2_SL66			0x42		/*!< SLx Configure Register(x=66)				*/
#define ADDR_REG_PAGE2_SL67			0x43		/*!< SLx Configure Register(x=67)				*/
#define ADDR_REG_PAGE2_SL68			0x44		/*!< SLx Configure Register(x=68)				*/
#define ADDR_REG_PAGE2_SL69			0x45		/*!< SLx Configure Register(x=69)				*/
#define ADDR_REG_PAGE2_SL70			0x46		/*!< SLx Configure Register(x=70)				*/
#define ADDR_REG_PAGE2_SL71			0x47		/*!< SLx Configure Register(x=71)				*/
#define ADDR_REG_PAGE2_SL72			0x48		/*!< SLx Configure Register(x=72)				*/
#define ADDR_REG_PAGE2_SL73			0x49		/*!< SLx Configure Register(x=73)				*/
#define ADDR_REG_PAGE2_SL74			0x4A		/*!< SLx Configure Register(x=74)				*/
#define ADDR_REG_PAGE2_SL75			0x4B		/*!< SLx Configure Register(x=75)				*/
#define ADDR_REG_PAGE2_SL76			0x4C		/*!< SLx Configure Register(x=76)				*/
#define ADDR_REG_PAGE2_SL77			0x4D		/*!< SLx Configure Register(x=77)				*/
#define ADDR_REG_PAGE2_SL78			0x4E		/*!< SLx Configure Register(x=78)				*/
#define ADDR_REG_PAGE2_SL79			0x4F		/*!< SLx Configure Register(x=79)				*/
#define ADDR_REG_PAGE2_SL80			0x50		/*!< SLx Configure Register(x=80)				*/
#define ADDR_REG_PAGE2_SL81			0x51		/*!< SLx Configure Register(x=81)				*/
#define ADDR_REG_PAGE2_SL82			0x52		/*!< SLx Configure Register(x=82)				*/
#define ADDR_REG_PAGE2_SL83			0x53		/*!< SLx Configure Register(x=83)				*/
#define ADDR_REG_PAGE2_SL84			0x54		/*!< SLx Configure Register(x=84)				*/
#define ADDR_REG_PAGE2_SL85			0x55		/*!< SLx Configure Register(x=85)				*/
#define ADDR_REG_PAGE2_SL86			0x56		/*!< SLx Configure Register(x=86)				*/
#define ADDR_REG_PAGE2_SL87			0x57		/*!< SLx Configure Register(x=87)				*/
#define ADDR_REG_PAGE2_SL88			0x58		/*!< SLx Configure Register(x=88)				*/
#define ADDR_REG_PAGE2_SL89			0x59		/*!< SLx Configure Register(x=89)				*/
#define ADDR_REG_PAGE2_SL90			0x5A		/*!< SLx Configure Register(x=90)				*/
#define ADDR_REG_PAGE2_SL91			0x5B		/*!< SLx Configure Register(x=91)				*/
#define ADDR_REG_PAGE2_SL92			0x5C		/*!< SLx Configure Register(x=92)				*/
#define ADDR_REG_PAGE2_SL93			0x5D		/*!< SLx Configure Register(x=93)				*/
#define ADDR_REG_PAGE2_SL94			0x5E		/*!< SLx Configure Register(x=94)				*/
#define ADDR_REG_PAGE2_SL95			0x5F		/*!< SLx Configure Register(x=95)				*/
#define ADDR_REG_PAGE2_SL96			0x60		/*!< SLx Configure Register(x=96)				*/
#define ADDR_REG_PAGE2_SL97			0x61		/*!< SLx Configure Register(x=97)				*/
#define ADDR_REG_PAGE2_SL98			0x62		/*!< SLx Configure Register(x=98)				*/
#define ADDR_REG_PAGE2_SL99			0x63		/*!< SLx Configure Register(x=99)				*/
#define ADDR_REG_PAGE2_SL100		0x64		/*!< SLx Configure Register(x=100)				*/
#define ADDR_REG_PAGE2_SL101		0x65		/*!< SLx Configure Register(x=101)				*/
#define ADDR_REG_PAGE2_SL102		0x66		/*!< SLx Configure Register(x=102)				*/
#define ADDR_REG_PAGE2_SL103		0x67		/*!< SLx Configure Register(x=103)				*/
#define ADDR_REG_PAGE2_SL104		0x68		/*!< SLx Configure Register(x=104)				*/
#define ADDR_REG_PAGE2_SL105		0x69		/*!< SLx Configure Register(x=105)				*/
#define ADDR_REG_PAGE2_SL106		0x6A		/*!< SLx Configure Register(x=106)				*/
#define ADDR_REG_PAGE2_SL107		0x6B		/*!< SLx Configure Register(x=107)				*/
#define ADDR_REG_PAGE2_SL108		0x6C		/*!< SLx Configure Register(x=108)				*/
#define ADDR_REG_PAGE2_SL109		0x6D		/*!< SLx Configure Register(x=109)				*/
#define ADDR_REG_PAGE2_SL110		0x6E		/*!< SLx Configure Register(x=110)				*/
#define ADDR_REG_PAGE2_SL111		0x6F		/*!< SLx Configure Register(x=111)				*/
#define ADDR_REG_PAGE2_SL112		0x70		/*!< SLx Configure Register(x=112)				*/
#define ADDR_REG_PAGE2_SL113		0x71		/*!< SLx Configure Register(x=113)				*/
#define ADDR_REG_PAGE2_SL114		0x72		/*!< SLx Configure Register(x=114)				*/
#define ADDR_REG_PAGE2_SL115		0x73		/*!< SLx Configure Register(x=115)				*/
#define ADDR_REG_PAGE2_SL116		0x74		/*!< SLx Configure Register(x=116)				*/
#define ADDR_REG_PAGE2_SL117		0x75		/*!< SLx Configure Register(x=117)				*/
#define ADDR_REG_PAGE2_SL118		0x76		/*!< SLx Configure Register(x=118)				*/
#define ADDR_REG_PAGE2_SL119		0x77		/*!< SLx Configure Register(x=119)				*/
#define ADDR_REG_PAGE2_SL120		0x78		/*!< SLx Configure Register(x=120)				*/
#define ADDR_REG_PAGE2_SL121		0x79		/*!< SLx Configure Register(x=121)				*/
#define ADDR_REG_PAGE2_SL122		0x7A		/*!< SLx Configure Register(x=122)				*/
#define ADDR_REG_PAGE2_SL123		0x7B		/*!< SLx Configure Register(x=123)				*/
#define ADDR_REG_PAGE2_SL124		0x7C		/*!< SLx Configure Register(x=124)				*/
#define ADDR_REG_PAGE2_SL125		0x7D		/*!< SLx Configure Register(x=125)				*/
#define ADDR_REG_PAGE2_SL126		0x7E		/*!< SLx Configure Register(x=126)				*/
#define ADDR_REG_PAGE2_SL127		0x7F		/*!< SLx Configure Register(x=127)				*/
#define ADDR_REG_PAGE2_SL128		0x80		/*!< SLx Configure Register(x=128)				*/
#define ADDR_REG_PAGE2_SL129		0x81		/*!< SLx Configure Register(x=129)				*/
#define ADDR_REG_PAGE2_SL130		0x82		/*!< SLx Configure Register(x=130)				*/
#define ADDR_REG_PAGE2_SL131		0x83		/*!< SLx Configure Register(x=131)				*/
#define ADDR_REG_PAGE2_SL132		0x84		/*!< SLx Configure Register(x=132)				*/
#define ADDR_REG_PAGE2_SL133		0x85		/*!< SLx Configure Register(x=133)				*/
#define ADDR_REG_PAGE2_SL134		0x86		/*!< SLx Configure Register(x=134)				*/
#define ADDR_REG_PAGE2_SL135		0x87		/*!< SLx Configure Register(x=135)				*/
#define ADDR_REG_PAGE2_SL136		0x88		/*!< SLx Configure Register(x=136)				*/
#define ADDR_REG_PAGE2_SL137		0x89		/*!< SLx Configure Register(x=137)				*/
#define ADDR_REG_PAGE2_SL138		0x8A		/*!< SLx Configure Register(x=138)				*/
#define ADDR_REG_PAGE2_SL139		0x8B		/*!< SLx Configure Register(x=139)				*/
#define ADDR_REG_PAGE2_SL140		0x8C		/*!< SLx Configure Register(x=140)				*/
#define ADDR_REG_PAGE2_SL141		0x8D		/*!< SLx Configure Register(x=141)				*/
#define ADDR_REG_PAGE2_SL142		0x8E		/*!< SLx Configure Register(x=142)				*/
#define ADDR_REG_PAGE2_SL143		0x8F		/*!< SLx Configure Register(x=143)				*/
#define ADDR_REG_PAGE2_SL144		0x90		/*!< SLx Configure Register(x=144)				*/
#define ADDR_REG_PAGE2_SL145		0x91		/*!< SLx Configure Register(x=145)				*/
#define ADDR_REG_PAGE2_SL146		0x92		/*!< SLx Configure Register(x=146)				*/
#define ADDR_REG_PAGE2_SL147		0x93		/*!< SLx Configure Register(x=147)				*/
#define ADDR_REG_PAGE2_SL148		0x94		/*!< SLx Configure Register(x=148)				*/
#define ADDR_REG_PAGE2_SL149		0x95		/*!< SLx Configure Register(x=149)				*/
#define ADDR_REG_PAGE2_SL150		0x96		/*!< SLx Configure Register(x=150)				*/
#define ADDR_REG_PAGE2_SL151		0x97		/*!< SLx Configure Register(x=151)				*/
#define ADDR_REG_PAGE2_SL152		0x98		/*!< SLx Configure Register(x=152)				*/
#define ADDR_REG_PAGE2_SL153		0x99		/*!< SLx Configure Register(x=153)				*/
#define ADDR_REG_PAGE2_SL154		0x9A		/*!< SLx Configure Register(x=154)				*/
#define ADDR_REG_PAGE2_SL155		0x9B		/*!< SLx Configure Register(x=155)				*/
#define ADDR_REG_PAGE2_SL156		0x9C		/*!< SLx Configure Register(x=156)				*/
#define ADDR_REG_PAGE2_SL157		0x9D		/*!< SLx Configure Register(x=157)				*/
#define ADDR_REG_PAGE2_SL158		0x9E		/*!< SLx Configure Register(x=158)				*/
#define ADDR_REG_PAGE2_SL159		0x9F		/*!< SLx Configure Register(x=159)				*/
#define ADDR_REG_PAGE2_SL160		0xA0		/*!< SLx Configure Register(x=160)				*/
#define ADDR_REG_PAGE2_SL161		0xA1		/*!< SLx Configure Register(x=161)				*/
#define ADDR_REG_PAGE2_SL162		0xA2		/*!< SLx Configure Register(x=162)				*/
#define ADDR_REG_PAGE2_SL163		0xA3		/*!< SLx Configure Register(x=163)				*/
#define ADDR_REG_PAGE2_SL164		0xA4		/*!< SLx Configure Register(x=164)				*/
#define ADDR_REG_PAGE2_SL165		0xA5		/*!< SLx Configure Register(x=165)				*/
#define ADDR_REG_PAGE2_SL166		0xA6		/*!< SLx Configure Register(x=166)				*/
#define ADDR_REG_PAGE2_SL167		0xA7		/*!< SLx Configure Register(x=167)				*/
#define ADDR_REG_PAGE2_SL168		0xA8		/*!< SLx Configure Register(x=168)				*/
#define ADDR_REG_PAGE2_SL169		0xA9		/*!< SLx Configure Register(x=169)				*/
#define ADDR_REG_PAGE2_SL170		0xAA		/*!< SLx Configure Register(x=170)				*/
#define ADDR_REG_PAGE2_SL171		0xAB		/*!< SLx Configure Register(x=171)				*/
#define ADDR_REG_PAGE2_SL172		0xAC		/*!< SLx Configure Register(x=172)				*/
#define ADDR_REG_PAGE2_SL173		0xAD		/*!< SLx Configure Register(x=173)				*/
#define ADDR_REG_PAGE2_SL174		0xAE		/*!< SLx Configure Register(x=174)				*/
#define ADDR_REG_PAGE2_SL175		0xAF		/*!< SLx Configure Register(x=175)				*/
#define ADDR_REG_PAGE2_SL176		0xB0		/*!< SLx Configure Register(x=176)				*/
#define ADDR_REG_PAGE2_SL177		0xB1		/*!< SLx Configure Register(x=177)				*/
#define ADDR_REG_PAGE2_SL178		0xB2		/*!< SLx Configure Register(x=178)				*/
#define ADDR_REG_PAGE2_SL179		0xB3		/*!< SLx Configure Register(x=179)				*/
#define ADDR_REG_PAGE2_SL180		0xB4		/*!< SLx Configure Register(x=180)				*/
#define ADDR_REG_PAGE2_SL181		0xB5		/*!< SLx Configure Register(x=181)				*/
#define ADDR_REG_PAGE2_SL182		0xB6		/*!< SLx Configure Register(x=182)				*/
#define ADDR_REG_PAGE2_SL183		0xB7		/*!< SLx Configure Register(x=183)				*/
#define ADDR_REG_PAGE2_SL184		0xB8		/*!< SLx Configure Register(x=184)				*/
#define ADDR_REG_PAGE2_SL185		0xB9		/*!< SLx Configure Register(x=185)				*/
#define ADDR_REG_PAGE2_SL186		0xBA		/*!< SLx Configure Register(x=186)				*/
#define ADDR_REG_PAGE2_SL187		0xBB		/*!< SLx Configure Register(x=187)				*/
#define ADDR_REG_PAGE2_SL188		0xBC		/*!< SLx Configure Register(x=188)				*/
#define ADDR_REG_PAGE2_SL189		0xBD		/*!< SLx Configure Register(x=189)				*/
#define ADDR_REG_PAGE2_SL190		0xBE		/*!< SLx Configure Register(x=190)				*/
#define ADDR_REG_PAGE2_SL191		0xBF		/*!< SLx Configure Register(x=191)				*/
#define ADDR_REG_PAGE2_SL192		0xC0		/*!< SLx Configure Register(x=192)				*/
#define ADDR_REG_PAGE2_SL193		0xC1		/*!< SLx Configure Register(x=193)				*/
#define ADDR_REG_PAGE2_SL194		0xC2		/*!< SLx Configure Register(x=194)				*/
#define ADDR_REG_PAGE2_SL195		0xC3		/*!< SLx Configure Register(x=195)				*/
#define ADDR_REG_PAGE2_SL196		0xC4		/*!< SLx Configure Register(x=196)				*/
#define ADDR_REG_PAGE2_SL197		0xC5		/*!< SLx Configure Register(x=197)				*/
#define ADDR_REG_PAGE2_PAGE			0xF0		/*!< Page register								*/
/*!<--------------------------------------------------------------------------------------------*/
#define ADDR_REG_PAGE3_PATG0		0x00		/*!< PATx Choice Register(PATG0)(x=0,1,2)		*/
#define ADDR_REG_PAGE3_PATG1		0x01		/*!< PATx Choice Register(PATG1)(x=3,4,5)		*/
#define ADDR_REG_PAGE3_PATG2		0x02		/*!< PATx Choice Register(PATG2)(x=6,7,8)		*/
#define ADDR_REG_PAGE3_PATG3		0x03		/*!< PATx Choice Register(PATG3)(x=9,10,11)		*/
#define ADDR_REG_PAGE3_PATG4		0x04		/*!< PATx Choice Register(PATG4)(x=12,13,14)	*/
#define ADDR_REG_PAGE3_PATG5		0x05		/*!< PATx Choice Register(PATG5)(x=15,16,17)	*/
#define ADDR_REG_PAGE3_PATG6		0x06		/*!< PATx Choice Register(PATG6)(x=18,19,20)	*/
#define ADDR_REG_PAGE3_PATG7		0x07		/*!< PATx Choice Register(PATG7)(x=21,22,23)	*/
#define ADDR_REG_PAGE3_PATG8		0x08		/*!< PATx Choice Register(PATG8)(x=24,25,26)	*/
#define ADDR_REG_PAGE3_PATG9		0x09		/*!< PATx Choice Register(PATG9)(x=27,28,29)	*/
#define ADDR_REG_PAGE3_PATG10		0x0A		/*!< PATx Choice Register(PATG10)(x=30,31,32)	*/
#define ADDR_REG_PAGE3_PATG11		0x0B		/*!< PATx Choice Register(PATG11)(x=33,34,35)	*/
#define ADDR_REG_PAGE3_PATG12		0x0C		/*!< PATx Choice Register(PATG12)(x=36,37,38)	*/
#define ADDR_REG_PAGE3_PATG13		0x0D		/*!< PATx Choice Register(PATG13)(x=39,40,41)	*/
#define ADDR_REG_PAGE3_PATG14		0x0E		/*!< PATx Choice Register(PATG14)(x=42,43,44)	*/
#define ADDR_REG_PAGE3_PATG15		0x0F		/*!< PATx Choice Register(PATG15)(x=45,46,47)	*/
#define ADDR_REG_PAGE3_PATG16		0x10		/*!< PATx Choice Register(PATG16)(x=48,49,50)	*/
#define ADDR_REG_PAGE3_PATG17		0x11		/*!< PATx Choice Register(PATG17)(x=51,52,53)	*/
#define ADDR_REG_PAGE3_PATG18		0x12		/*!< PATx Choice Register(PATG18)(x=54,55,56)	*/
#define ADDR_REG_PAGE3_PATG19		0x13		/*!< PATx Choice Register(PATG19)(x=57,58,59)	*/
#define ADDR_REG_PAGE3_PATG20		0x14		/*!< PATx Choice Register(PATG20)(x=60,61,62)	*/
#define ADDR_REG_PAGE3_PATG21		0x15		/*!< PATx Choice Register(PATG21)(x=63,64,65)	*/
#define ADDR_REG_PAGE3_PATG22		0x16		/*!< PATx Choice Register(PATG22)(x=66,67,68)	*/
#define ADDR_REG_PAGE3_PATG23		0x17		/*!< PATx Choice Register(PATG23)(x=69,70,71)	*/
#define ADDR_REG_PAGE3_PATG24		0x18		/*!< PATx Choice Register(PATG24)(x=72,73,74)	*/
#define ADDR_REG_PAGE3_PATG25		0x19		/*!< PATx Choice Register(PATG25)(x=75,76,77)	*/
#define ADDR_REG_PAGE3_PATG26		0x1A		/*!< PATx Choice Register(PATG26)(x=78,79,80)	*/
#define ADDR_REG_PAGE3_PATG27		0x1B		/*!< PATx Choice Register(PATG27)(x=81,82,83)	*/
#define ADDR_REG_PAGE3_PATG28		0x1C		/*!< PATx Choice Register(PATG28)(x=84,85,86)	*/
#define ADDR_REG_PAGE3_PATG29		0x1D		/*!< PATx Choice Register(PATG29)(x=87,88,89)	*/
#define ADDR_REG_PAGE3_PATG30		0x1E		/*!< PATx Choice Register(PATG30)(x=90,91,92)	*/
#define ADDR_REG_PAGE3_PATG31		0x1F		/*!< PATx Choice Register(PATG31)(x=93,94,95)	*/
#define ADDR_REG_PAGE3_PATG32		0x20		/*!< PATx Choice Register(PATG32)(x=96,97,98)	*/
#define ADDR_REG_PAGE3_PATG33		0x21		/*!< PATx Choice Register(PATG33)(x=99,100,101)	*/
#define ADDR_REG_PAGE3_PATG34		0x22		/*!< PATx Choice Register(PATG34)(x=102,103,104)*/
#define ADDR_REG_PAGE3_PATG35		0x23		/*!< PATx Choice Register(PATG35)(x=105,106,107)*/
#define ADDR_REG_PAGE3_PATG36		0x24		/*!< PATx Choice Register(PATG36)(x=108,109,110)*/
#define ADDR_REG_PAGE3_PATG37		0x25		/*!< PATx Choice Register(PATG37)(x=111,112,113)*/
#define ADDR_REG_PAGE3_PATG38		0x26		/*!< PATx Choice Register(PATG38)(x=114,115,116)*/
#define ADDR_REG_PAGE3_PATG39		0x27		/*!< PATx Choice Register(PATG39)(x=117,118,119)*/
#define ADDR_REG_PAGE3_PATG40		0x28		/*!< PATx Choice Register(PATG40)(x=120,121,122)*/
#define ADDR_REG_PAGE3_PATG41		0x29		/*!< PATx Choice Register(PATG41)(x=123,124,125)*/
#define ADDR_REG_PAGE3_PATG42		0x2A		/*!< PATx Choice Register(PATG42)(x=126,127,128)*/
#define ADDR_REG_PAGE3_PATG43		0x2B		/*!< PATx Choice Register(PATG43)(x=129,130,131)*/
#define ADDR_REG_PAGE3_PATG44		0x2C		/*!< PATx Choice Register(PATG44)(x=132,133,134)*/
#define ADDR_REG_PAGE3_PATG45		0x2D		/*!< PATx Choice Register(PATG45)(x=135,136,137)*/
#define ADDR_REG_PAGE3_PATG46		0x2E		/*!< PATx Choice Register(PATG46)(x=138,139,140)*/
#define ADDR_REG_PAGE3_PATG47		0x2F		/*!< PATx Choice Register(PATG47)(x=141,142,143)*/
#define ADDR_REG_PAGE3_PATG48		0x30		/*!< PATx Choice Register(PATG48)(x=144,145,146)*/
#define ADDR_REG_PAGE3_PATG49		0x31		/*!< PATx Choice Register(PATG49)(x=147,148,149)*/
#define ADDR_REG_PAGE3_PATG50		0x32		/*!< PATx Choice Register(PATG50)(x=150,151,152)*/
#define ADDR_REG_PAGE3_PATG51		0x33		/*!< PATx Choice Register(PATG51)(x=153,154,155)*/
#define ADDR_REG_PAGE3_PATG52		0x34		/*!< PATx Choice Register(PATG52)(x=156,157,158)*/
#define ADDR_REG_PAGE3_PATG53		0x35		/*!< PATx Choice Register(PATG53)(x=159,160,161)*/
#define ADDR_REG_PAGE3_PATG54		0x36		/*!< PATx Choice Register(PATG54)(x=162,163,164)*/
#define ADDR_REG_PAGE3_PATG55		0x37		/*!< PATx Choice Register(PATG55)(x=165,166,167)*/
#define ADDR_REG_PAGE3_PATG56		0x38		/*!< PATx Choice Register(PATG56)(x=168,169,170)*/
#define ADDR_REG_PAGE3_PATG57		0x39		/*!< PATx Choice Register(PATG57)(x=171,172,173)*/
#define ADDR_REG_PAGE3_PATG58		0x3A		/*!< PATx Choice Register(PATG58)(x=174,175,176)*/
#define ADDR_REG_PAGE3_PATG59		0x3B		/*!< PATx Choice Register(PATG59)(x=177,178,179)*/
#define ADDR_REG_PAGE3_PATG60		0x3C		/*!< PATx Choice Register(PATG60)(x=180,181,182)*/
#define ADDR_REG_PAGE3_PATG61		0x3D		/*!< PATx Choice Register(PATG61)(x=183,184,185)*/
#define ADDR_REG_PAGE3_PATG62		0x3E		/*!< PATx Choice Register(PATG62)(x=186,187,188)*/
#define ADDR_REG_PAGE3_PATG63		0x3F		/*!< PATx Choice Register(PATG63)(x=189,190,191)*/
#define ADDR_REG_PAGE3_PATG64		0x40		/*!< PATx Choice Register(PATG64)(x=192,193,194)*/
#define ADDR_REG_PAGE3_PATG65		0x41		/*!< PATx Choice Register(PATG65)(x=195,196,197)*/
#define ADDR_REG_PAGE3_PAGE			0xF0		/*!< Page register								*/
/*!<--------------------------------------------------------------------------------------------*/
#define ADDR_REG_PAGE4_PWM0_SL0		0x00		/*!< PWMx+SLx Register(x=0)						*/
#define ADDR_REG_PAGE4_PWM1_SL1		0x01		/*!< PWMx+SLx Register(x=1)						*/
#define ADDR_REG_PAGE4_PWM2_SL2		0x02		/*!< PWMx+SLx Register(x=2)						*/
#define ADDR_REG_PAGE4_PWM3_SL3		0x03		/*!< PWMx+SLx Register(x=3)						*/
#define ADDR_REG_PAGE4_PWM4_SL4		0x04		/*!< PWMx+SLx Register(x=4)						*/
#define ADDR_REG_PAGE4_PWM5_SL5		0x05		/*!< PWMx+SLx Register(x=5)						*/
#define ADDR_REG_PAGE4_PWM6_SL6		0x06		/*!< PWMx+SLx Register(x=6)						*/
#define ADDR_REG_PAGE4_PWM7_SL7		0x07		/*!< PWMx+SLx Register(x=7)						*/
#define ADDR_REG_PAGE4_PWM8_SL8		0x08		/*!< PWMx+SLx Register(x=8)						*/
#define ADDR_REG_PAGE4_PWM9_SL9		0x09		/*!< PWMx+SLx Register(x=9)						*/
#define ADDR_REG_PAGE4_PWM10_SL10	0x0A		/*!< PWMx+SLx Register(x=10)					*/
#define ADDR_REG_PAGE4_PWM11_SL11	0x0B		/*!< PWMx+SLx Register(x=11)					*/
#define ADDR_REG_PAGE4_PWM12_SL12	0x0C		/*!< PWMx+SLx Register(x=12)					*/
#define ADDR_REG_PAGE4_PWM13_SL13	0x0D		/*!< PWMx+SLx Register(x=13)					*/
#define ADDR_REG_PAGE4_PWM14_SL14	0x0E		/*!< PWMx+SLx Register(x=14)					*/
#define ADDR_REG_PAGE4_PWM15_SL15	0x0F		/*!< PWMx+SLx Register(x=15)					*/
#define ADDR_REG_PAGE4_PWM16_SL16	0x10		/*!< PWMx+SLx Register(x=16)					*/
#define ADDR_REG_PAGE4_PWM17_SL17	0x11		/*!< PWMx+SLx Register(x=17)					*/
#define ADDR_REG_PAGE4_PWM18_SL18	0x12		/*!< PWMx+SLx Register(x=18)					*/
#define ADDR_REG_PAGE4_PWM19_SL19	0x13		/*!< PWMx+SLx Register(x=19)					*/
#define ADDR_REG_PAGE4_PWM20_SL20	0x14		/*!< PWMx+SLx Register(x=20)					*/
#define ADDR_REG_PAGE4_PWM21_SL21	0x15		/*!< PWMx+SLx Register(x=21)					*/
#define ADDR_REG_PAGE4_PWM22_SL22	0x16		/*!< PWMx+SLx Register(x=22)					*/
#define ADDR_REG_PAGE4_PWM23_SL23	0x17		/*!< PWMx+SLx Register(x=23)					*/
#define ADDR_REG_PAGE4_PWM24_SL24	0x18		/*!< PWMx+SLx Register(x=24)					*/
#define ADDR_REG_PAGE4_PWM25_SL25	0x19		/*!< PWMx+SLx Register(x=25)					*/
#define ADDR_REG_PAGE4_PWM26_SL26	0x1A		/*!< PWMx+SLx Register(x=26)					*/
#define ADDR_REG_PAGE4_PWM27_SL27	0x1B		/*!< PWMx+SLx Register(x=27)					*/
#define ADDR_REG_PAGE4_PWM28_SL28	0x1C		/*!< PWMx+SLx Register(x=28)					*/
#define ADDR_REG_PAGE4_PWM29_SL29	0x1D		/*!< PWMx+SLx Register(x=29)					*/
#define ADDR_REG_PAGE4_PWM30_SL30	0x1E		/*!< PWMx+SLx Register(x=30)					*/
#define ADDR_REG_PAGE4_PWM31_SL31	0x1F		/*!< PWMx+SLx Register(x=31)					*/
#define ADDR_REG_PAGE4_PWM32_SL32	0x20		/*!< PWMx+SLx Register(x=32)					*/
#define ADDR_REG_PAGE4_PWM33_SL33	0x21		/*!< PWMx+SLx Register(x=33)					*/
#define ADDR_REG_PAGE4_PWM34_SL34	0x22		/*!< PWMx+SLx Register(x=34)					*/
#define ADDR_REG_PAGE4_PWM35_SL35	0x23		/*!< PWMx+SLx Register(x=35)					*/
#define ADDR_REG_PAGE4_PWM36_SL36	0x24		/*!< PWMx+SLx Register(x=36)					*/
#define ADDR_REG_PAGE4_PWM37_SL37	0x25		/*!< PWMx+SLx Register(x=37)					*/
#define ADDR_REG_PAGE4_PWM38_SL38	0x26		/*!< PWMx+SLx Register(x=38)					*/
#define ADDR_REG_PAGE4_PWM39_SL39	0x27		/*!< PWMx+SLx Register(x=39)					*/
#define ADDR_REG_PAGE4_PWM40_SL40	0x28		/*!< PWMx+SLx Register(x=40)					*/
#define ADDR_REG_PAGE4_PWM41_SL41	0x29		/*!< PWMx+SLx Register(x=41)					*/
#define ADDR_REG_PAGE4_PWM42_SL42	0x2A		/*!< PWMx+SLx Register(x=42)					*/
#define ADDR_REG_PAGE4_PWM43_SL43	0x2B		/*!< PWMx+SLx Register(x=43)					*/
#define ADDR_REG_PAGE4_PWM44_SL44	0x2C		/*!< PWMx+SLx Register(x=44)					*/
#define ADDR_REG_PAGE4_PWM45_SL45	0x2D		/*!< PWMx+SLx Register(x=45)					*/
#define ADDR_REG_PAGE4_PWM46_SL46	0x2E		/*!< PWMx+SLx Register(x=46)					*/
#define ADDR_REG_PAGE4_PWM47_SL47	0x2F		/*!< PWMx+SLx Register(x=47)					*/
#define ADDR_REG_PAGE4_PWM48_SL48	0x30		/*!< PWMx+SLx Register(x=48)					*/
#define ADDR_REG_PAGE4_PWM49_SL49	0x31		/*!< PWMx+SLx Register(x=49)					*/
#define ADDR_REG_PAGE4_PWM50_SL50	0x32		/*!< PWMx+SLx Register(x=50)					*/
#define ADDR_REG_PAGE4_PWM51_SL51	0x33		/*!< PWMx+SLx Register(x=51)					*/
#define ADDR_REG_PAGE4_PWM52_SL52	0x34		/*!< PWMx+SLx Register(x=52)					*/
#define ADDR_REG_PAGE4_PWM53_SL53	0x35		/*!< PWMx+SLx Register(x=53)					*/
#define ADDR_REG_PAGE4_PWM54_SL54	0x36		/*!< PWMx+SLx Register(x=54)					*/
#define ADDR_REG_PAGE4_PWM55_SL55	0x37		/*!< PWMx+SLx Register(x=55)					*/
#define ADDR_REG_PAGE4_PWM56_SL56	0x38		/*!< PWMx+SLx Register(x=56)					*/
#define ADDR_REG_PAGE4_PWM57_SL57	0x39		/*!< PWMx+SLx Register(x=57)					*/
#define ADDR_REG_PAGE4_PWM58_SL58	0x3A		/*!< PWMx+SLx Register(x=58)					*/
#define ADDR_REG_PAGE4_PWM59_SL59	0x3B		/*!< PWMx+SLx Register(x=59)					*/
#define ADDR_REG_PAGE4_PWM60_SL60	0x3C		/*!< PWMx+SLx Register(x=60)					*/
#define ADDR_REG_PAGE4_PWM61_SL61	0x3D		/*!< PWMx+SLx Register(x=61)					*/
#define ADDR_REG_PAGE4_PWM62_SL62	0x3E		/*!< PWMx+SLx Register(x=62)					*/
#define ADDR_REG_PAGE4_PWM63_SL63	0x3F		/*!< PWMx+SLx Register(x=63)					*/
#define ADDR_REG_PAGE4_PWM64_SL64	0x40		/*!< PWMx+SLx Register(x=64)					*/
#define ADDR_REG_PAGE4_PWM65_SL65	0x41		/*!< PWMx+SLx Register(x=65)					*/
#define ADDR_REG_PAGE4_PWM66_SL66	0x42		/*!< PWMx+SLx Register(x=66)					*/
#define ADDR_REG_PAGE4_PWM67_SL67	0x43		/*!< PWMx+SLx Register(x=67)					*/
#define ADDR_REG_PAGE4_PWM68_SL68	0x44		/*!< PWMx+SLx Register(x=68)					*/
#define ADDR_REG_PAGE4_PWM69_SL69	0x45		/*!< PWMx+SLx Register(x=69)					*/
#define ADDR_REG_PAGE4_PWM70_SL70	0x46		/*!< PWMx+SLx Register(x=70)					*/
#define ADDR_REG_PAGE4_PWM71_SL71	0x47		/*!< PWMx+SLx Register(x=71)					*/
#define ADDR_REG_PAGE4_PWM72_SL72	0x48		/*!< PWMx+SLx Register(x=72)					*/
#define ADDR_REG_PAGE4_PWM73_SL73	0x49		/*!< PWMx+SLx Register(x=73)					*/
#define ADDR_REG_PAGE4_PWM74_SL74	0x4A		/*!< PWMx+SLx Register(x=74)					*/
#define ADDR_REG_PAGE4_PWM75_SL75	0x4B		/*!< PWMx+SLx Register(x=75)					*/
#define ADDR_REG_PAGE4_PWM76_SL76	0x4C		/*!< PWMx+SLx Register(x=76)					*/
#define ADDR_REG_PAGE4_PWM77_SL77	0x4D		/*!< PWMx+SLx Register(x=77)					*/
#define ADDR_REG_PAGE4_PWM78_SL78	0x4E		/*!< PWMx+SLx Register(x=78)					*/
#define ADDR_REG_PAGE4_PWM79_SL79	0x4F		/*!< PWMx+SLx Register(x=79)					*/
#define ADDR_REG_PAGE4_PWM80_SL80	0x50		/*!< PWMx+SLx Register(x=80)					*/
#define ADDR_REG_PAGE4_PWM81_SL81	0x51		/*!< PWMx+SLx Register(x=81)					*/
#define ADDR_REG_PAGE4_PWM82_SL82	0x52		/*!< PWMx+SLx Register(x=82)					*/
#define ADDR_REG_PAGE4_PWM83_SL83	0x53		/*!< PWMx+SLx Register(x=83)					*/
#define ADDR_REG_PAGE4_PWM84_SL84	0x54		/*!< PWMx+SLx Register(x=84)					*/
#define ADDR_REG_PAGE4_PWM85_SL85	0x55		/*!< PWMx+SLx Register(x=85)					*/
#define ADDR_REG_PAGE4_PWM86_SL86	0x56		/*!< PWMx+SLx Register(x=86)					*/
#define ADDR_REG_PAGE4_PWM87_SL87	0x57		/*!< PWMx+SLx Register(x=87)					*/
#define ADDR_REG_PAGE4_PWM88_SL88	0x58		/*!< PWMx+SLx Register(x=88)					*/
#define ADDR_REG_PAGE4_PWM89_SL89	0x59		/*!< PWMx+SLx Register(x=89)					*/
#define ADDR_REG_PAGE4_PWM90_SL90	0x5A		/*!< PWMx+SLx Register(x=90)					*/
#define ADDR_REG_PAGE4_PWM91_SL91	0x5B		/*!< PWMx+SLx Register(x=91)					*/
#define ADDR_REG_PAGE4_PWM92_SL92	0x5C		/*!< PWMx+SLx Register(x=92)					*/
#define ADDR_REG_PAGE4_PWM93_SL93	0x5D		/*!< PWMx+SLx Register(x=93)					*/
#define ADDR_REG_PAGE4_PWM94_SL94	0x5E		/*!< PWMx+SLx Register(x=94)					*/
#define ADDR_REG_PAGE4_PWM95_SL95	0x5F		/*!< PWMx+SLx Register(x=95)					*/
#define ADDR_REG_PAGE4_PWM96_SL96	0x60		/*!< PWMx+SLx Register(x=96)					*/
#define ADDR_REG_PAGE4_PWM97_SL97	0x61		/*!< PWMx+SLx Register(x=97)					*/
#define ADDR_REG_PAGE4_PWM98_SL98	0x62		/*!< PWMx+SLx Register(x=98)					*/
#define ADDR_REG_PAGE4_PWM99_SL99	0x63		/*!< PWMx+SLx Register(x=99)					*/
#define ADDR_REG_PAGE4_PWM100_SL100	0x64		/*!< PWMx+SLx Register(x=100)					*/
#define ADDR_REG_PAGE4_PWM101_SL101	0x65		/*!< PWMx+SLx Register(x=101)					*/
#define ADDR_REG_PAGE4_PWM102_SL102	0x66		/*!< PWMx+SLx Register(x=102)					*/
#define ADDR_REG_PAGE4_PWM103_SL103	0x67		/*!< PWMx+SLx Register(x=103)					*/
#define ADDR_REG_PAGE4_PWM104_SL104	0x68		/*!< PWMx+SLx Register(x=104)					*/
#define ADDR_REG_PAGE4_PWM105_SL105	0x69		/*!< PWMx+SLx Register(x=105)					*/
#define ADDR_REG_PAGE4_PWM106_SL106	0x6A		/*!< PWMx+SLx Register(x=106)					*/
#define ADDR_REG_PAGE4_PWM107_SL107	0x6B		/*!< PWMx+SLx Register(x=107)					*/
#define ADDR_REG_PAGE4_PWM108_SL108	0x6C		/*!< PWMx+SLx Register(x=108)					*/
#define ADDR_REG_PAGE4_PWM109_SL109	0x6D		/*!< PWMx+SLx Register(x=109)					*/
#define ADDR_REG_PAGE4_PWM110_SL110	0x6E		/*!< PWMx+SLx Register(x=110)					*/
#define ADDR_REG_PAGE4_PWM111_SL111	0x6F		/*!< PWMx+SLx Register(x=111)					*/
#define ADDR_REG_PAGE4_PWM112_SL112	0x70		/*!< PWMx+SLx Register(x=112)					*/
#define ADDR_REG_PAGE4_PWM113_SL113	0x71		/*!< PWMx+SLx Register(x=113)					*/
#define ADDR_REG_PAGE4_PWM114_SL114	0x72		/*!< PWMx+SLx Register(x=114)					*/
#define ADDR_REG_PAGE4_PWM115_SL115	0x73		/*!< PWMx+SLx Register(x=115)					*/
#define ADDR_REG_PAGE4_PWM116_SL116	0x74		/*!< PWMx+SLx Register(x=116)					*/
#define ADDR_REG_PAGE4_PWM117_SL117	0x75		/*!< PWMx+SLx Register(x=117)					*/
#define ADDR_REG_PAGE4_PWM118_SL118	0x76		/*!< PWMx+SLx Register(x=118)					*/
#define ADDR_REG_PAGE4_PWM119_SL119	0x77		/*!< PWMx+SLx Register(x=119)					*/
#define ADDR_REG_PAGE4_PWM120_SL120	0x78		/*!< PWMx+SLx Register(x=120)					*/
#define ADDR_REG_PAGE4_PWM121_SL121	0x79		/*!< PWMx+SLx Register(x=121)					*/
#define ADDR_REG_PAGE4_PWM122_SL122	0x7A		/*!< PWMx+SLx Register(x=122)					*/
#define ADDR_REG_PAGE4_PWM123_SL123	0x7B		/*!< PWMx+SLx Register(x=123)					*/
#define ADDR_REG_PAGE4_PWM124_SL124	0x7C		/*!< PWMx+SLx Register(x=124)					*/
#define ADDR_REG_PAGE4_PWM125_SL125	0x7D		/*!< PWMx+SLx Register(x=125)					*/
#define ADDR_REG_PAGE4_PWM126_SL126	0x7E		/*!< PWMx+SLx Register(x=126)					*/
#define ADDR_REG_PAGE4_PWM127_SL127	0x7F		/*!< PWMx+SLx Register(x=127)					*/
#define ADDR_REG_PAGE4_PWM128_SL128	0x80		/*!< PWMx+SLx Register(x=128)					*/
#define ADDR_REG_PAGE4_PWM129_SL129	0x81		/*!< PWMx+SLx Register(x=129)					*/
#define ADDR_REG_PAGE4_PWM130_SL130	0x82		/*!< PWMx+SLx Register(x=130)					*/
#define ADDR_REG_PAGE4_PWM131_SL131	0x83		/*!< PWMx+SLx Register(x=131)					*/
#define ADDR_REG_PAGE4_PWM132_SL132	0x84		/*!< PWMx+SLx Register(x=132)					*/
#define ADDR_REG_PAGE4_PWM133_SL133	0x85		/*!< PWMx+SLx Register(x=133)					*/
#define ADDR_REG_PAGE4_PWM134_SL134	0x86		/*!< PWMx+SLx Register(x=134)					*/
#define ADDR_REG_PAGE4_PWM135_SL135	0x87		/*!< PWMx+SLx Register(x=135)					*/
#define ADDR_REG_PAGE4_PWM136_SL136	0x88		/*!< PWMx+SLx Register(x=136)					*/
#define ADDR_REG_PAGE4_PWM137_SL137	0x89		/*!< PWMx+SLx Register(x=137)					*/
#define ADDR_REG_PAGE4_PWM138_SL138	0x8A		/*!< PWMx+SLx Register(x=138)					*/
#define ADDR_REG_PAGE4_PWM139_SL139	0x8B		/*!< PWMx+SLx Register(x=139)					*/
#define ADDR_REG_PAGE4_PWM140_SL140	0x8C		/*!< PWMx+SLx Register(x=140)					*/
#define ADDR_REG_PAGE4_PWM141_SL141	0x8D		/*!< PWMx+SLx Register(x=141)					*/
#define ADDR_REG_PAGE4_PWM142_SL142	0x8E		/*!< PWMx+SLx Register(x=142)					*/
#define ADDR_REG_PAGE4_PWM143_SL143	0x8F		/*!< PWMx+SLx Register(x=143)					*/
#define ADDR_REG_PAGE4_PWM144_SL144	0x90		/*!< PWMx+SLx Register(x=144)					*/
#define ADDR_REG_PAGE4_PWM145_SL145	0x91		/*!< PWMx+SLx Register(x=145)					*/
#define ADDR_REG_PAGE4_PWM146_SL146	0x92		/*!< PWMx+SLx Register(x=146)					*/
#define ADDR_REG_PAGE4_PWM147_SL147	0x93		/*!< PWMx+SLx Register(x=147)					*/
#define ADDR_REG_PAGE4_PWM148_SL148	0x94		/*!< PWMx+SLx Register(x=148)					*/
#define ADDR_REG_PAGE4_PWM149_SL149	0x95		/*!< PWMx+SLx Register(x=149)					*/
#define ADDR_REG_PAGE4_PWM150_SL150	0x96		/*!< PWMx+SLx Register(x=150)					*/
#define ADDR_REG_PAGE4_PWM151_SL151	0x97		/*!< PWMx+SLx Register(x=151)					*/
#define ADDR_REG_PAGE4_PWM152_SL152	0x98		/*!< PWMx+SLx Register(x=152)					*/
#define ADDR_REG_PAGE4_PWM153_SL153	0x99		/*!< PWMx+SLx Register(x=153)					*/
#define ADDR_REG_PAGE4_PWM154_SL154	0x9A		/*!< PWMx+SLx Register(x=154)					*/
#define ADDR_REG_PAGE4_PWM155_SL155	0x9B		/*!< PWMx+SLx Register(x=155)					*/
#define ADDR_REG_PAGE4_PWM156_SL156	0x9C		/*!< PWMx+SLx Register(x=156)					*/
#define ADDR_REG_PAGE4_PWM157_SL157	0x9D		/*!< PWMx+SLx Register(x=157)					*/
#define ADDR_REG_PAGE4_PWM158_SL158	0x9E		/*!< PWMx+SLx Register(x=158)					*/
#define ADDR_REG_PAGE4_PWM159_SL159	0x9F		/*!< PWMx+SLx Register(x=159)					*/
#define ADDR_REG_PAGE4_PWM160_SL160	0xA0		/*!< PWMx+SLx Register(x=160)					*/
#define ADDR_REG_PAGE4_PWM161_SL161	0xA1		/*!< PWMx+SLx Register(x=161)					*/
#define ADDR_REG_PAGE4_PWM162_SL162	0xA2		/*!< PWMx+SLx Register(x=162)					*/
#define ADDR_REG_PAGE4_PWM163_SL163	0xA3		/*!< PWMx+SLx Register(x=163)					*/
#define ADDR_REG_PAGE4_PWM164_SL164	0xA4		/*!< PWMx+SLx Register(x=164)					*/
#define ADDR_REG_PAGE4_PWM165_SL165	0xA5		/*!< PWMx+SLx Register(x=165)					*/
#define ADDR_REG_PAGE4_PWM166_SL166	0xA6		/*!< PWMx+SLx Register(x=166)					*/
#define ADDR_REG_PAGE4_PWM167_SL167	0xA7		/*!< PWMx+SLx Register(x=167)					*/
#define ADDR_REG_PAGE4_PWM168_SL168	0xA8		/*!< PWMx+SLx Register(x=168)					*/
#define ADDR_REG_PAGE4_PWM169_SL169	0xA9		/*!< PWMx+SLx Register(x=169)					*/
#define ADDR_REG_PAGE4_PWM170_SL170	0xAA		/*!< PWMx+SLx Register(x=170)					*/
#define ADDR_REG_PAGE4_PWM171_SL171	0xAB		/*!< PWMx+SLx Register(x=171)					*/
#define ADDR_REG_PAGE4_PWM172_SL172	0xAC		/*!< PWMx+SLx Register(x=172)					*/
#define ADDR_REG_PAGE4_PWM173_SL173	0xAD		/*!< PWMx+SLx Register(x=173)					*/
#define ADDR_REG_PAGE4_PWM174_SL174	0xAE		/*!< PWMx+SLx Register(x=174)					*/
#define ADDR_REG_PAGE4_PWM175_SL175	0xAF		/*!< PWMx+SLx Register(x=175)					*/
#define ADDR_REG_PAGE4_PWM176_SL176	0xB0		/*!< PWMx+SLx Register(x=176)					*/
#define ADDR_REG_PAGE4_PWM177_SL177	0xB1		/*!< PWMx+SLx Register(x=177)					*/
#define ADDR_REG_PAGE4_PWM178_SL178	0xB2		/*!< PWMx+SLx Register(x=178)					*/
#define ADDR_REG_PAGE4_PWM179_SL179	0xB3		/*!< PWMx+SLx Register(x=179)					*/
#define ADDR_REG_PAGE4_PWM180_SL180	0xB4		/*!< PWMx+SLx Register(x=180)					*/
#define ADDR_REG_PAGE4_PWM181_SL181	0xB5		/*!< PWMx+SLx Register(x=181)					*/
#define ADDR_REG_PAGE4_PWM182_SL182	0xB6		/*!< PWMx+SLx Register(x=182)					*/
#define ADDR_REG_PAGE4_PWM183_SL183	0xB7		/*!< PWMx+SLx Register(x=183)					*/
#define ADDR_REG_PAGE4_PWM184_SL184	0xB8		/*!< PWMx+SLx Register(x=184)					*/
#define ADDR_REG_PAGE4_PWM185_SL185	0xB9		/*!< PWMx+SLx Register(x=185)					*/
#define ADDR_REG_PAGE4_PWM186_SL186	0xBA		/*!< PWMx+SLx Register(x=186)					*/
#define ADDR_REG_PAGE4_PWM187_SL187	0xBB		/*!< PWMx+SLx Register(x=187)					*/
#define ADDR_REG_PAGE4_PWM188_SL188	0xBC		/*!< PWMx+SLx Register(x=188)					*/
#define ADDR_REG_PAGE4_PWM189_SL189	0xBD		/*!< PWMx+SLx Register(x=189)					*/
#define ADDR_REG_PAGE4_PWM190_SL190	0xBE		/*!< PWMx+SLx Register(x=190)					*/
#define ADDR_REG_PAGE4_PWM191_SL191	0xBF		/*!< PWMx+SLx Register(x=191)					*/
#define ADDR_REG_PAGE4_PWM192_SL192	0xC0		/*!< PWMx+SLx Register(x=192)					*/
#define ADDR_REG_PAGE4_PWM193_SL193	0xC1		/*!< PWMx+SLx Register(x=193)					*/
#define ADDR_REG_PAGE4_PWM194_SL194	0xC2		/*!< PWMx+SLx Register(x=194)					*/
#define ADDR_REG_PAGE4_PWM195_SL195	0xC3		/*!< PWMx+SLx Register(x=195)					*/
#define ADDR_REG_PAGE4_PWM196_SL196	0xC4		/*!< PWMx+SLx Register(x=196)					*/
#define ADDR_REG_PAGE4_PWM197_SL197	0xC5		/*!< PWMx+SLx Register(x=197)					*/
#define ADDR_REG_PAGE4_PAGE			0xF0		/*!< Page register								*/
/*!<--------------------------------------------------------------------------------------------*/

#endif
