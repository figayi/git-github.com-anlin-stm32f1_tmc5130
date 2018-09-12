#ifndef __LED_H
#define	__LED_H

#include "stm32f10x.h"


//OUTPUT	
#define H_EN         GPIO_Pin_6        //PC6��ˮƽ���ʹ��
#define V_EN         GPIO_Pin_13        //PA13��ˮƽ���ʹ��



//INPUT
#define KEY_V_ZERO    GPIO_Pin_13   //PC13��������ֱ0λ
#define KEY_LD        GPIO_Pin_14  //PC14�������ֶ���ת
#define KEY_RU        GPIO_Pin_15  //PC15�������ֶ���ת

#define H_ZERO        GPIO_Pin_3   //PB3��ˮƽ0λ����
#define U_LMT         GPIO_Pin_4   //PB4���ϼ��޴���
#define D_LMT         GPIO_Pin_9   //PB9���¼��޴���
#define D_LMT_PRE     GPIO_Pin_8   //PB8���¼��޽ӽ�

#define H_INT        GPIO_Pin_5        //PC5��ˮƽ���ʹ��
#define V_INT        GPIO_Pin_14        //PA14��ˮƽ���ʹ��



void LED_GPIO_Config(void);
void GPIO_IO_Config(void);

#endif /* __LED_H */
