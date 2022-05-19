
//------------------------------------------------------------------------------
// HSE = 25 MHz
// SYSCLK PLL(HSE) => 25 / 2 * 64 / 2 = 400 MHz
#define SYSCLK_HZ        (400000000)
#define HCLK3_CLK_HZ     (200000000)
#define CPU_CLK_HZ       (200000000)
#define APB3_CLK_HZ      (100000000)
    
#define APB1_CLK_HZ      (100000000)
#define APB1TIMER_CLK_HZ (200000000)
#define APB2_CLK_HZ      (100000000)
#define APB2TIMER_CLK_HZ (200000000)

#define AXI_CLK_HZ       (200000000)
    
#define AHB1_CLK_HZ      (200000000)
#define AHB2_CLK_HZ      (200000000)
#define AHB4_CLK_HZ      (200000000)
#define APB4_CLK_HZ      (100000000)

//------------------------------------------------------------------------------


void hse_clk_init (void);


