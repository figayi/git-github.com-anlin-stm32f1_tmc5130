#ifndef __USER__
#define __USER__

#include <includes.h>
#include "bsp_usart1.h"
#include "bsp_led.h"
#include "bsp_spi_flash.h"


#define ENABLE_H()  GPIO_ResetBits(GPIOC,H_EN)  //ˮƽ����ر�
#define DISABLE_H()  GPIO_SetBits(GPIOC,H_EN)//ˮƽ���ʹ��






void user_task(void *pdata);



#endif

