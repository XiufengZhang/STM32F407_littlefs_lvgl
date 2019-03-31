#ifndef __GPIO_H
#define __GPIO_H

#ifdef __cplusplus
extern "C"
{
#endif

//FSMC
//数据线
#define FSMC_D0_GPIO_PORT GPIOD
#define FSMC_D0_GPIO_PIN GPIO_Pin_14
#define FSMC_D0_PINSOURCE GPIO_PinSource14
#define FSMC_D0_AF GPIO_AF_FSMC

#define FSMC_D1_GPIO_PORT GPIOD
#define FSMC_D1_GPIO_PIN GPIO_Pin_15
#define FSMC_D1_PINSOURCE GPIO_PinSource15
#define FSMC_D1_AF GPIO_AF_FSMC

#define FSMC_D2_GPIO_PORT GPIOD
#define FSMC_D2_GPIO_PIN GPIO_Pin_0
#define FSMC_D2_PINSOURCE GPIO_PinSource0
#define FSMC_D2_AF GPIO_AF_FSMC

#define FSMC_D3_GPIO_PORT GPIOD
#define FSMC_D3_GPIO_PIN GPIO_Pin_1
#define FSMC_D3_PINSOURCE GPIO_PinSource1
#define FSMC_D3_AF GPIO_AF_FSMC

#define FSMC_D4_GPIO_PORT GPIOE
#define FSMC_D4_GPIO_PIN GPIO_Pin_7
#define FSMC_D4_PINSOURCE GPIO_PinSource7
#define FSMC_D4_AF GPIO_AF_FSMC

#define FSMC_D5_GPIO_PORT GPIOE
#define FSMC_D5_GPIO_PIN GPIO_Pin_8
#define FSMC_D5_PINSOURCE GPIO_PinSource8
#define FSMC_D5_AF GPIO_AF_FSMC

#define FSMC_D6_GPIO_PORT GPIOE
#define FSMC_D6_GPIO_PIN GPIO_Pin_9
#define FSMC_D6_PINSOURCE GPIO_PinSource9
#define FSMC_D6_AF GPIO_AF_FSMC

#define FSMC_D7_GPIO_PORT GPIOE
#define FSMC_D7_GPIO_PIN GPIO_Pin_10
#define FSMC_D7_PINSOURCE GPIO_PinSource10
#define FSMC_D7_AF GPIO_AF_FSMC

#define FSMC_D8_GPIO_PORT GPIOE
#define FSMC_D8_GPIO_PIN GPIO_Pin_11
#define FSMC_D8_PINSOURCE GPIO_PinSource11
#define FSMC_D8_AF GPIO_AF_FSMC

#define FSMC_D9_GPIO_PORT GPIOE
#define FSMC_D9_GPIO_PIN GPIO_Pin_12
#define FSMC_D9_PINSOURCE GPIO_PinSource12
#define FSMC_D9_AF GPIO_AF_FSMC

#define FSMC_D10_GPIO_PORT GPIOE
#define FSMC_D10_GPIO_PIN GPIO_Pin_13
#define FSMC_D10_PINSOURCE GPIO_PinSource13
#define FSMC_D10_AF GPIO_AF_FSMC

#define FSMC_D11_GPIO_PORT GPIOE
#define FSMC_D11_GPIO_PIN GPIO_Pin_14
#define FSMC_D11_PINSOURCE GPIO_PinSource14
#define FSMC_D11_AF GPIO_AF_FSMC

#define FSMC_D12_GPIO_PORT GPIOE
#define FSMC_D12_GPIO_PIN GPIO_Pin_15
#define FSMC_D12_PINSOURCE GPIO_PinSource15
#define FSMC_D12_AF GPIO_AF_FSMC

#define FSMC_D13_GPIO_PORT GPIOD
#define FSMC_D13_GPIO_PIN GPIO_Pin_8
#define FSMC_D13_PINSOURCE GPIO_PinSource8
#define FSMC_D13_AF GPIO_AF_FSMC

#define FSMC_D14_GPIO_PORT GPIOD
#define FSMC_D14_GPIO_PIN GPIO_Pin_9
#define FSMC_D14_PINSOURCE GPIO_PinSource9
#define FSMC_D14_AF GPIO_AF_FSMC

#define FSMC_D15_GPIO_PORT GPIOD
#define FSMC_D15_GPIO_PIN GPIO_Pin_10
#define FSMC_D15_PINSOURCE GPIO_PinSource10
#define FSMC_D15_AF GPIO_AF_FSMC

//地址线
#define FSMC_A0_GPIO_PORT GPIOF
#define FSMC_A0_GPIO_PIN GPIO_Pin_0
#define FSMC_A0_PINSOURCE GPIO_PinSource0
#define FSMC_A0_AF GPIO_AF_FSMC

#define FSMC_A1_GPIO_PORT GPIOF
#define FSMC_A1_GPIO_PIN GPIO_Pin_1
#define FSMC_A1_PINSOURCE GPIO_PinSource1
#define FSMC_A1_AF GPIO_AF_FSMC

#define FSMC_A2_GPIO_PORT GPIOF
#define FSMC_A2_GPIO_PIN GPIO_Pin_2
#define FSMC_A2_PINSOURCE GPIO_PinSource2
#define FSMC_A2_AF GPIO_AF_FSMC

#define FSMC_A3_GPIO_PORT GPIOF
#define FSMC_A3_GPIO_PIN GPIO_Pin_3
#define FSMC_A3_PINSOURCE GPIO_PinSource3
#define FSMC_A3_AF GPIO_AF_FSMC

#define FSMC_A4_GPIO_PORT GPIOF
#define FSMC_A4_GPIO_PIN GPIO_Pin_4
#define FSMC_A4_PINSOURCE GPIO_PinSource4
#define FSMC_A4_AF GPIO_AF_FSMC

#define FSMC_A5_GPIO_PORT GPIOF
#define FSMC_A5_GPIO_PIN GPIO_Pin_5
#define FSMC_A5_PINSOURCE GPIO_PinSource5
#define FSMC_A5_AF GPIO_AF_FSMC

#define FSMC_A6_GPIO_PORT GPIOF
#define FSMC_A6_GPIO_PIN GPIO_Pin_12
#define FSMC_A6_PINSOURCE GPIO_PinSource12
#define FSMC_A6_AF GPIO_AF_FSMC

#define FSMC_A7_GPIO_PORT GPIOF
#define FSMC_A7_GPIO_PIN GPIO_Pin_13
#define FSMC_A7_PINSOURCE GPIO_PinSource13
#define FSMC_A7_AF GPIO_AF_FSMC

#define FSMC_A8_GPIO_PORT GPIOF
#define FSMC_A8_GPIO_PIN GPIO_Pin_14
#define FSMC_A8_PINSOURCE GPIO_PinSource14
#define FSMC_A8_AF GPIO_AF_FSMC

#define FSMC_A9_GPIO_PORT GPIOF
#define FSMC_A9_GPIO_PIN GPIO_Pin_15
#define FSMC_A9_PINSOURCE GPIO_PinSource15
#define FSMC_A9_AF GPIO_AF_FSMC

#define FSMC_A10_GPIO_PORT GPIOG
#define FSMC_A10_GPIO_PIN GPIO_Pin_0
#define FSMC_A10_PINSOURCE GPIO_PinSource0
#define FSMC_A10_AF GPIO_AF_FSMC

#define FSMC_A11_GPIO_PORT GPIOG
#define FSMC_A11_GPIO_PIN GPIO_Pin_1
#define FSMC_A11_PINSOURCE GPIO_PinSource1
#define FSMC_A11_AF GPIO_AF_FSMC

#define FSMC_A12_GPIO_PORT GPIOG
#define FSMC_A12_GPIO_PIN GPIO_Pin_2
#define FSMC_A12_PINSOURCE GPIO_PinSource2
#define FSMC_A12_AF GPIO_AF_FSMC

#define FSMC_A13_GPIO_PORT GPIOG
#define FSMC_A13_GPIO_PIN GPIO_Pin_3
#define FSMC_A13_PINSOURCE GPIO_PinSource3
#define FSMC_A13_AF GPIO_AF_FSMC

#define FSMC_A14_GPIO_PORT GPIOG
#define FSMC_A14_GPIO_PIN GPIO_Pin_4
#define FSMC_A14_PINSOURCE GPIO_PinSource4
#define FSMC_A14_AF GPIO_AF_FSMC

#define FSMC_A15_GPIO_PORT GPIOG
#define FSMC_A15_GPIO_PIN GPIO_Pin_5
#define FSMC_A15_PINSOURCE GPIO_PinSource5
#define FSMC_A15_AF GPIO_AF_FSMC

#define FSMC_A16_GPIO_PORT GPIOD
#define FSMC_A16_GPIO_PIN GPIO_Pin_11
#define FSMC_A16_PINSOURCE GPIO_PinSource11
#define FSMC_A16_AF GPIO_AF_FSMC

#define FSMC_A17_GPIO_PORT GPIOD
#define FSMC_A17_GPIO_PIN GPIO_Pin_12
#define FSMC_A17_PINSOURCE GPIO_PinSource12
#define FSMC_A17_AF GPIO_AF_FSMC

#define FSMC_A18_GPIO_PORT GPIOD
#define FSMC_A18_GPIO_PIN GPIO_Pin_13
#define FSMC_A18_PINSOURCE GPIO_PinSource13
#define FSMC_A18_AF GPIO_AF_FSMC

//控制信号线
#define FSMC_NOE_GPIO_PORT GPIOD //输出使能
#define FSMC_NOE_GPIO_PIN GPIO_Pin_4
#define FSMC_NOE_PINSOURCE GPIO_PinSource4
#define FSMC_NOE_AF GPIO_AF_FSMC

#define FSMC_NWE_GPIO_PORT GPIOD //写使能
#define FSMC_NWE_GPIO_PIN GPIO_Pin_5
#define FSMC_NWE_PINSOURCE GPIO_PinSource5
#define FSMC_NWE_AF GPIO_AF_FSMC

#define FSMC_NBL0_GPIO_PORT GPIOE //低字节使能
#define FSMC_NBL0_GPIO_PIN GPIO_Pin_0
#define FSMC_NBL0_PINSOURCE GPIO_PinSource0
#define FSMC_NBL0_AF GPIO_AF_FSMC

#define FSMC_NBL1_GPIO_PORT GPIOE //高字节使能
#define FSMC_NBL1_GPIO_PIN GPIO_Pin_1
#define FSMC_NBL1_PINSOURCE GPIO_PinSource0
#define FSMC_NBL1_AF GPIO_AF_FSMC

//EN3
#define FSMC_ENRAM_GPIO_PORT GPIOG //SRAM片选信号
#define FSMC_ENRAM_GPIO_PIN GPIO_Pin_10
#define FSMC_ENRAM_PINSOURCE GPIO_PinSource10
#define FSMC_ENRAM_AF GPIO_AF_FSMC

//EN4
#define FSMC_ENLCD_GPIO_PORT GPIOG //SSD1963片选信号
#define FSMC_ENLCD_GPIO_PIN GPIO_Pin_12
#define FSMC_ENLCD_PINSOURCE GPIO_PinSource0
#define FSMC_ENLCD_AF GPIO_AF_FSMC

#define LTDC_REST_GPIO_PORT GPIOD
#define LTDC_REST_GPIO_PIN GPIO_Pin_3

#define LTDC_BK_GPIO_PORT GPIOB
#define LTDC_BK_GPIO_PIN GPIO_Pin_8

//USART
//USART1 连接控制板控制 发指令查询状态
#define USART1_TX_GPIO_PORT GPIOA
#define USART1_TX_GPIO_PIN GPIO_Pin_9
#define USART1_TX_PINSOURCE GPIO_PinSource9
#define USART1_TX_AF GPIO_AF_USART1

#define USART1_RX_GPIO_PORT GPIOA
#define USART1_RX_GPIO_PIN GPIO_Pin_10
#define USART1_RX_PINSOURCE GPIO_PinSource10
#define USART1_RX_AF GPIO_AF_USART1

//USART2 连接PC主机
#define USART2_TX_GPIO_PORT GPIOA
#define USART2_TX_GPIO_PIN GPIO_Pin_2
#define USART2_TX_PINSOURCE GPIO_PinSource2
#define USART2_TX_AF GPIO_AF_USART2

#define USART2_RX_GPIO_PORT GPIOA
#define USART2_RX_GPIO_PIN GPIO_Pin_3
#define USART2_RX_PINSOURCE GPIO_PinSource3
#define USART2_RX_AF GPIO_AF_USART2

//SPI
//Flash PSI1
#define SPIF_NSS_GPIO_PORT GPIOA //采用硬件控制，非软件控制SPI从设备片选
#define SPIF_NSS_GPIO_PIN GPIO_Pin_4
#define SPIF_NSS_PINSOURCE GPIO_PinSource4
#define SPIF_NSS_AF GPIO_AF_SPI1

#define SPIF_SCK_GPIO_PORT GPIOA
#define SPIF_SCK_GPIO_PIN GPIO_Pin_5
#define SPIF_SCK_PINSOURCE GPIO_PinSource5
#define SPIF_SCK_AF GPIO_AF_SPI1

#define SPIF_MISO_GPIO_PORT GPIOA //主模式下接收数据
#define SPIF_MISO_GPIO_PIN GPIO_Pin_6
#define SPIF_MISO_PINSOURCE GPIO_PinSource6
#define SPIF_MISO_AF GPIO_AF_SPI1

#define SPIF_MOSI_GPIO_PORT GPIOA //主模式下发送数据
#define SPIF_MOSI_GPIO_PIN GPIO_Pin_7
#define SPIF_MOSI_PINSOURCE GPIO_PinSource7
#define SPIF_MOSI_AF GPIO_AF_SPI1

//TOUCH SPI2
#define SPIT_NSS_GPIO_PORT GPIOB //采用硬件控制，非软件控制SPI从设备片选
#define SPIT_NSS_GPIO_PIN GPIO_Pin_12
#define SPIT_NSS_PINSOURCE GPIO_PinSource12
#define SPIT_NSS_AF GPIO_AF_SPI2

#define SPIT_SCK_GPIO_PORT GPIOB
#define SPIT_SCK_GPIO_PIN GPIO_Pin_13
#define SPIT_SCK_PINSOURCE GPIO_PinSource13
#define SPIT_SCK_AF GPIO_AF_SPI2

#define SPIT_MISO_GPIO_PORT GPIOB //主模式下接收数据
#define SPIT_MISO_GPIO_PIN GPIO_Pin_14
#define SPIT_MISO_PINSOURCE GPIO_PinSource14
#define SPIT_MISO_AF GPIO_AF_SPI2

#define SPIT_MOSI_GPIO_PORT GPIOB //主模式下发送数据
#define SPIT_MOSI_GPIO_PIN GPIO_Pin_15
#define SPIT_MOSI_PINSOURCE GPIO_PinSource15
#define SPIT_MOSI_AF GPIO_AF_SPI2

#define SPIT_BUSY_GPIO_PORT GPIOG //触摸IC忙信号 非工作状态高阻 片选后工作状态拉低
#define SPIT_BUSY_GPIO_PIN GPIO_Pin_8

#define SPIT_INT_GPIO_PORT GPIOG //触摸IC中断信号 无触摸状态高阻 触摸按下工作状态拉低
#define SPIT_INT_GPIO_PIN GPIO_Pin_7

//Touch_I2C 控制线
#define I2CT_SCL_GPIO_PORT GPIOC
#define I2CT_SCL_GPIO_PIN GPIO_Pin_7

#define I2CT_SDA_GPIO_PORT GPIOC
#define I2CT_SDA_GPIO_PIN GPIO_Pin_8
#define I2CT_SDA_MODER GPIO_MODER_MODER8 //判断输入输出状态

#define I2CT_RST_GPIO_PORT GPIOC
#define I2CT_RST_GPIO_PIN GPIO_Pin_9

#define I2CT_INT_GPIO_PORT GPIOA
#define I2CT_INT_GPIO_PIN GPIO_Pin_8
#define I2CT_INT_EXTI_PORTSOURCE EXTI_PortSourceGPIOA
#define I2CT_INT_EXTI_PINSOURCE EXTI_PinSource8
#define I2CT_INT_EXTI_LINE EXTI_Line8
#define I2CT_INT_EXTI_IRQ EXTI9_5_IRQn

//Timer
//PWM输出调整背光
#define Tim_LCDBL_GPIO_PORT GPIOB //TIM4_CH3
#define Tim_LCDBL_GPIO_PIN GPIO_Pin_8
#define Tim_LCDBL_PINSOURCE GPIO_PinSource8
#define Tim_LCDBL_AF GPIO_AF_TIM4

//编码器脉冲捕获
#define Tim_CODER_A_GPIO_PORT GPIOA //TIM5_CH1
#define Tim_CODER_A_GPIO_PIN GPIO_Pin_0
#define Tim_CODER_A_PINSOURCE GPIO_PinSource0
#define Tim_CODER_A_AF GPIO_AF_TIM5

#define Tim_CODER_B_GPIO_PORT GPIOA //TIM5_CH2
#define Tim_CODER_B_GPIO_PIN GPIO_Pin_1
#define Tim_CODER_B_PINSOURCE GPIO_PinSource1
#define Tim_CODER_B_AF GPIO_AF_TIM5

//测试按键
#define IO_TestKey_GPIO_PORT GPIOE
#define IO_TestKey_GPIO_PIN GPIO_Pin_6

    extern FlagStatus RealayRunStatus; //继电器运行状态，继电器无故障的情况下，1运行，0停止
    extern ErrorStatus RealayStatus;   //继电器状态，MCU控制IO与检测IO状态不符时泵故障报警，ERROR故障报警，SUCCESS正常
    extern ErrorStatus TemperStatus;   //温度开关状态，可控硅超温报警，ERROR故障报警，SUCCESS正常

    void GpioInit(void);

    void GpioLCDSSDControl(FunctionalState Enable);
    void GpioSPIFlashCSControl(FunctionalState Enable);
    void GpioSPITouchCSControl(FunctionalState Enable);

#ifdef __cplusplus
}
#endif

#endif