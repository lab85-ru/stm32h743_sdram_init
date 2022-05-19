#include "stm32h743xx.h"
#include "rcc_h743.h"
#include "gpio_h743.h"
#include "time_hal.h"
#include "sdram.h"

//------------------------------------------------------------------------------
// SDRAM gpio init
//------------------------------------------------------------------------------
void sdram_gpio_init(void)
{
    //cegdfh
    rcc_clk_en(&RCC->AHB4ENR, RCC_AHB4ENR_GPIOCEN);
    rcc_clk_en(&RCC->AHB4ENR, RCC_AHB4ENR_GPIOEEN);
    rcc_clk_en(&RCC->AHB4ENR, RCC_AHB4ENR_GPIOGEN);
    rcc_clk_en(&RCC->AHB4ENR, RCC_AHB4ENR_GPIODEN);
    rcc_clk_en(&RCC->AHB4ENR, RCC_AHB4ENR_GPIOFEN);
    rcc_clk_en(&RCC->AHB4ENR, RCC_AHB4ENR_GPIOHEN);
    
    /* Enable the FMC interface clock */
    rcc_clk_en(&RCC->AHB3ENR, RCC_AHB3ENR_FMCEN);

    // gpio_init
    gpio_init(SDRAM_PORT_FMC_D0,  SDRAM_FMC_D0,  GPIO_MODE_AF, GPIO_OTYPE_PUSHPULL, GPIO_SPEEDF_HIGH, GPIO_PULL_UP, GPIO_AF12_FMC);
    gpio_init(SDRAM_PORT_FMC_D1,  SDRAM_FMC_D1,  GPIO_MODE_AF, GPIO_OTYPE_PUSHPULL, GPIO_SPEEDF_HIGH, GPIO_PULL_UP, GPIO_AF12_FMC);
    gpio_init(SDRAM_PORT_FMC_D2,  SDRAM_FMC_D2,  GPIO_MODE_AF, GPIO_OTYPE_PUSHPULL, GPIO_SPEEDF_HIGH, GPIO_PULL_UP, GPIO_AF12_FMC);
    gpio_init(SDRAM_PORT_FMC_D3,  SDRAM_FMC_D3,  GPIO_MODE_AF, GPIO_OTYPE_PUSHPULL, GPIO_SPEEDF_HIGH, GPIO_PULL_UP, GPIO_AF12_FMC);
    gpio_init(SDRAM_PORT_FMC_D4,  SDRAM_FMC_D4,  GPIO_MODE_AF, GPIO_OTYPE_PUSHPULL, GPIO_SPEEDF_HIGH, GPIO_PULL_UP, GPIO_AF12_FMC);
    gpio_init(SDRAM_PORT_FMC_D5,  SDRAM_FMC_D5,  GPIO_MODE_AF, GPIO_OTYPE_PUSHPULL, GPIO_SPEEDF_HIGH, GPIO_PULL_UP, GPIO_AF12_FMC);
    gpio_init(SDRAM_PORT_FMC_D6,  SDRAM_FMC_D6,  GPIO_MODE_AF, GPIO_OTYPE_PUSHPULL, GPIO_SPEEDF_HIGH, GPIO_PULL_UP, GPIO_AF12_FMC);
    gpio_init(SDRAM_PORT_FMC_D7,  SDRAM_FMC_D7,  GPIO_MODE_AF, GPIO_OTYPE_PUSHPULL, GPIO_SPEEDF_HIGH, GPIO_PULL_UP, GPIO_AF12_FMC);
    gpio_init(SDRAM_PORT_FMC_D8,  SDRAM_FMC_D8,  GPIO_MODE_AF, GPIO_OTYPE_PUSHPULL, GPIO_SPEEDF_HIGH, GPIO_PULL_UP, GPIO_AF12_FMC);
    gpio_init(SDRAM_PORT_FMC_D9,  SDRAM_FMC_D9,  GPIO_MODE_AF, GPIO_OTYPE_PUSHPULL, GPIO_SPEEDF_HIGH, GPIO_PULL_UP, GPIO_AF12_FMC);
    gpio_init(SDRAM_PORT_FMC_D10, SDRAM_FMC_D10, GPIO_MODE_AF, GPIO_OTYPE_PUSHPULL, GPIO_SPEEDF_HIGH, GPIO_PULL_UP, GPIO_AF12_FMC);
    gpio_init(SDRAM_PORT_FMC_D11, SDRAM_FMC_D11, GPIO_MODE_AF, GPIO_OTYPE_PUSHPULL, GPIO_SPEEDF_HIGH, GPIO_PULL_UP, GPIO_AF12_FMC);
    gpio_init(SDRAM_PORT_FMC_D12, SDRAM_FMC_D12, GPIO_MODE_AF, GPIO_OTYPE_PUSHPULL, GPIO_SPEEDF_HIGH, GPIO_PULL_UP, GPIO_AF12_FMC);
    gpio_init(SDRAM_PORT_FMC_D13, SDRAM_FMC_D13, GPIO_MODE_AF, GPIO_OTYPE_PUSHPULL, GPIO_SPEEDF_HIGH, GPIO_PULL_UP, GPIO_AF12_FMC);
    gpio_init(SDRAM_PORT_FMC_D14, SDRAM_FMC_D14, GPIO_MODE_AF, GPIO_OTYPE_PUSHPULL, GPIO_SPEEDF_HIGH, GPIO_PULL_UP, GPIO_AF12_FMC);
    gpio_init(SDRAM_PORT_FMC_D15, SDRAM_FMC_D15, GPIO_MODE_AF, GPIO_OTYPE_PUSHPULL, GPIO_SPEEDF_HIGH, GPIO_PULL_UP, GPIO_AF12_FMC);

    gpio_init(SDRAM_PORT_FMC_A0,  SDRAM_FMC_A0,  GPIO_MODE_AF, GPIO_OTYPE_PUSHPULL, GPIO_SPEEDF_HIGH, GPIO_PULL_UP, GPIO_AF12_FMC);
    gpio_init(SDRAM_PORT_FMC_A1,  SDRAM_FMC_A1,  GPIO_MODE_AF, GPIO_OTYPE_PUSHPULL, GPIO_SPEEDF_HIGH, GPIO_PULL_UP, GPIO_AF12_FMC);
    gpio_init(SDRAM_PORT_FMC_A2,  SDRAM_FMC_A2,  GPIO_MODE_AF, GPIO_OTYPE_PUSHPULL, GPIO_SPEEDF_HIGH, GPIO_PULL_UP, GPIO_AF12_FMC);
    gpio_init(SDRAM_PORT_FMC_A3,  SDRAM_FMC_A3,  GPIO_MODE_AF, GPIO_OTYPE_PUSHPULL, GPIO_SPEEDF_HIGH, GPIO_PULL_UP, GPIO_AF12_FMC);
    gpio_init(SDRAM_PORT_FMC_A4,  SDRAM_FMC_A4,  GPIO_MODE_AF, GPIO_OTYPE_PUSHPULL, GPIO_SPEEDF_HIGH, GPIO_PULL_UP, GPIO_AF12_FMC);
    gpio_init(SDRAM_PORT_FMC_A5,  SDRAM_FMC_A5,  GPIO_MODE_AF, GPIO_OTYPE_PUSHPULL, GPIO_SPEEDF_HIGH, GPIO_PULL_UP, GPIO_AF12_FMC);
    gpio_init(SDRAM_PORT_FMC_A6,  SDRAM_FMC_A6,  GPIO_MODE_AF, GPIO_OTYPE_PUSHPULL, GPIO_SPEEDF_HIGH, GPIO_PULL_UP, GPIO_AF12_FMC);
    gpio_init(SDRAM_PORT_FMC_A7,  SDRAM_FMC_A7,  GPIO_MODE_AF, GPIO_OTYPE_PUSHPULL, GPIO_SPEEDF_HIGH, GPIO_PULL_UP, GPIO_AF12_FMC);
    gpio_init(SDRAM_PORT_FMC_A8,  SDRAM_FMC_A8,  GPIO_MODE_AF, GPIO_OTYPE_PUSHPULL, GPIO_SPEEDF_HIGH, GPIO_PULL_UP, GPIO_AF12_FMC);
    gpio_init(SDRAM_PORT_FMC_A9,  SDRAM_FMC_A9,  GPIO_MODE_AF, GPIO_OTYPE_PUSHPULL, GPIO_SPEEDF_HIGH, GPIO_PULL_UP, GPIO_AF12_FMC);
    gpio_init(SDRAM_PORT_FMC_A10, SDRAM_FMC_A10, GPIO_MODE_AF, GPIO_OTYPE_PUSHPULL, GPIO_SPEEDF_HIGH, GPIO_PULL_UP, GPIO_AF12_FMC);
    gpio_init(SDRAM_PORT_FMC_A11, SDRAM_FMC_A11, GPIO_MODE_AF, GPIO_OTYPE_PUSHPULL, GPIO_SPEEDF_HIGH, GPIO_PULL_UP, GPIO_AF12_FMC);
    gpio_init(SDRAM_PORT_FMC_A12, SDRAM_FMC_A12, GPIO_MODE_AF, GPIO_OTYPE_PUSHPULL, GPIO_SPEEDF_HIGH, GPIO_PULL_UP, GPIO_AF12_FMC);

    gpio_init(SDRAM_PORT_FMC_CS,     SDRAM_FMC_CS,     GPIO_MODE_AF, GPIO_OTYPE_PUSHPULL, GPIO_SPEEDF_HIGH, GPIO_PULL_UP, GPIO_AF12_FMC);
    gpio_init(SDRAM_PORT_FMC_SDNRAS, SDRAM_FMC_SDNRAS, GPIO_MODE_AF, GPIO_OTYPE_PUSHPULL, GPIO_SPEEDF_HIGH, GPIO_PULL_UP, GPIO_AF12_FMC);
    gpio_init(SDRAM_PORT_FMC_BA0,    SDRAM_FMC_BA0,    GPIO_MODE_AF, GPIO_OTYPE_PUSHPULL, GPIO_SPEEDF_HIGH, GPIO_PULL_UP, GPIO_AF12_FMC);
    gpio_init(SDRAM_PORT_FMC_BA1,    SDRAM_FMC_BA1,    GPIO_MODE_AF, GPIO_OTYPE_PUSHPULL, GPIO_SPEEDF_HIGH, GPIO_PULL_UP, GPIO_AF12_FMC);
    gpio_init(SDRAM_PORT_FMC_SDCKE0, SDRAM_FMC_SDCKE0, GPIO_MODE_AF, GPIO_OTYPE_PUSHPULL, GPIO_SPEEDF_HIGH, GPIO_PULL_UP, GPIO_AF12_FMC);
    gpio_init(SDRAM_PORT_FMC_SDNE0,  SDRAM_FMC_SDNE0,  GPIO_MODE_AF, GPIO_OTYPE_PUSHPULL, GPIO_SPEEDF_HIGH, GPIO_PULL_UP, GPIO_AF12_FMC);
    gpio_init(SDRAM_PORT_FMC_SDNWE,  SDRAM_FMC_SDNWE,  GPIO_MODE_AF, GPIO_OTYPE_PUSHPULL, GPIO_SPEEDF_HIGH, GPIO_PULL_UP, GPIO_AF12_FMC);
    gpio_init(SDRAM_PORT_FMC_SDCLK,  SDRAM_FMC_SDCLK,  GPIO_MODE_AF, GPIO_OTYPE_PUSHPULL, GPIO_SPEEDF_HIGH, GPIO_PULL_UP, GPIO_AF12_FMC);
    gpio_init(SDRAM_PORT_FMC_SDNCAS, SDRAM_FMC_SDNCAS, GPIO_MODE_AF, GPIO_OTYPE_PUSHPULL, GPIO_SPEEDF_HIGH, GPIO_PULL_UP, GPIO_AF12_FMC);
    gpio_init(SDRAM_PORT_FMC_NBL0,   SDRAM_FMC_NBL0,   GPIO_MODE_AF, GPIO_OTYPE_PUSHPULL, GPIO_SPEEDF_HIGH, GPIO_PULL_UP, GPIO_AF12_FMC);
    gpio_init(SDRAM_PORT_FMC_NBL1,   SDRAM_FMC_NBL1,   GPIO_MODE_AF, GPIO_OTYPE_PUSHPULL, GPIO_SPEEDF_HIGH, GPIO_PULL_UP, GPIO_AF12_FMC);
}


//------------------------------------------------------------------------------
// FMC - sdram chip init
//------------------------------------------------------------------------------
void sdram_fmc_init(void)
{
    register uint32_t tmpreg = 0;
    register __IO uint32_t index;
       
    // FMC enable
    FMC_Bank1_R->BTCR[0] |= FMC_BCR1_FMCEN;
    
	/* Configure and enable SDRAM bank1 */
    FMC_Bank5_6_R->SDCR[0]  = FMC_SDCRx_NC_0  // 9  bit NC[1:0]: Number of column address bits 
                          | FMC_SDCRx_NR_1    // 13 bit NR[1:0]: Number of row address bits
//                          | FMC_SDCRx_NR_0    // 12 bit NR[1:0]: Number of row address bits
                          | FMC_SDCRx_MWID_0  // 16 bit MWID[1:0]: Memory data bus width.
                          | FMC_SDCRx_NB      // 4 bank NB: Number of internal banks
                          | FMC_SDCRx_CAS_1   // 2 CAS[1:0]: CAS Latency
//                          | FMC_SDCRx_CAS_1 | FMC_SDCRx_CAS_0 // 3 CAS[1:0]: CAS Latency
                                              // = 0 Bit 9 WP: Write protection
                          | FMC_SDCRx_SDCLK_1 // 200 MHz (10: SDCLK period = 2 x HCLK3 periods) SDCLK[1:0]: SDRAM clock configuration
                          | FMC_SDCRx_RBURST  // 1 Bit 12 RBURST: Burst read
                          | FMC_SDCRx_RPIPE_0;//(01: One fmc_ker_ck clock cycle delay) Bits 14:13 RPIPE[1:0]: Read pipe
    
    FMC_Bank5_6_R->SDTR[0]  = FMC_SDTRx_TMRD_0  // (0001: 2 cycles) Bits 3:0 TMRD[3:0]: Load Mode Register to Active
                          | FMC_SDTRx_TXSR_1 | FMC_SDTRx_TXSR_2  // (7 7.5ns) TXSR[3:0]: Exit Self-refresh delay 
                          | FMC_SDTRx_TRAS_1 | FMC_SDTRx_TRAS_0 // (4 clk, 44ns) Bits 11:8 TRAS[3:0]: Self refresh time
                          | FMC_SDTRx_TRC_1 | FMC_SDTRx_TRC_2  // (7 clk, 66 ns) Bits 15:12 TRC[3:0]: Row cycle delay
                          | FMC_SDTRx_TWR_0   // (2 clk) Bits 19:16 TWR[3:0]: Recovery delay
                          | FMC_SDTRx_TRP_0   // (2 clk) Bits 23:20 TRP[3:0]: Row precharge delay
                          | FMC_SDTRx_TRCD_0; // (2 clk) Bits 27:24 TRCD[3:0]: Row to column delay

    // FMC enable
    FMC_Bank1_R->BTCR[0] |= FMC_BCR1_FMCEN;
    
    /* SDRAM initialization sequence */
    /* Clock enable command */
    FMC_Bank5_6_R->SDCMR  = FMC_SDCMR_MODE_0  // (001: Clock Configuration Enable) Bits 2:0 MODE[2:0]: Command mode 
                        | FMC_SDCMR_CTB1;   // (1: Command issued to SDRAM Bank 1) Bit 4 CTB1: Command Target Bank 1
   

    /* Delay ~100 us */
    delay_ms(2);
  
    /* Precharge All command */
    FMC_Bank5_6_R->SDCMR  = FMC_SDCMR_MODE_1  // (010: PALL (“All Bank Precharge”) command) Bits 2:0 MODE[2:0]: Command mode 
                        | FMC_SDCMR_CTB1;   // (1: Command issued to SDRAM Bank 1) Bit 4 CTB1: Command Target Bank 1
    
    /* Auto refresh command */
    FMC_Bank5_6_R->SDCMR  = FMC_SDCMR_MODE_1 | FMC_SDCMR_MODE_0  // (011: Auto-refresh command) Bits 2:0 MODE[2:0]: Command mode 
                        | FMC_SDCMR_CTB1                       // (1: Command issued to SDRAM Bank 1) Bit 4 CTB1: Command Target Bank 1
                        | FMC_SDCMR_NRFS_0 | FMC_SDCMR_NRFS_1 | FMC_SDCMR_NRFS_2; // (8) Bits 8:5 NRFS[3:0]: Number of Auto-refresh

    /* MRD register program */
    FMC_Bank5_6_R->SDCMR  = FMC_SDCMR_MODE_2  // (100: Load Mode Register) Bits 2:0 MODE[2:0]: Command mode 
                        | FMC_SDCMR_CTB1    // (1: Command issued to SDRAM Bank 1) Bit 4 CTB1: Command Target Bank 1
                        | ((0x220) << FMC_SDCMR_MRD_Pos);  // ( burst=1, cas=2, bt=Sequential, wb=1=Single Location Access) Bits 21:9 MRD[12:0]: Mode Register definition
//                        | ((0x230) << FMC_SDCMR_MRD_Pos)  // ( burst=1, cas=3, bt=Sequential, wb=1=Single Location Access) Bits 21:9 MRD[12:0]: Mode Register definition
    
    //  Refresh rate 64 ms / 8196 rows  = 7.81 us
    //  7.81 * 100 Mhz = 781.00
    //  value = 781 - 20 = 761
    FMC_Bank5_6_R->SDRTR = (tmpreg | (761 << FMC_SDRTR_COUNT_Pos));
 
}

