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

#endif
