#include "drv_leds_aw20198.h"

/*!<*/
void aw20198_switchpage(uint8_t page)
{
	aw20198_iic_setbyte(ADDR_DEV_AW20198, ADDR_REG_PAGE, VAL_REG_PAGE(page));
}
