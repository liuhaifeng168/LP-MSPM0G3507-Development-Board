/*
 * Copyright (c) 2023, Texas Instruments Incorporated - http://www.ti.com
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*
 *  ============ ti_msp_dl_config.h =============
 *  Configured MSPM0 DriverLib module declarations
 *
 *  DO NOT EDIT - This file is generated for the MSPM0G350X
 *  by the SysConfig tool.
 */
#ifndef ti_msp_dl_config_h
#define ti_msp_dl_config_h

#define CONFIG_MSPM0G350X

#if defined(__ti_version__) || defined(__TI_COMPILER_VERSION__)
#define SYSCONFIG_WEAK __attribute__((weak))
#elif defined(__IAR_SYSTEMS_ICC__)
#define SYSCONFIG_WEAK __weak
#elif defined(__GNUC__)
#define SYSCONFIG_WEAK __attribute__((weak))
#endif

#include <ti/devices/msp/msp.h>
#include <ti/driverlib/driverlib.h>
#include <ti/driverlib/m0p/dl_core.h>

#ifdef __cplusplus
extern "C" {
#endif

/*
 *  ======== SYSCFG_DL_init ========
 *  Perform all required MSP DL initialization
 *
 *  This function should be called once at a point before any use of
 *  MSP DL.
 */


/* clang-format off */

#define POWER_STARTUP_DELAY                                                (16)


#define CPUCLK_FREQ                                                     32000000




/* Port definition for Pin Group LED1 */
#define LED1_PORT                                                        (GPIOA)

/* Defines for PA0: GPIOA.0 with pinCMx 1 on package pin 33 */
#define LED1_PA0_PIN                                             (DL_GPIO_PIN_0)
#define LED1_PA0_IOMUX                                            (IOMUX_PINCM1)
/* Port definition for Pin Group LED3 */
#define LED3_PORT                                                        (GPIOB)

/* Defines for PB26: GPIOB.26 with pinCMx 57 on package pin 28 */
#define LED3_PB26_PIN                                           (DL_GPIO_PIN_26)
#define LED3_PB26_IOMUX                                          (IOMUX_PINCM57)
/* Port definition for Pin Group LED2 */
#define LED2_PORT                                                        (GPIOB)

/* Defines for PB22: GPIOB.22 with pinCMx 50 on package pin 21 */
#define LED2_PB22_PIN                                           (DL_GPIO_PIN_22)
#define LED2_PB22_IOMUX                                          (IOMUX_PINCM50)
/* Port definition for Pin Group LED4 */
#define LED4_PORT                                                        (GPIOB)

/* Defines for PB27: GPIOB.27 with pinCMx 58 on package pin 29 */
#define LED4_PB27_PIN                                           (DL_GPIO_PIN_27)
#define LED4_PB27_IOMUX                                          (IOMUX_PINCM58)



/* clang-format on */

void SYSCFG_DL_init(void);
void SYSCFG_DL_initPower(void);
void SYSCFG_DL_GPIO_init(void);
void SYSCFG_DL_SYSCTL_init(void);

void SYSCFG_DL_SYSTICK_init(void);


#ifdef __cplusplus
}
#endif

#endif /* ti_msp_dl_config_h */
