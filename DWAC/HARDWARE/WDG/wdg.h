#ifndef __WDG_H
#define __WDG_H
#include "sys.h"
//////////////////////////////////////////////////////////////////////////////////	 
						  
////////////////////////////////////////////////////////////////////////////////// 


void IWDG_Init(uint8 prer,uint16 rlr);
void IWDG_Feed(void);

#endif
