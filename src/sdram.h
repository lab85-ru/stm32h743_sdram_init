#ifndef SDRAM_H_
#define SDRAM_H_

#define SDRAM_DEVICE_ADDR  ((uint32_t)0xC0000000)
#define SDRAM_DEVICE_SIZE  ((uint32_t)32 * 1024 * 1024)  /* SDRAM device size in MBytes */
 
//  FMC GPIO Configuration  

#define SDRAM_PORT_FMC_CS (GPIOC)
#define SDRAM_FMC_CS (1 << 2)

#define SDRAM_PORT_FMC_SDCKE0 (GPIOC)
#define SDRAM_FMC_SDCKE0 (1 << 3)

#define SDRAM_PORT_FMC_NBL1 (GPIOE) 
#define SDRAM_FMC_NBL1 (1 << 1)

#define SDRAM_PORT_FMC_NBL0 (GPIOE) 
#define SDRAM_FMC_NBL0 (1 << 0)

#define SDRAM_PORT_FMC_SDNCAS (GPIOG) 
#define SDRAM_FMC_SDNCAS (1 << 15)

#define SDRAM_PORT_FMC_SDNRAS (GPIOF)
#define SDRAM_FMC_SDNRAS (1 << 11)

#define SDRAM_PORT_FMC_SDCLK (GPIOG)
#define SDRAM_FMC_SDCLK (1 << 8)

#define SDRAM_PORT_FMC_SDNWE (GPIOC)
#define SDRAM_FMC_SDNWE (1 << 0)

#define SDRAM_PORT_FMC_SDNE0 (GPIOH)
#define SDRAM_FMC_SDNE0 (1 << 3)

#define SDRAM_PORT_FMC_BA1 (GPIOG)
#define SDRAM_FMC_BA1 (1 << 5)

#define SDRAM_PORT_FMC_BA0 (GPIOG)
#define SDRAM_FMC_BA0 (1 << 4)



#define SDRAM_PORT_FMC_A0 (GPIOF)
#define SDRAM_FMC_A0 (1 << 0)

#define SDRAM_PORT_FMC_A1 (GPIOF)
#define SDRAM_FMC_A1 (1 << 1)

#define SDRAM_PORT_FMC_A2 (GPIOF)
#define SDRAM_FMC_A2 (1 << 2)

#define SDRAM_PORT_FMC_A3 (GPIOF)
#define SDRAM_FMC_A3 (1 << 3)

#define SDRAM_PORT_FMC_A4 (GPIOF)
#define SDRAM_FMC_A4 (1 << 4)

#define SDRAM_PORT_FMC_A5 (GPIOF)
#define SDRAM_FMC_A5 (1 << 5)

#define SDRAM_PORT_FMC_A6 (GPIOF)
#define SDRAM_FMC_A6 (1 << 12)

#define SDRAM_PORT_FMC_A7 (GPIOF)
#define SDRAM_FMC_A7 (1 << 13)

#define SDRAM_PORT_FMC_A8 (GPIOF)
#define SDRAM_FMC_A8 (1 << 14)

#define SDRAM_PORT_FMC_A9 (GPIOF)
#define SDRAM_FMC_A9 (1 << 15)

#define SDRAM_PORT_FMC_A10 (GPIOG)
#define SDRAM_FMC_A10 (1 << 0)

#define SDRAM_PORT_FMC_A11 (GPIOG)
#define SDRAM_FMC_A11 (1 << 1)

#define SDRAM_PORT_FMC_A12 (GPIOG)
#define SDRAM_FMC_A12 (1 << 2)


#define SDRAM_PORT_FMC_D0 (GPIOD)
#define SDRAM_FMC_D0 (1 << 15)

#define SDRAM_PORT_FMC_D1 (GPIOD)
#define SDRAM_FMC_D1 (1 << 14)

#define SDRAM_PORT_FMC_D2 (GPIOD) 
#define SDRAM_FMC_D2 (1 << 0)

#define SDRAM_PORT_FMC_D3 (GPIOD) 
#define SDRAM_FMC_D3 (1 << 1)

#define SDRAM_PORT_FMC_D4 (GPIOE)
#define SDRAM_FMC_D4 (1 << 7)

#define SDRAM_PORT_FMC_D5 (GPIOE)
#define SDRAM_FMC_D5 (1 << 8)

#define SDRAM_PORT_FMC_D6 (GPIOE)
#define SDRAM_FMC_D6 (1 << 9)

#define SDRAM_PORT_FMC_D7 (GPIOE)
#define SDRAM_FMC_D7 (1 << 10)

#define SDRAM_PORT_FMC_D8 (GPIOE)
#define SDRAM_FMC_D8 (1 << 11)

#define SDRAM_PORT_FMC_D9 (GPIOE)
#define SDRAM_FMC_D9 (1 << 12)

#define SDRAM_PORT_FMC_D10 (GPIOE)
#define SDRAM_FMC_D10 (1 << 13)

#define SDRAM_PORT_FMC_D11 (GPIOE)
#define SDRAM_FMC_D11 (1 << 14)

#define SDRAM_PORT_FMC_D12 (GPIOE)
#define SDRAM_FMC_D12 (1 << 15)

#define SDRAM_PORT_FMC_D13 (GPIOD)
#define SDRAM_FMC_D13 (1 << 8)

#define SDRAM_PORT_FMC_D14 (GPIOD)
#define SDRAM_FMC_D14 (1 << 9)

#define SDRAM_PORT_FMC_D15 (GPIOD)
#define SDRAM_FMC_D15 (1 << 10)

void sdram_gpio_init(void);
void sdram_fmc_init(void);


#endif