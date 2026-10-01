/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : STM32F103C8T6 PIC16F1704 烧录器主程序
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "icsp.h"
#include "uart.h"
#include "protocol.h"
#include "uprintf.h"
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */
static uint32_t heartbeat_last = 0;
/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */
static void AppClock_Boost(void);
static void App_Init(void);
/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/*
 * .ioc 默认只配了 HSI 8MHz。这里在运行时把主频提升到
 * HSE 8MHz x PLL9 = 72MHz (Blue Pill 标准); HSE 失效则回退 HSI/2 x PLL16 = 64MHz。
 * ICSP 时序基于 DWT 周期计数器, 使用 SystemCoreClock 自适应, 与主频无耦合。
 */
static void AppClock_Boost(void)
{
    RCC_OscInitTypeDef osc = {0};
    RCC_ClkInitTypeDef clk = {0};
    HAL_StatusTypeDef st;

    __HAL_RCC_PWR_CLK_ENABLE();

    osc.OscillatorType = RCC_OSCILLATORTYPE_HSE;
    osc.HSEState = RCC_HSE_ON;
    osc.PLL.PLLState = RCC_PLL_ON;
    osc.PLL.PLLSource = RCC_PLLSOURCE_HSE;
    osc.PLL.PLLMUL = RCC_PLL_MUL9;
    st = HAL_RCC_OscConfig(&osc);

    if (st != HAL_OK) {
        /* HSE 异常: 回退内部 HSI/2 x16 = 64MHz */
        osc.OscillatorType = RCC_OSCILLATORTYPE_HSI;
        osc.HSEState = RCC_HSE_OFF;
        osc.HSIState = RCC_HSI_ON;
        osc.PLL.PLLSource = RCC_PLLSOURCE_HSI_DIV2;
        osc.PLL.PLLMUL = RCC_PLL_MUL16;
        if (HAL_RCC_OscConfig(&osc) != HAL_OK) {
            Error_Handler();
        }
    }

    clk.ClockType = RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK |
                    RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2;
    clk.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
    clk.AHBCLKDivider = RCC_SYSCLK_DIV1;
    clk.APB1CLKDivider = RCC_HCLK_DIV2;     /* APB1 max 36MHz */
    clk.APB2CLKDivider = RCC_HCLK_DIV1;
    if (HAL_RCC_ClockConfig(&clk, FLASH_LATENCY_2) != HAL_OK) {
        Error_Handler();
    }
}

static void App_Init(void)
{
    icsp_delay_init();
    icsp_gpio_init();
    uart_init(115200U);
    protocol_init();

    uprintf("\r\n=======================================================\r\n");
    uprintf("   AntMiner PIC16F1704 ICSP Flasher Tool (STM32F103)   \r\n");
    uprintf("   Firmware: v2.0.0 ST | SysClk: %lu MHz | Baud: 115200\r\n",
            (unsigned long)(SystemCoreClock / 1000000U));
    uprintf("   USART1: PA9 TX / PA10 RX                            \r\n");
    uprintf("-------------------------------------------------------\r\n");
    uprintf("   Wiring to target PIC16F1704 (14-pin):               \r\n");
    uprintf("     PA0 -> Pin 4  RA3/MCLR/VPP                        \r\n");
    uprintf("     PA1 -> Pin 13 RA0/ICSPDAT (DO NOT wire Pin 10!)   \r\n");
    uprintf("     PA2 -> Pin 12 RA1/ICSPCLK (DO NOT wire Pin 11!)   \r\n");
    uprintf("     PA3 -> VDD_EN (optional target power control)     \r\n");
    uprintf("     3V3 -> Pin 1  VDD     GND -> Pin 14 VSS           \r\n");
    uprintf("-------------------------------------------------------\r\n");
    uprintf("   Offline: press PB9 key to burn embedded firmware    \r\n");
    uprintf("   Online:  send 'HELP' or use host_tool/*.py          \r\n");
    uprintf("=======================================================\r\n\r\n");
}

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{

  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */
  AppClock_Boost();
  App_Init();
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
    /* 串口协议处理 (二进制封包 + CLI) */
    protocol_process();

    /* PB9 一键脱机烧录 (低电平有效, 简单消抖) */
    if (KEY_IS_PRESSED()) {
        icsp_delay_ms(20);
        if (KEY_IS_PRESSED()) {
            uprintf("\r\n[KEY] Standalone One-Key Offline Burn Triggered!\r\n");
            LED_ON();

            icsp_status_t status = icsp_burn_default_firmware();
            if (status == ICSP_OK) {
                uprintf("[SUCCESS] Target PIC16F1704 Flashed & Verified 100%% OK!\r\n");
                icsp_delay_ms(1500);
                LED_OFF();
            } else {
                uprintf("[FAIL] Burn Failed with Error Code %d! Check connections.\r\n", status);
                for (int i = 0; i < 10; i++) {
                    LED_TOGGLE();
                    icsp_delay_ms(100);
                }
                LED_OFF();
            }

            /* 等待按键释放 */
            while (KEY_IS_PRESSED()) {
                icsp_delay_ms(10);
            }
        }
    }

    /* 心跳 LED: 每 1s 翻转 (烧录失败快闪由上述逻辑处理) */
    uint32_t now = HAL_GetTick();
    if ((now - heartbeat_last) >= 1000U) {
        heartbeat_last = now;
        LED_TOGGLE();
    }
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  /* USER CODE BEGIN MX_GPIO_Init_1 */

  /* USER CODE END MX_GPIO_Init_1 */

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOD_CLK_ENABLE();

  /* USER CODE BEGIN MX_GPIO_Init_2 */

  /* USER CODE END MX_GPIO_Init_2 */
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  __disable_irq();
  LED_OFF();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: uprintf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
