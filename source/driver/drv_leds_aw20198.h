#ifndef __DRV_LEDS_AW20198_H__
#define __DRV_LEDS_AW20198_H__

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

#define ADDR_REG_PAGE1_PWM0			0x00		/*!< PWM Configure Register(PWM0)				*/
#define ADDR_REG_PAGE1_PWM1			0x01		/*!< PWM Configure Register(PWM1)				*/
#define ADDR_REG_PAGE1_PWM2			0x02		/*!< PWM Configure Register(PWM2)				*/
#define ADDR_REG_PAGE1_PWM3			0x03		/*!< PWM Configure Register(PWM3)				*/
#define ADDR_REG_PAGE1_PWM4			0x04		/*!< PWM Configure Register(PWM4)				*/
#define ADDR_REG_PAGE1_PWM5			0x05		/*!< PWM Configure Register(PWM5)				*/
#define ADDR_REG_PAGE1_PWM6			0x06		/*!< PWM Configure Register(PWM6)				*/
#define ADDR_REG_PAGE1_PWM7			0x07		/*!< PWM Configure Register(PWM7)				*/
#define ADDR_REG_PAGE1_PWM8			0x08		/*!< PWM Configure Register(PWM8)				*/
#define ADDR_REG_PAGE1_PWM9			0x09		/*!< PWM Configure Register(PWM9)				*/
#define ADDR_REG_PAGE1_PWM10		0x0A		/*!< PWM Configure Register(PWM10)				*/
#define ADDR_REG_PAGE1_PWM11		0x0B		/*!< PWM Configure Register(PWM11)				*/
#define ADDR_REG_PAGE1_PWM12		0x0C		/*!< PWM Configure Register(PWM12)				*/
#define ADDR_REG_PAGE1_PWM13		0x0D		/*!< PWM Configure Register(PWM13)				*/
#define ADDR_REG_PAGE1_PWM14		0x0E		/*!< PWM Configure Register(PWM14)				*/
#define ADDR_REG_PAGE1_PWM15		0x0F		/*!< PWM Configure Register(PWM15)				*/
#define ADDR_REG_PAGE1_PWM16		0x10		/*!< PWM Configure Register(PWM16)				*/
#define ADDR_REG_PAGE1_PWM17		0x11		/*!< PWM Configure Register(PWM17)				*/
#define ADDR_REG_PAGE1_PWM18		0x12		/*!< PWM Configure Register(PWM18)				*/
#define ADDR_REG_PAGE1_PWM19		0x13		/*!< PWM Configure Register(PWM19)				*/
#define ADDR_REG_PAGE1_PWM20		0x14		/*!< PWM Configure Register(PWM20)				*/
#define ADDR_REG_PAGE1_PWM21		0x15		/*!< PWM Configure Register(PWM21)				*/
#define ADDR_REG_PAGE1_PWM22		0x16		/*!< PWM Configure Register(PWM22)				*/
#define ADDR_REG_PAGE1_PWM23		0x17		/*!< PWM Configure Register(PWM23)				*/
#define ADDR_REG_PAGE1_PWM24		0x18		/*!< PWM Configure Register(PWM24)				*/
#define ADDR_REG_PAGE1_PWM25		0x19		/*!< PWM Configure Register(PWM25)				*/
#define ADDR_REG_PAGE1_PWM26		0x1A		/*!< PWM Configure Register(PWM26)				*/
#define ADDR_REG_PAGE1_PWM27		0x1B		/*!< PWM Configure Register(PWM27)				*/
#define ADDR_REG_PAGE1_PWM28		0x1C		/*!< PWM Configure Register(PWM28)				*/
#define ADDR_REG_PAGE1_PWM29		0x1D		/*!< PWM Configure Register(PWM29)				*/
#define ADDR_REG_PAGE1_PWM30		0x1E		/*!< PWM Configure Register(PWM30)				*/
#define ADDR_REG_PAGE1_PWM31		0x1F		/*!< PWM Configure Register(PWM31)				*/
#define ADDR_REG_PAGE1_PWM32		0x20		/*!< PWM Configure Register(PWM32)				*/
#define ADDR_REG_PAGE1_PWM33		0x21		/*!< PWM Configure Register(PWM33)				*/
#define ADDR_REG_PAGE1_PWM34		0x22		/*!< PWM Configure Register(PWM34)				*/
#define ADDR_REG_PAGE1_PWM35		0x23		/*!< PWM Configure Register(PWM35)				*/
#define ADDR_REG_PAGE1_PWM36		0x24		/*!< PWM Configure Register(PWM36)				*/
#define ADDR_REG_PAGE1_PWM37		0x25		/*!< PWM Configure Register(PWM37)				*/
#define ADDR_REG_PAGE1_PWM38		0x26		/*!< PWM Configure Register(PWM38)				*/
#define ADDR_REG_PAGE1_PWM39		0x27		/*!< PWM Configure Register(PWM39)				*/
#define ADDR_REG_PAGE1_PWM40		0x28		/*!< PWM Configure Register(PWM40)				*/
#define ADDR_REG_PAGE1_PWM41		0x29		/*!< PWM Configure Register(PWM41)				*/
#define ADDR_REG_PAGE1_PWM42		0x2A		/*!< PWM Configure Register(PWM42)				*/
#define ADDR_REG_PAGE1_PWM43		0x2B		/*!< PWM Configure Register(PWM43)				*/
#define ADDR_REG_PAGE1_PWM44		0x2C		/*!< PWM Configure Register(PWM44)				*/
#define ADDR_REG_PAGE1_PWM45		0x2D		/*!< PWM Configure Register(PWM45)				*/
#define ADDR_REG_PAGE1_PWM46		0x2E		/*!< PWM Configure Register(PWM46)				*/
#define ADDR_REG_PAGE1_PWM47		0x2F		/*!< PWM Configure Register(PWM47)				*/
#define ADDR_REG_PAGE1_PWM48		0x30		/*!< PWM Configure Register(PWM48)				*/
#define ADDR_REG_PAGE1_PWM49		0x31		/*!< PWM Configure Register(PWM49)				*/
#define ADDR_REG_PAGE1_PWM50		0x32		/*!< PWM Configure Register(PWM50)				*/
#define ADDR_REG_PAGE1_PWM51		0x33		/*!< PWM Configure Register(PWM51)				*/
#define ADDR_REG_PAGE1_PWM52		0x34		/*!< PWM Configure Register(PWM52)				*/
#define ADDR_REG_PAGE1_PWM53		0x35		/*!< PWM Configure Register(PWM53)				*/
#define ADDR_REG_PAGE1_PWM54		0x36		/*!< PWM Configure Register(PWM54)				*/
#define ADDR_REG_PAGE1_PWM55		0x37		/*!< PWM Configure Register(PWM55)				*/
#define ADDR_REG_PAGE1_PWM56		0x38		/*!< PWM Configure Register(PWM56)				*/
#define ADDR_REG_PAGE1_PWM57		0x39		/*!< PWM Configure Register(PWM57)				*/
#define ADDR_REG_PAGE1_PWM58		0x3A		/*!< PWM Configure Register(PWM58)				*/
#define ADDR_REG_PAGE1_PWM59		0x3B		/*!< PWM Configure Register(PWM59)				*/
#define ADDR_REG_PAGE1_PWM60		0x3C		/*!< PWM Configure Register(PWM60)				*/
#define ADDR_REG_PAGE1_PWM61		0x3D		/*!< PWM Configure Register(PWM61)				*/
#define ADDR_REG_PAGE1_PWM62		0x3E		/*!< PWM Configure Register(PWM62)				*/
#define ADDR_REG_PAGE1_PWM63		0x3F		/*!< PWM Configure Register(PWM63)				*/
#define ADDR_REG_PAGE1_PWM64		0x40		/*!< PWM Configure Register(PWM64)				*/
#define ADDR_REG_PAGE1_PWM65		0x41		/*!< PWM Configure Register(PWM65)				*/
#define ADDR_REG_PAGE1_PWM66		0x42		/*!< PWM Configure Register(PWM66)				*/
#define ADDR_REG_PAGE1_PWM67		0x43		/*!< PWM Configure Register(PWM67)				*/
#define ADDR_REG_PAGE1_PWM68		0x44		/*!< PWM Configure Register(PWM68)				*/
#define ADDR_REG_PAGE1_PWM69		0x45		/*!< PWM Configure Register(PWM69)				*/
#define ADDR_REG_PAGE1_PWM70		0x46		/*!< PWM Configure Register(PWM70)				*/
#define ADDR_REG_PAGE1_PWM71		0x47		/*!< PWM Configure Register(PWM71)				*/
#define ADDR_REG_PAGE1_PWM72		0x48		/*!< PWM Configure Register(PWM72)				*/
#define ADDR_REG_PAGE1_PWM73		0x49		/*!< PWM Configure Register(PWM73)				*/
#define ADDR_REG_PAGE1_PWM74		0x4A		/*!< PWM Configure Register(PWM74)				*/
#define ADDR_REG_PAGE1_PWM75		0x4B		/*!< PWM Configure Register(PWM75)				*/
#define ADDR_REG_PAGE1_PWM76		0x4C		/*!< PWM Configure Register(PWM76)				*/
#define ADDR_REG_PAGE1_PWM77		0x4D		/*!< PWM Configure Register(PWM77)				*/
#define ADDR_REG_PAGE1_PWM78		0x4E		/*!< PWM Configure Register(PWM78)				*/
#define ADDR_REG_PAGE1_PWM79		0x4F		/*!< PWM Configure Register(PWM79)				*/
#define ADDR_REG_PAGE1_PWM80		0x50		/*!< PWM Configure Register(PWM80)				*/
#define ADDR_REG_PAGE1_PWM81		0x51		/*!< PWM Configure Register(PWM81)				*/
#define ADDR_REG_PAGE1_PWM82		0x52		/*!< PWM Configure Register(PWM82)				*/
#define ADDR_REG_PAGE1_PWM83		0x53		/*!< PWM Configure Register(PWM83)				*/
#define ADDR_REG_PAGE1_PWM84		0x54		/*!< PWM Configure Register(PWM84)				*/
#define ADDR_REG_PAGE1_PWM85		0x55		/*!< PWM Configure Register(PWM85)				*/
#define ADDR_REG_PAGE1_PWM86		0x56		/*!< PWM Configure Register(PWM86)				*/
#define ADDR_REG_PAGE1_PWM87		0x57		/*!< PWM Configure Register(PWM87)				*/
#define ADDR_REG_PAGE1_PWM88		0x58		/*!< PWM Configure Register(PWM88)				*/
#define ADDR_REG_PAGE1_PWM89		0x59		/*!< PWM Configure Register(PWM89)				*/
#define ADDR_REG_PAGE1_PWM90		0x5A		/*!< PWM Configure Register(PWM90)				*/
#define ADDR_REG_PAGE1_PWM91		0x5B		/*!< PWM Configure Register(PWM91)				*/
#define ADDR_REG_PAGE1_PWM92		0x5C		/*!< PWM Configure Register(PWM92)				*/
#define ADDR_REG_PAGE1_PWM93		0x5D		/*!< PWM Configure Register(PWM93)				*/
#define ADDR_REG_PAGE1_PWM94		0x5E		/*!< PWM Configure Register(PWM94)				*/
#define ADDR_REG_PAGE1_PWM95		0x5F		/*!< PWM Configure Register(PWM95)				*/
#define ADDR_REG_PAGE1_PWM96		0x60		/*!< PWM Configure Register(PWM96)				*/
#define ADDR_REG_PAGE1_PWM97		0x61		/*!< PWM Configure Register(PWM97)				*/
#define ADDR_REG_PAGE1_PWM98		0x62		/*!< PWM Configure Register(PWM98)				*/
#define ADDR_REG_PAGE1_PWM99		0x63		/*!< PWM Configure Register(PWM99)				*/
#define ADDR_REG_PAGE1_PWM100		0x64		/*!< PWM Configure Register(PWM100)				*/
#define ADDR_REG_PAGE1_PWM101		0x65		/*!< PWM Configure Register(PWM101)				*/
#define ADDR_REG_PAGE1_PWM102		0x66		/*!< PWM Configure Register(PWM102)				*/
#define ADDR_REG_PAGE1_PWM103		0x67		/*!< PWM Configure Register(PWM103)				*/
#define ADDR_REG_PAGE1_PWM104		0x68		/*!< PWM Configure Register(PWM104)				*/
#define ADDR_REG_PAGE1_PWM105		0x69		/*!< PWM Configure Register(PWM105)				*/
#define ADDR_REG_PAGE1_PWM106		0x6A		/*!< PWM Configure Register(PWM106)				*/
#define ADDR_REG_PAGE1_PWM107		0x6B		/*!< PWM Configure Register(PWM107)				*/
#define ADDR_REG_PAGE1_PWM108		0x6C		/*!< PWM Configure Register(PWM108)				*/
#define ADDR_REG_PAGE1_PWM109		0x6D		/*!< PWM Configure Register(PWM109)				*/
#define ADDR_REG_PAGE1_PWM110		0x6E		/*!< PWM Configure Register(PWM110)				*/
#define ADDR_REG_PAGE1_PWM111		0x6F		/*!< PWM Configure Register(PWM111)				*/
#define ADDR_REG_PAGE1_PWM112		0x70		/*!< PWM Configure Register(PWM112)				*/
#define ADDR_REG_PAGE1_PWM113		0x71		/*!< PWM Configure Register(PWM113)				*/
#define ADDR_REG_PAGE1_PWM114		0x72		/*!< PWM Configure Register(PWM114)				*/
#define ADDR_REG_PAGE1_PWM115		0x73		/*!< PWM Configure Register(PWM115)				*/
#define ADDR_REG_PAGE1_PWM116		0x74		/*!< PWM Configure Register(PWM116)				*/
#define ADDR_REG_PAGE1_PWM117		0x75		/*!< PWM Configure Register(PWM117)				*/
#define ADDR_REG_PAGE1_PWM118		0x76		/*!< PWM Configure Register(PWM118)				*/
#define ADDR_REG_PAGE1_PWM119		0x77		/*!< PWM Configure Register(PWM119)				*/
#define ADDR_REG_PAGE1_PWM120		0x78		/*!< PWM Configure Register(PWM120)				*/
#define ADDR_REG_PAGE1_PWM121		0x79		/*!< PWM Configure Register(PWM121)				*/
#define ADDR_REG_PAGE1_PWM122		0x7A		/*!< PWM Configure Register(PWM122)				*/
#define ADDR_REG_PAGE1_PWM123		0x7B		/*!< PWM Configure Register(PWM123)				*/
#define ADDR_REG_PAGE1_PWM124		0x7C		/*!< PWM Configure Register(PWM124)				*/
#define ADDR_REG_PAGE1_PWM125		0x7D		/*!< PWM Configure Register(PWM125)				*/
#define ADDR_REG_PAGE1_PWM126		0x7E		/*!< PWM Configure Register(PWM126)				*/
#define ADDR_REG_PAGE1_PWM127		0x7F		/*!< PWM Configure Register(PWM127)				*/
#define ADDR_REG_PAGE1_PWM128		0x80		/*!< PWM Configure Register(PWM128)				*/
#define ADDR_REG_PAGE1_PWM129		0x81		/*!< PWM Configure Register(PWM129)				*/
#define ADDR_REG_PAGE1_PWM130		0x82		/*!< PWM Configure Register(PWM130)				*/
#define ADDR_REG_PAGE1_PWM131		0x83		/*!< PWM Configure Register(PWM131)				*/
#define ADDR_REG_PAGE1_PWM132		0x84		/*!< PWM Configure Register(PWM132)				*/
#define ADDR_REG_PAGE1_PWM133		0x85		/*!< PWM Configure Register(PWM133)				*/
#define ADDR_REG_PAGE1_PWM134		0x86		/*!< PWM Configure Register(PWM134)				*/
#define ADDR_REG_PAGE1_PWM135		0x87		/*!< PWM Configure Register(PWM135)				*/
#define ADDR_REG_PAGE1_PWM136		0x88		/*!< PWM Configure Register(PWM136)				*/
#define ADDR_REG_PAGE1_PWM137		0x89		/*!< PWM Configure Register(PWM137)				*/
#define ADDR_REG_PAGE1_PWM138		0x8A		/*!< PWM Configure Register(PWM138)				*/
#define ADDR_REG_PAGE1_PWM139		0x8B		/*!< PWM Configure Register(PWM139)				*/
#define ADDR_REG_PAGE1_PWM140		0x8C		/*!< PWM Configure Register(PWM140)				*/
#define ADDR_REG_PAGE1_PWM141		0x8D		/*!< PWM Configure Register(PWM141)				*/
#define ADDR_REG_PAGE1_PWM142		0x8E		/*!< PWM Configure Register(PWM142)				*/
#define ADDR_REG_PAGE1_PWM143		0x8F		/*!< PWM Configure Register(PWM143)				*/
#define ADDR_REG_PAGE1_PWM144		0x90		/*!< PWM Configure Register(PWM144)				*/
#define ADDR_REG_PAGE1_PWM145		0x91		/*!< PWM Configure Register(PWM145)				*/
#define ADDR_REG_PAGE1_PWM146		0x92		/*!< PWM Configure Register(PWM146)				*/
#define ADDR_REG_PAGE1_PWM147		0x93		/*!< PWM Configure Register(PWM147)				*/
#define ADDR_REG_PAGE1_PWM148		0x94		/*!< PWM Configure Register(PWM148)				*/
#define ADDR_REG_PAGE1_PWM149		0x95		/*!< PWM Configure Register(PWM149)				*/
#define ADDR_REG_PAGE1_PWM150		0x96		/*!< PWM Configure Register(PWM150)				*/
#define ADDR_REG_PAGE1_PWM151		0x97		/*!< PWM Configure Register(PWM151)				*/
#define ADDR_REG_PAGE1_PWM152		0x98		/*!< PWM Configure Register(PWM152)				*/
#define ADDR_REG_PAGE1_PWM153		0x99		/*!< PWM Configure Register(PWM153)				*/
#define ADDR_REG_PAGE1_PWM154		0x9A		/*!< PWM Configure Register(PWM154)				*/
#define ADDR_REG_PAGE1_PWM155		0x9B		/*!< PWM Configure Register(PWM155)				*/
#define ADDR_REG_PAGE1_PWM156		0x9C		/*!< PWM Configure Register(PWM156)				*/
#define ADDR_REG_PAGE1_PWM157		0x9D		/*!< PWM Configure Register(PWM157)				*/
#define ADDR_REG_PAGE1_PWM158		0x9E		/*!< PWM Configure Register(PWM158)				*/
#define ADDR_REG_PAGE1_PWM159		0x9F		/*!< PWM Configure Register(PWM159)				*/
#define ADDR_REG_PAGE1_PWM160		0xA0		/*!< PWM Configure Register(PWM160)				*/
#define ADDR_REG_PAGE1_PWM161		0xA1		/*!< PWM Configure Register(PWM161)				*/
#define ADDR_REG_PAGE1_PWM162		0xA2		/*!< PWM Configure Register(PWM162)				*/
#define ADDR_REG_PAGE1_PWM163		0xA3		/*!< PWM Configure Register(PWM163)				*/
#define ADDR_REG_PAGE1_PWM164		0xA4		/*!< PWM Configure Register(PWM164)				*/
#define ADDR_REG_PAGE1_PWM165		0xA5		/*!< PWM Configure Register(PWM165)				*/
#define ADDR_REG_PAGE1_PWM166		0xA6		/*!< PWM Configure Register(PWM166)				*/
#define ADDR_REG_PAGE1_PWM167		0xA7		/*!< PWM Configure Register(PWM167)				*/
#define ADDR_REG_PAGE1_PWM168		0xA8		/*!< PWM Configure Register(PWM168)				*/
#define ADDR_REG_PAGE1_PWM169		0xA9		/*!< PWM Configure Register(PWM169)				*/
#define ADDR_REG_PAGE1_PWM170		0xAA		/*!< PWM Configure Register(PWM170)				*/
#define ADDR_REG_PAGE1_PWM171		0xAB		/*!< PWM Configure Register(PWM171)				*/
#define ADDR_REG_PAGE1_PWM172		0xAC		/*!< PWM Configure Register(PWM172)				*/
#define ADDR_REG_PAGE1_PWM173		0xAD		/*!< PWM Configure Register(PWM173)				*/
#define ADDR_REG_PAGE1_PWM174		0xAE		/*!< PWM Configure Register(PWM174)				*/
#define ADDR_REG_PAGE1_PWM175		0xAF		/*!< PWM Configure Register(PWM175)				*/
#define ADDR_REG_PAGE1_PWM176		0xB0		/*!< PWM Configure Register(PWM176)				*/
#define ADDR_REG_PAGE1_PWM177		0xB1		/*!< PWM Configure Register(PWM177)				*/
#define ADDR_REG_PAGE1_PWM178		0xB2		/*!< PWM Configure Register(PWM178)				*/
#define ADDR_REG_PAGE1_PWM179		0xB3		/*!< PWM Configure Register(PWM179)				*/
#define ADDR_REG_PAGE1_PWM180		0xB4		/*!< PWM Configure Register(PWM180)				*/
#define ADDR_REG_PAGE1_PWM181		0xB5		/*!< PWM Configure Register(PWM181)				*/
#define ADDR_REG_PAGE1_PWM182		0xB6		/*!< PWM Configure Register(PWM182)				*/
#define ADDR_REG_PAGE1_PWM183		0xB7		/*!< PWM Configure Register(PWM183)				*/
#define ADDR_REG_PAGE1_PWM184		0xB8		/*!< PWM Configure Register(PWM184)				*/
#define ADDR_REG_PAGE1_PWM185		0xB9		/*!< PWM Configure Register(PWM185)				*/
#define ADDR_REG_PAGE1_PWM186		0xBA		/*!< PWM Configure Register(PWM186)				*/
#define ADDR_REG_PAGE1_PWM187		0xBB		/*!< PWM Configure Register(PWM187)				*/
#define ADDR_REG_PAGE1_PWM188		0xBC		/*!< PWM Configure Register(PWM188)				*/
#define ADDR_REG_PAGE1_PWM189		0xBD		/*!< PWM Configure Register(PWM189)				*/
#define ADDR_REG_PAGE1_PWM190		0xBE		/*!< PWM Configure Register(PWM190)				*/
#define ADDR_REG_PAGE1_PWM191		0xBF		/*!< PWM Configure Register(PWM191)				*/
#define ADDR_REG_PAGE1_PWM192		0xC0		/*!< PWM Configure Register(PWM192)				*/
#define ADDR_REG_PAGE1_PWM193		0xC1		/*!< PWM Configure Register(PWM193)				*/
#define ADDR_REG_PAGE1_PWM194		0xC2		/*!< PWM Configure Register(PWM194)				*/
#define ADDR_REG_PAGE1_PWM195		0xC3		/*!< PWM Configure Register(PWM195)				*/
#define ADDR_REG_PAGE1_PWM196		0xC4		/*!< PWM Configure Register(PWM196)				*/
#define ADDR_REG_PAGE1_PWM197		0xC5		/*!< PWM Configure Register(PWM197)				*/
#define ADDR_REG_PAGE1_PAGE			0xF0		/*!< Page register								*/

#endif
