#include "IOMap.h"
#include "HAL.h"

static void init();

IOPinMapTypeDef IOMap =
{
	.init   = init,
	.ID_CLK =  // IOPinTypeDef ID_CLK
	{
		.setBitRegister      = &(GPIOC->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOC->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOC,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_9,       // uint32 pinBitWeight
		.bit                 = 9,                // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_AF_PP,        // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.ID_CH0 =  // IOPinTypeDef ID_CH0
	{
		.setBitRegister      = &(GPIOC->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOC->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOC,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_0,       // uint32 pinBitWeight
		.bit                 = 0,                // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_IN_FLOATING,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.ID_CH1 =  // IOPinTypeDef ID_CH1
	{
		.setBitRegister      = &(GPIOC->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOC->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOC,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_1,       // uint32 pinBitWeight
		.bit                 = 1,                // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_IN_FLOATING,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.DIO0 =  // IOPinTypeDef DIO0
	{
		.setBitRegister      = &(GPIOA->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOA->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOA,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_0,       // uint32 pinBitWeight
		.bit                 = 0,                // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_IN_FLOATING,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.DIO1 =  // IOPinTypeDef DIO1
	{
		.setBitRegister      = &(GPIOA->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOA->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOA,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_1,       // uint32 pinBitWeight
		.bit                 = 1,                // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_IN_FLOATING,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.DIO2 =  // IOPinTypeDef
	{
		.setBitRegister      = &(GPIOA->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOA->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOA,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_2,       // uint32 pinBitWeight
		.bit                 = 2,                // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_IN_FLOATING,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.DIO3 =  // IOPinTypeDef DIO3
	{
		.setBitRegister      = &(GPIOA->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOA->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOA,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_3,       // uint32 pinBitWeight
		.bit                 = 3,                // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_IN_FLOATING,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.DIO4 =  // IOPinTypeDef DIO4
	{
		.setBitRegister      = &(GPIOA->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOA->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOA,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_4,       // uint32 pinBitWeight
		.bit                 = 4,                // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_IN_FLOATING,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.DIO5 =  // IOPinTypeDef DIO5
	{
		.setBitRegister      = &(GPIOA->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOA->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOA,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_5,       // uint32 pinBitWeight
		.bit                 = 5,                // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_IN_FLOATING,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.AIN0 =  // IOPinTypeDef AIN0
	{
		.setBitRegister      = &(GPIOA->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOA->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOA,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_7,       // uint32 pinBitWeight
		.bit                 = 7,                // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_AIN,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.AIN1 =  // IOPinTypeDef AIN1
	{
		.setBitRegister      = &(GPIOB->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOB->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOB,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_0,       // uint32 pinBitWeight
		.bit                 = 0,                // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_AIN,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.AIN2 =  // IOPinTypeDef AIN2
	{
		.setBitRegister      = &(GPIOB->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOB->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOB,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_1,       // uint32 pinBitWeight
		.bit                 = 1,                // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_AIN,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.DIO6 =  // IOPinTypeDef DIO6
	{
		.setBitRegister      = &(GPIOE->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOE->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOE,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_8,       // uint32 pinBitWeight
		.bit                 = 8,                // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_IN_FLOATING,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.DIO7 =  // IOPinTypeDef DIO7
	{
		.setBitRegister      = &(GPIOE->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOE->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOE,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_9,       // uint32 pinBitWeight
		.bit                 = 9,                // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_IN_FLOATING,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.DIO8 =  // IOPinTypeDef DIO8
	{
		.setBitRegister      = &(GPIOE->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOE->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOE,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_10,      // uint32 pinBitWeight
		.bit                 = 10,               // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_IN_FLOATING,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.DIO9 =  // IOPinTypeDef DIO9
	{
		.setBitRegister      = &(GPIOE->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOE->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOE,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_11,      // uint32 pinBitWeight
		.bit                 = 11,               // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_IN_FLOATING,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.DIO10 =  // IOPinTypeDef DIO10
	{
		.setBitRegister      = &(GPIOE->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOE->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOE,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_12,      // uint32 pinBitWeight
		.bit                 = 12,               // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_IN_FLOATING,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.DIO11 =  // IOPinTypeDef DIO11
	{
		.setBitRegister      = &(GPIOE->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOE->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOE,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_13,      // uint32 pinBitWeight
		.bit                 = 13,               // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_IN_FLOATING,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.CLK16 =  // IOPinTypeDef CLK16
	{
		.setBitRegister      = &(GPIOA->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOA->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOA,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_8,       // uint32 pinBitWeight
		.bit                 = 8,                // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_AF_PP,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.SPI2_CSN0 =  // IOPinTypeDef SPI2_CSN0
	{
		.setBitRegister      = &(GPIOE->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOE->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOE,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_15,      // uint32 pinBitWeight
		.bit                 = 15,               // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_Out_PP,        // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.SPI2_CSN1 =  // IOPinTypeDef SPI2_CSN1
	{
		.setBitRegister      = &(GPIOB->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOB->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOB,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_11,      // uint32 pinBitWeight
		.bit                 = 11,               // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_Out_PP,        // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.SPI2_CSN2 =  // IOPinTypeDef SPI2_CSN2
	{
		.setBitRegister      = &(GPIOB->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOB->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOB,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_12,      // uint32 pinBitWeight
		.bit                 = 12,               // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_Out_PP,        // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.SPI2_SCK =  // IOPinTypeDef SPI2_SCK
	{
		.setBitRegister      = &(GPIOB->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOB->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOB,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_13,      // uint32 pinBitWeight
		.bit                 = 13,               // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_AF_PP,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.SPI2_SDO =  // IOPinTypeDef SPI2_SDO
	{
		.setBitRegister      = &(GPIOB->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOB->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOB,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_14,      // uint32 pinBitWeight
		.bit                 = 14,               // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_AF_PP,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.SPI2_SDI =  // IOPinTypeDef SPI2_SDI
	{
		.setBitRegister      = &(GPIOB->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOB->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOB,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_15,      // uint32 pinBitWeight
		.bit                 = 15,               // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_AF_PP,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.SPI1_CSN =  // IOPinTypeDef SPI1_CSN
	{
		.setBitRegister      = &(GPIOA->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOA->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOA,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_15,      // uint32 pinBitWeight
		.bit                 = 15,               // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_Out_PP,        // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.SPI1_SCK =  // IOPinTypeDef SPI1_SCK
	{
		.setBitRegister      = &(GPIOC->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOC->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOC,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_10,      // uint32 pinBitWeight
		.bit                 = 10,               // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_AF_PP,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.SPI1_SDI =  // IOPinTypeDef SPI1_SDI
	{
		.setBitRegister      = &(GPIOC->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOC->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOC,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_12,      // uint32 pinBitWeight
		.bit                 = 12,               // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_AF_PP,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.SPI1_SDO =  // IOPinTypeDef SPI1_SDO
	{
		.setBitRegister      = &(GPIOC->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOC->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOC,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_11,      // uint32 pinBitWeight
		.bit                 = 11,               // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_AF_PP,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.DIO12 =  // IOPinTypeDef DIO12
	{
		.setBitRegister      = &(GPIOD->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOD->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOD,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_0,       // uint32 pinBitWeight
		.bit                 = 0,                // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_IN_FLOATING,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.DIO13 =  // IOPinTypeDef DIO13
	{
		.setBitRegister      = &(GPIOD->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOD->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOD,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_1,       // uint32 pinBitWeight
		.bit                 = 1,                // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_IN_FLOATING,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.DIO14 =  // IOPinTypeDef DIO14
	{
		.setBitRegister      = &(GPIOD->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOD->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOD,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_2,       // uint32 pinBitWeight
		.bit                 = 2,                // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_IN_FLOATING,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.DIO15 =  // IOPinTypeDef DIO15
	{
		.setBitRegister      = &(GPIOD->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOD->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOD,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_3,       // uint32 pinBitWeight
		.bit                 = 3,                // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_IN_FLOATING,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.DIO16 =  // IOPinTypeDef DIO016
	{
		.setBitRegister      = &(GPIOD->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOD->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOD,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_4,       // uint32 pinBitWeight
		.bit                 = 4,                // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_IN_FLOATING,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.DIO17 =  // IOPinTypeDef DIO017
	{
		.setBitRegister      = &(GPIOD->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOD->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOD,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_5,       // uint32 pinBitWeight
		.bit                 = 5,                // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_IN_FLOATING,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.DIO18 =  // IOPinTypeDef DIO18
	{
		.setBitRegister      = &(GPIOD->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOD->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOD,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_6,       // uint32 pinBitWeight
		.bit                 = 6,                // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_IN_FLOATING,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.DIO19 =  // IOPinTypeDef DIO19
	{
		.setBitRegister      = &(GPIOD->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOD->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOD,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_7,       // uint32 pinBitWeight
		.bit                 = 7,                // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_IN_FLOATING,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.WIRELESS_TX =  // IOPinTypeDef WIRELESS_TX
	{
		.setBitRegister      = &(GPIOD->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOD->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOD,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_8,       // uint32 pinBitWeight
		.bit                 = 8,                // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_AF_PP,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.WIRELESS_RX =  // IOPinTypeDef WIRELESS_RX
	{
		.setBitRegister      = &(GPIOD->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOD->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOD,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_9,       // uint32 pinBitWeight
		.bit                 = 9,                // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_AF_PP,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.WIRELESS_NRST =  // IOPinTypeDef WIRELESS_NRST
	{
		.setBitRegister      = &(GPIOD->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOD->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOD,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_10,      // uint32 pinBitWeight
		.bit                 = 10,               // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_Out_PP,        // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.RS232_TX =  // IOPinTypeDef RS232_TX
	{
		.setBitRegister      = &(GPIOC->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOC->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOC,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_6,       // uint32 pinBitWeight
		.bit                 = 6,                // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_AF_PP,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.RS232_RX =  // IOPinTypeDef RS232_RX
	{
		.setBitRegister      = &(GPIOC->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOC->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOC,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_7,       // uint32 pinBitWeight
		.bit                 = 7,                // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_AF_PP,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.USB_V_BUS =  // IOPinTypeDef USB_V_BUS
	{
		.setBitRegister      = &(GPIOA->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOA->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOA,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_9,       // uint32 pinBitWeight
		.bit                 = 9,                // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_IN_FLOATING,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,    // GPIOOType_TypeDef GPIO_OType
		}
	},

	.USB_V_DM =  // IOPinTypeDef USB_V_DM
	{
		.setBitRegister      = &(GPIOA->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOA->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOA,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_11,      // uint32 pinBitWeight
		.bit                 = 11,               // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_AF_PP,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,    // GPIOOType_TypeDef GPIO_OType
		}
	},

	.USB_V_DP =  // IOPinTypeDef USB_V_DP
	{
		.setBitRegister      = &(GPIOA->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOA->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOA,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_12,      // uint32 pinBitWeight
		.bit                 = 12,               // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_AF_PP,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,    // GPIOOType_TypeDef GPIO_OType
		}
	},

	.VM_MEAS =  // IOPinTypeDef VM_MEAS
	{
		.setBitRegister      = &(GPIOC->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOC->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOC,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_2,       // uint32 pinBitWeight
		.bit                 = 2,                // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_AIN,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.LED_STAT =  // IOPinTypeDef LED_STAT
	{
		.setBitRegister      = &(GPIOE->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOE->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOE,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_0,       // uint32 pinBitWeight
		.bit                 = 0,                // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_Out_PP,        // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.LED_ERROR =  // IOPinTypeDef LED_ERROR
	{
		.setBitRegister      = &(GPIOE->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOE->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOE,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_1,       // uint32 pinBitWeight
		.bit                 = 1,                // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_Out_PP,        // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.EXTIO_2 =  // IOPinTypeDef EXTIO_2
	{
		.setBitRegister      = &(GPIOE->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOE->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOE,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_3,       // uint32 pinBitWeight
		.bit                 = 3,                // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_IN_FLOATING,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.EXTIO_3 =  // IOPinTypeDef EXTIO_3
	{
		.setBitRegister      = &(GPIOE->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOE->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOE,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_4,       // uint32 pinBitWeight
		.bit                 = 4,                // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_IN_FLOATING,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.EXTIO_4 =  // IOPinTypeDef EXTIO_4
	{
		.setBitRegister      = &(GPIOE->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOE->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOE,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_5,       // uint32 pinBitWeight
		.bit                 = 5,                // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_IN_FLOATING,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.EXTIO_5 =  // IOPinTypeDef EXTIO_5
	{
		.setBitRegister      = &(GPIOC->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOC->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOC,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_4,       // uint32 pinBitWeight
		.bit                 = 4,                // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_IN_FLOATING,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.EXTIO_6 =  // IOPinTypeDef EXTIO_6
	{
		.setBitRegister      = &(GPIOC->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOC->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOC,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_5,       // uint32 pinBitWeight
		.bit                 = 5,                // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_IN_FLOATING,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.EXTIO_7 =  // IOPinTypeDef EXTIO_7
	{
		.setBitRegister      = &(GPIOC->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOC->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOC,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_5,       // uint32 pinBitWeight
		.bit                 = 5,                // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_IN_FLOATING,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.EEPROM_SCK =  // IOPinTypeDef EEPROM_SCK
	{
		.setBitRegister      = &(GPIOB->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOB->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOB,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_3,       // uint32 pinBitWeight
		.bit                 = 3,                // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_AF_PP,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.EEPROM_SI =  // IOPinTypeDef EEPROM_SI
	{
		.setBitRegister      = &(GPIOB->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOB->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOB,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_4,       // uint32 pinBitWeight
		.bit                 = 4,                // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_AF_PP,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.EEPROM_SO =  // IOPinTypeDef EEPROM_SO
	{
		.setBitRegister      = &(GPIOB->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOB->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOB,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_5,       // uint32 pinBitWeight
		.bit                 = 5,                // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_AF_PP,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.EEPROM_NCS =  // IOPinTypeDef
	{
		.setBitRegister      = &(GPIOB->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOB->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOB,            // GPIO_TypeDef *port
		.bitWeight           = GPIO_Pin_6,       // uint32 pinBitWeight
		.bit                 = 6,                // unsigned char bit
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_Out_PP,        // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.MIXED0 =  // !!! DUMMY -> NOT IN HADWARE !!!
	{
		.setBitRegister      = &(GPIOA->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOA->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOB,            // GPIO_TypeDef *port
		.bitWeight           = DUMMY_BITWEIGHT,  // invalid
		.bit                 = -1,               // invalid
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_IN_FLOATING,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.MIXED1 =  // !!! DUMMY -> NOT IN HADWARE !!!
	{
		.setBitRegister      = &(GPIOA->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOA->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOB,            // GPIO_TypeDef *port
		.bitWeight           = DUMMY_BITWEIGHT,  // invalid
		.bit                 = -1,               // invalid
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_IN_FLOATING,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.MIXED2 =  // !!! DUMMY -> NOT IN HADWARE !!!
	{
		.setBitRegister      = &(GPIOA->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOA->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOB,            // GPIO_TypeDef *port
		.bitWeight           = DUMMY_BITWEIGHT,  // invalid
		.bit                 = -1,               // invalid
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_IN_FLOATING,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.MIXED3 =  // !!! DUMMY -> NOT IN HADWARE !!!
	{
		.setBitRegister      = &(GPIOA->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOA->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOB,            // GPIO_TypeDef *port
		.bitWeight           = DUMMY_BITWEIGHT,  // invalid
		.bit                 = -1,               // invalid
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_IN_FLOATING,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.MIXED4 =  // !!! DUMMY -> NOT IN HADWARE !!!
	{
		.setBitRegister      = &(GPIOA->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOA->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOB,            // GPIO_TypeDef *port
		.bitWeight           = DUMMY_BITWEIGHT,  // invalid
		.bit                 = -1,               // invalid
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_IN_FLOATING,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.MIXED5 =  // !!! DUMMY -> NOT IN HADWARE !!!
	{
		.setBitRegister      = &(GPIOA->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOA->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOB,            // GPIO_TypeDef *port
		.bitWeight           = DUMMY_BITWEIGHT,  // invalid
		.bit                 = -1,               // invalid
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_IN_FLOATING,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.MIXED6 =  // !!! DUMMY -> NOT IN HADWARE !!!
	{
		.setBitRegister      = &(GPIOA->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOA->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOB,            // GPIO_TypeDef *port
		.bitWeight           = DUMMY_BITWEIGHT,  // invalid
		.bit                 = -1,               // invalid
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_IN_FLOATING,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	},

	.DUMMY =  // IOPinTypeDef
	{
		.setBitRegister      = &(GPIOA->BSRRL),  // __IO uint16 *setBitRegister
		.resetBitRegister    = &(GPIOA->BSRRH),  // __IO uint16 *resetBitRegister
		.port                = GPIOB,            // GPIO_TypeDef *port
		.bitWeight           = DUMMY_BITWEIGHT,  // invalid
		.bit                 = -1,               // invalid
		.resetConfiguration  =
		{
			.GPIO_Mode   = GPIO_Mode_IN_FLOATING,         // GPIOMode_TypeDef GPIO_Mode
			.GPIO_Speed  = GPIO_Speed_50MHz,     // GPIOOType_TypeDef GPIO_OType
		}
	}
};

static void init()
{
	HAL.IOs->config->reset(&HAL.IOs->pins->ID_CLK);
	HAL.IOs->config->reset(&HAL.IOs->pins->ID_CH0);
	HAL.IOs->config->reset(&HAL.IOs->pins->ID_CH1);
	HAL.IOs->config->reset(&HAL.IOs->pins->DIO0);
	HAL.IOs->config->reset(&HAL.IOs->pins->DIO1);
	HAL.IOs->config->reset(&HAL.IOs->pins->DIO2);
	HAL.IOs->config->reset(&HAL.IOs->pins->DIO3);
	HAL.IOs->config->reset(&HAL.IOs->pins->DIO4);
	HAL.IOs->config->reset(&HAL.IOs->pins->DIO5);
	HAL.IOs->config->reset(&HAL.IOs->pins->AIN0);
	HAL.IOs->config->reset(&HAL.IOs->pins->AIN1);
	HAL.IOs->config->reset(&HAL.IOs->pins->AIN2);
	HAL.IOs->config->reset(&HAL.IOs->pins->DIO6);
	HAL.IOs->config->reset(&HAL.IOs->pins->DIO7);
	HAL.IOs->config->reset(&HAL.IOs->pins->DIO8);
	HAL.IOs->config->reset(&HAL.IOs->pins->DIO9);
	HAL.IOs->config->reset(&HAL.IOs->pins->DIO10);
	HAL.IOs->config->reset(&HAL.IOs->pins->DIO11);
	HAL.IOs->config->reset(&HAL.IOs->pins->SPI2_CSN0);
	HAL.IOs->config->reset(&HAL.IOs->pins->SPI2_CSN1);
	HAL.IOs->config->reset(&HAL.IOs->pins->SPI2_CSN2);
	HAL.IOs->config->reset(&HAL.IOs->pins->SPI2_SCK);
	HAL.IOs->config->reset(&HAL.IOs->pins->SPI2_SDO);
	HAL.IOs->config->reset(&HAL.IOs->pins->SPI2_SDI);
	HAL.IOs->config->reset(&HAL.IOs->pins->SPI1_CSN);
	HAL.IOs->config->reset(&HAL.IOs->pins->SPI1_SCK);
	HAL.IOs->config->reset(&HAL.IOs->pins->SPI1_SDI);
	HAL.IOs->config->reset(&HAL.IOs->pins->SPI1_SDO);
	HAL.IOs->config->reset(&HAL.IOs->pins->DIO12);
	HAL.IOs->config->reset(&HAL.IOs->pins->DIO13);
	HAL.IOs->config->reset(&HAL.IOs->pins->DIO14);
	HAL.IOs->config->reset(&HAL.IOs->pins->DIO15);
	HAL.IOs->config->reset(&HAL.IOs->pins->DIO16);
	HAL.IOs->config->reset(&HAL.IOs->pins->DIO17);
	HAL.IOs->config->reset(&HAL.IOs->pins->DIO18);
	HAL.IOs->config->reset(&HAL.IOs->pins->DIO19);
	HAL.IOs->config->reset(&HAL.IOs->pins->WIRELESS_TX);
	HAL.IOs->config->reset(&HAL.IOs->pins->WIRELESS_RX);
	HAL.IOs->config->reset(&HAL.IOs->pins->WIRELESS_NRST);
	HAL.IOs->config->reset(&HAL.IOs->pins->RS232_TX);
	HAL.IOs->config->reset(&HAL.IOs->pins->RS232_RX);
	HAL.IOs->config->reset(&HAL.IOs->pins->USB_V_BUS);
	HAL.IOs->config->reset(&HAL.IOs->pins->USB_V_DM);
	HAL.IOs->config->reset(&HAL.IOs->pins->USB_V_DP);
	HAL.IOs->config->reset(&HAL.IOs->pins->VM_MEAS);
	HAL.IOs->config->reset(&HAL.IOs->pins->LED_STAT);
	HAL.IOs->config->reset(&HAL.IOs->pins->LED_ERROR);
	HAL.IOs->config->reset(&HAL.IOs->pins->EXTIO_2);
	HAL.IOs->config->reset(&HAL.IOs->pins->EXTIO_3);
	HAL.IOs->config->reset(&HAL.IOs->pins->EXTIO_4);
	HAL.IOs->config->reset(&HAL.IOs->pins->EXTIO_5);
	HAL.IOs->config->reset(&HAL.IOs->pins->EXTIO_6);
	HAL.IOs->config->reset(&HAL.IOs->pins->EXTIO_7);
	HAL.IOs->config->reset(&HAL.IOs->pins->EEPROM_SCK);
	HAL.IOs->config->reset(&HAL.IOs->pins->EEPROM_SI);
	HAL.IOs->config->reset(&HAL.IOs->pins->EEPROM_SO);
	HAL.IOs->config->reset(&HAL.IOs->pins->EEPROM_NCS);
	HAL.IOs->config->reset(&HAL.IOs->pins->CLK16);
}
