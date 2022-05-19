#include "stm32h743xx.h"
#include "rcc_h743.h"


//------------------------------------------------------------------------------
// HSE Base clk init
// Starkit Board H743
// HSE = 25 MHz
// SYSCLK = 400 MHz
// DIVM1 = / 2
// DIVN1 = * 64
// DIVP1 = / 2
// HPRE  = / 2
// PLL1 VCO = 0: Wide VCO range: 192 to 836 MHz (25MHz/2 * 64 = 800 MHz)
//------------------------------------------------------------------------------
void hse_clk_init(void)
{

    
    rcc_clk_en(&RCC->APB4ENR, RCC_APB4ENR_SYSCFGEN);
    
    SYSCFG->PWRCR |= SYSCFG_PWRCR_ODEN;
    
    PWR->CR3 |= PWR_CR3_LDOEN;
    while((PWR->CSR1 & PWR_CSR1_ACTVOSRDY) == 0) {}
  
    // VOS -> 11: Scale 1
    PWR->D3CR = (PWR_D3CR_VOS_0 | PWR_D3CR_VOS_1);
    while ((PWR->D3CR & PWR_D3CR_VOSRDY) == 0) {}
    
	RCC->CR |= RCC_CR_HSEON; 							// Enable HSE
	while (!(RCC->CR & RCC_CR_HSERDY));

	FLASH->ACR = FLASH_ACR_LATENCY_4WS | FLASH_ACR_WRHIGHFREQ_1; // LATENCY = 4 wait, WRHIGHFREQ = 2'b10

	RCC->PLLCFGR |= RCC_PLLCFGR_PLL1RGE_3; //25MHz / 2 = 12.5 MHz -> 11: The PLL1 input (ref1_ck) clock range frequency is between 8 and 16 MHz
    RCC->PLLCFGR |= RCC_PLLCFGR_DIVP1EN; // ENABLE P1
    
    RCC->PLLCKSELR |= RCC_PLLCKSELR_PLLSRC_HSE;	         // Source HSE
    RCC->PLLCKSELR |= RCC_PLLCKSELR_DIVM1_1;             // DIVM1 = /2
    
    RCC->PLL1DIVR  |= ((64 - 1) << RCC_PLL1DIVR_N1_Pos); // * DIVN1
    RCC->PLL1DIVR  |= ((2 - 1)  << RCC_PLL1DIVR_P1_Pos); // / DIVP1
    
    // PLL = 400 MHz
	RCC->CR |= RCC_CR_PLLON;
	while((RCC->CR & RCC_CR_PLLRDY) == 0) {}

    // D1CPRE = 0 => div / 1,  HCLK3 = 200 MHz
    RCC->D1CFGR |= RCC_D1CFGR_HPRE_DIV2; // HPRE = 2, 400MHz / 2 = 200 MHz // CPU CLK = 200 MHz
    RCC->D1CFGR |= RCC_D1CFGR_D1PPRE_DIV2; // D1PPRE = 2, 200 MHz / 2 = 100 MHz -> APB3 = 100 MHz
    
    RCC->D2CFGR |= RCC_D2CFGR_D2PPRE1_DIV2; // HCLK3 / D2PPRE1(2) = 100 MHz (APB1, *2 = APB1Timer(200MHz))
    RCC->D2CFGR |= RCC_D2CFGR_D2PPRE2_DIV2; // HCLK3 / D2PPRE2(2) = 100 MHz (APB2, *2 = APB2Timer(200MHz))
    
    // AHB1, AHB2 = 200 MHz
    // AHB4 = 200 MHz
    
    RCC->D3CFGR |= RCC_D3CFGR_D3PPRE_DIV2; // HCLK3 / D2PPRE3(2) = 100 MHz (APB4)
    //--------------------------------------------------------------------------
    
	RCC->CFGR &= ~RCC_CFGR_SW;
	RCC->CFGR |= RCC_CFGR_SW_PLL1; 									// Select source SYSCLK = PLL
	while ((RCC->CFGR & RCC_CFGR_SWS_Msk) != RCC_CFGR_SWS_PLL1) {} 	// Wait till PLL is used

}
