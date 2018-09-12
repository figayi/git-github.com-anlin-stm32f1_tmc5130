#include <math.h>
#include "HAL.h"
#include "ADCs.h"
#include "stm32f10x.h"
#include "IOMap.h"
#include "stm32f10x_adc.h"

#define ADC1_DR_ADDRESS  ((uint32)0x4001204C)

static void init(void);
static void deInit(void);

ADCTypeDef ADCs =
{
	.AIN0   = &ADCValue[0],
	.AIN1   = &ADCValue[1],
	.AIN2   = &ADCValue[2],
	.DIO4   = &ADCValue[3],
	.DIO5   = &ADCValue[4],
	.VM     = &ADCValue[5],
	.init   = init,
	.deInit  = deInit
};

void init(void)
{
	ADC_InitTypeDef ADC_InitStructure;
	DMA_InitTypeDef DMA_InitStructure;

	ADC_DeInit();

	/* Enable peripheral clocks *************************************************/
	RCC_AHBPeriphClockCmd(RCC_AHBPeriph_DMA1, ENABLE); 
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_ADC1, ENABLE);

	HAL.IOs->config->reset(&HAL.IOs->pins->AIN0);
	HAL.IOs->config->reset(&HAL.IOs->pins->AIN1);
	HAL.IOs->config->reset(&HAL.IOs->pins->AIN2);
	HAL.IOs->config->reset(&HAL.IOs->pins->VM_MEAS);


	/* DMA2_Stream0 channel0 configuration **************************************/
	DMA_DeInit(DMA1_Channel1);
	DMA_InitStructure.DMA_PeripheralBaseAddr = ADC1_DR_ADDRESS;                 //DMA�������ַ  ��ADC��ַ
    DMA_InitStructure.DMA_MemoryBaseAddr=(u32)&ADCValue;              //DMA�ڴ����ַ  ��Ҫ������ݵĵ�ַ
    DMA_InitStructure.DMA_DIR = DMA_DIR_PeripheralSRC;                          //������Ϊ���ݴ������Դ
    DMA_InitStructure.DMA_BufferSize = 6;                                       //DMA �����С
    DMA_InitStructure.DMA_PeripheralInc = DMA_PeripheralInc_Disable;            //�����ַ����
    DMA_InitStructure.DMA_MemoryInc = DMA_MemoryInc_Enable;                     //�ڴ��ַ����
    DMA_InitStructure.DMA_PeripheralDataSize = DMA_PeripheralDataSize_HalfWord; //�������ݿ��16λ
    DMA_InitStructure.DMA_MemoryDataSize = DMA_MemoryDataSize_HalfWord;         //�ڴ����ݿ��
    DMA_InitStructure.DMA_Mode = DMA_Mode_Circular;                             //������ѭ������ģʽ
    DMA_InitStructure.DMA_Priority = DMA_Priority_High;                         //�趨DMAͨ��X �����ȼ�
    DMA_InitStructure.DMA_M2M = DMA_M2M_Disable;                                //DMA ͨ��X û������ �ڴ浽�ڴ洫��
    DMA_Init(DMA1_Channel1, &DMA_InitStructure);                                //����DMA ͨ��1 ����
    /* Enable DMA channel1 */
    DMA_Cmd(DMA1_Channel1, ENABLE);
	
	/* ADC Common Init **********************************************************/
	ADC_InitStructure.ADC_Mode=ADC_Mode_Independent;                       //����ADCģʽ
    ADC_InitStructure.ADC_ScanConvMode = ENABLE ;                          //����ɨ��ģʽ��ɨ��ģʽ���ڶ�ͨ���ɼ�
    ADC_InitStructure.ADC_ContinuousConvMode = ENABLE;                     //��������ת��ģʽ������ͣ�ؽ���ADCת��
    ADC_InitStructure.ADC_ExternalTrigConv = ADC_ExternalTrigConv_None;    //ת�����������ʹ���ⲿ��������
    ADC_InitStructure.ADC_DataAlign = ADC_DataAlign_Right;                 //�ɼ������Ҷ���
    ADC_InitStructure.ADC_NbrOfChannel = 6;                                //Ҫת����ͨ����Ŀ3
    ADC_Init(ADC1,&ADC_InitStructure);                                     //�����趨�õĹ�����ʽ

	/*����ADCʱ�ӣ�ΪPCLK2��8��Ƶ����9MHz*/
    RCC_ADCCLKConfig(RCC_PCLK2_Div8);
    
    /*����ADC1��ͨ��11Ϊ55.        5���������ڣ�����˳��Ϊ1 */   //��   �⺯��P49
    ADC_RegularChannelConfig(ADC1, ADC_Channel_0, 1, ADC_SampleTime_55Cycles5);
	ADC_RegularChannelConfig(ADC1, ADC_Channel_1, 2, ADC_SampleTime_55Cycles5);
	ADC_RegularChannelConfig(ADC1, ADC_Channel_4, 3, ADC_SampleTime_55Cycles5);
	ADC_RegularChannelConfig(ADC1, ADC_Channel_5, 4, ADC_SampleTime_55Cycles5);
	ADC_RegularChannelConfig(ADC1, ADC_Channel_6, 5, ADC_SampleTime_55Cycles5);
	ADC_RegularChannelConfig(ADC1, ADC_Channel_7, 6, ADC_SampleTime_55Cycles5);

    /* Enable ADC1 DMA */
    ADC_DMACmd(ADC1, ENABLE);         //ʹ��ADC1 ��DMA ����        ���⺯�� P45
    
    /* Enable ADC1 */
    ADC_Cmd(ADC1, ENABLE);           //ʹ��ADC1 ���⺯�� P44    ע�⣺����ADC_Cmd ֻ��������ADC�������ú󱻵���

    //�ڿ���AD ת��ǰ  ����AD ��У׼
    /*��λУ׼�Ĵ��� */   
    ADC_ResetCalibration(ADC1);      //�⺯�� P46 ҳ

    /*�ȴ�У׼�Ĵ�����λ��� */
    while(ADC_GetResetCalibrationStatus(ADC1));

    /* ���� ADCУ׼ */
    ADC_StartCalibration(ADC1);
    /* �ȴ�У׼���*/
    while(ADC_GetCalibrationStatus(ADC1));

    /* ����û�в����ⲿ����������ʹ���������ADCת�� */ 
    ADC_SoftwareStartConvCmd(ADC1, ENABLE);  
}

static void deInit(void)
{
	 ADC_DeInit();
}
