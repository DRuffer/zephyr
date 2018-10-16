/* This file is a temporary workaround for mapping of the generated information
 * to the current driver definitions.  This will be removed when the drivers
 * are modified to handle the generated information, or the mapping of
 * generated data matches the driver definitions.
 */

/* SoC level DTS fixup file */

#define CONFIG_NUM_IRQ_PRIO_BITS	ARM_V6M_NVIC_E000E100_ARM_NUM_IRQ_PRIORITY_BITS

#define CONFIG_USART_GECKO_0_BASE_ADDRESS	SILABS_GECKO_USART_4000C000_BASE_ADDRESS
#define CONFIG_USART_GECKO_0_CURRENT_SPEED	SILABS_GECKO_USART_4000C000_CURRENT_SPEED
#define CONFIG_USART_GECKO_0_IRQ_RX		SILABS_GECKO_USART_4000C000_IRQ_0
#define CONFIG_USART_GECKO_0_IRQ_RX_PRIORITY	SILABS_GECKO_USART_4000C000_IRQ_0_PRIORITY
#define CONFIG_USART_GECKO_0_IRQ_TX		SILABS_GECKO_USART_4000C000_IRQ_1
#define CONFIG_USART_GECKO_0_IRQ_TX_PRIORITY	SILABS_GECKO_USART_4000C000_IRQ_1_PRIORITY
#define CONFIG_USART_GECKO_0_LABEL		SILABS_GECKO_USART_4000C000_LABEL
#define CONFIG_USART_GECKO_0_LOCATION		SILABS_GECKO_USART_4000C000_LOCATION
#define CONFIG_USART_GECKO_0_SIZE		SILABS_GECKO_USART_4000C000_SIZE

#define CONFIG_USART_GECKO_1_BASE_ADDRESS	SILABS_GECKO_USART_4000C400_BASE_ADDRESS
#define CONFIG_USART_GECKO_1_CURRENT_SPEED	SILABS_GECKO_USART_4000C400_CURRENT_SPEED
#define CONFIG_USART_GECKO_1_IRQ_RX		SILABS_GECKO_USART_4000C400_IRQ_0
#define CONFIG_USART_GECKO_1_IRQ_RX_PRIORITY	SILABS_GECKO_USART_4000C400_IRQ_0_PRIORITY
#define CONFIG_USART_GECKO_1_IRQ_TX		SILABS_GECKO_USART_4000C400_IRQ_1
#define CONFIG_USART_GECKO_1_IRQ_TX_PRIORITY	SILABS_GECKO_USART_4000C400_IRQ_1_PRIORITY
#define CONFIG_USART_GECKO_1_LABEL		SILABS_GECKO_USART_4000C400_LABEL
#define CONFIG_USART_GECKO_1_LOCATION		SILABS_GECKO_USART_4000C400_LOCATION
#define CONFIG_USART_GECKO_1_SIZE		SILABS_GECKO_USART_4000C400_SIZE

#define CONFIG_GPIO_GECKO_COMMON_NAME	SILABS_EFM32_GPIO_40006100_LABEL
#define CONFIG_GPIO_GECKO_COMMON_EVEN_IRQ	SILABS_EFM32_GPIO_40006100_IRQ_GPIO_EVEN
#define CONFIG_GPIO_GECKO_COMMON_EVEN_PRI	SILABS_EFM32_GPIO_40006100_IRQ_GPIO_EVEN_PRIORITY
#define CONFIG_GPIO_GECKO_COMMON_ODD_IRQ	SILABS_EFM32_GPIO_40006100_IRQ_GPIO_ODD
#define CONFIG_GPIO_GECKO_COMMON_ODD_PRI	SILABS_EFM32_GPIO_40006100_IRQ_GPIO_ODD_PRIORITY

#define CONFIG_GPIO_GECKO_PORTA_NAME	SILABS_EFM32_GPIO_PORT_40006000_LABEL
#define CONFIG_GPIO_GECKO_PORTB_NAME	SILABS_EFM32_GPIO_PORT_40006024_LABEL
#define CONFIG_GPIO_GECKO_PORTC_NAME	SILABS_EFM32_GPIO_PORT_40006048_LABEL
#define CONFIG_GPIO_GECKO_PORTD_NAME	SILABS_EFM32_GPIO_PORT_4000606C_LABEL
#define CONFIG_GPIO_GECKO_PORTE_NAME	SILABS_EFM32_GPIO_PORT_40006090_LABEL
#define CONFIG_GPIO_GECKO_PORTF_NAME	SILABS_EFM32_GPIO_PORT_400060B4_LABEL

/* End of SoC Level DTS fixup file */
