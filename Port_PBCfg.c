/******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port_PBcfg.c
 *
 * Description: Post Build Configuration Source file for TM4C123GH6PM Microcontroller - Port Driver
 *
 * Author: Karim Mohamed Amin
 ******************************************************************************/

#include "Port.h"

/*
 * Module Version 1.0.0
 */
#define PORT_PBCFG_SW_MAJOR_VERSION              (1U)
#define PORT_PBCFG_SW_MINOR_VERSION              (0U)
#define PORT_PBCFG_SW_PATCH_VERSION              (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_PBCFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define PORT_PBCFG_AR_RELEASE_MINOR_VERSION     (0U)
#define PORT_PBCFG_AR_RELEASE_PATCH_VERSION     (3U)

/* AUTOSAR Version checking between Dio_PBcfg.c and Dio.h files */
#if ((PORT_PBCFG_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of PBcfg.c does not match the expected AUTOSAR version"
#endif

/* Software Version checking between Dio_PBcfg.c and Dio.h files */
#if ((PORT_PBCFG_SW_MAJOR_VERSION != PORT_SW_MAJOR_VERSION)\
 ||  (PORT_PBCFG_SW_MINOR_VERSION != PORT_SW_MINOR_VERSION)\
 ||  (PORT_PBCFG_SW_PATCH_VERSION != PORT_SW_PATCH_VERSION))
  #error "The SW version of PBcfg.c does not match the expected Software version"
#endif

/* PB structure used with Port_Init API */
const Port_ConfigType Port_Configuration = {
    PORT_A_ID,PORT_PIN_A0,PORT_PIN_A0_DIR,PORT_PIN_A0_MODE,PORT_PIN_A0_DIR_CHANGE,PORT_PIN_A0_MODE_CHANGE,PORT_PIN_A0_RESISTOR,PORT_PIN_A0_INIT_VALUE,
    PORT_A_ID,PORT_PIN_A1,PORT_PIN_A1_DIR,PORT_PIN_A1_MODE,PORT_PIN_A1_DIR_CHANGE,PORT_PIN_A1_MODE_CHANGE,PORT_PIN_A1_RESISTOR,PORT_PIN_A1_INIT_VALUE,
    PORT_A_ID,PORT_PIN_A2,PORT_PIN_A2_DIR,PORT_PIN_A2_MODE,PORT_PIN_A2_DIR_CHANGE,PORT_PIN_A2_MODE_CHANGE,PORT_PIN_A2_RESISTOR,PORT_PIN_A2_INIT_VALUE,
    PORT_A_ID,PORT_PIN_A3,PORT_PIN_A3_DIR,PORT_PIN_A3_MODE,PORT_PIN_A3_DIR_CHANGE,PORT_PIN_A3_MODE_CHANGE,PORT_PIN_A3_RESISTOR,PORT_PIN_A3_INIT_VALUE,
    PORT_A_ID,PORT_PIN_A4,PORT_PIN_A4_DIR,PORT_PIN_A4_MODE,PORT_PIN_A4_DIR_CHANGE,PORT_PIN_A4_MODE_CHANGE,PORT_PIN_A4_RESISTOR,PORT_PIN_A4_INIT_VALUE,
    PORT_A_ID,PORT_PIN_A5,PORT_PIN_A5_DIR,PORT_PIN_A5_MODE,PORT_PIN_A5_DIR_CHANGE,PORT_PIN_A5_MODE_CHANGE,PORT_PIN_A5_RESISTOR,PORT_PIN_A5_INIT_VALUE,
    PORT_A_ID,PORT_PIN_A6,PORT_PIN_A6_DIR,PORT_PIN_A6_MODE,PORT_PIN_A6_DIR_CHANGE,PORT_PIN_A6_MODE_CHANGE,PORT_PIN_A6_RESISTOR,PORT_PIN_A6_INIT_VALUE,
    PORT_A_ID,PORT_PIN_A7,PORT_PIN_A7_DIR,PORT_PIN_A7_MODE,PORT_PIN_A7_DIR_CHANGE,PORT_PIN_A7_MODE_CHANGE,PORT_PIN_A7_RESISTOR,PORT_PIN_A7_INIT_VALUE,
    
    PORT_B_ID,PORT_PIN_B0,PORT_PIN_B0_DIR,PORT_PIN_B0_MODE,PORT_PIN_B0_DIR_CHANGE,PORT_PIN_B0_MODE_CHANGE,PORT_PIN_B0_RESISTOR,PORT_PIN_B0_INIT_VALUE,
    PORT_B_ID,PORT_PIN_B1,PORT_PIN_B1_DIR,PORT_PIN_B1_MODE,PORT_PIN_B1_DIR_CHANGE,PORT_PIN_B1_MODE_CHANGE,PORT_PIN_B1_RESISTOR,PORT_PIN_B1_INIT_VALUE,
    PORT_B_ID,PORT_PIN_B2,PORT_PIN_B2_DIR,PORT_PIN_B2_MODE,PORT_PIN_B2_DIR_CHANGE,PORT_PIN_B2_MODE_CHANGE,PORT_PIN_B2_RESISTOR,PORT_PIN_B2_INIT_VALUE,
    PORT_B_ID,PORT_PIN_B3,PORT_PIN_B3_DIR,PORT_PIN_B3_MODE,PORT_PIN_B3_DIR_CHANGE,PORT_PIN_B3_MODE_CHANGE,PORT_PIN_B3_RESISTOR,PORT_PIN_B3_INIT_VALUE,
    PORT_B_ID,PORT_PIN_B4,PORT_PIN_B4_DIR,PORT_PIN_B4_MODE,PORT_PIN_B4_DIR_CHANGE,PORT_PIN_B4_MODE_CHANGE,PORT_PIN_B4_RESISTOR,PORT_PIN_B4_INIT_VALUE,
    PORT_B_ID,PORT_PIN_B5,PORT_PIN_B5_DIR,PORT_PIN_B5_MODE,PORT_PIN_B5_DIR_CHANGE,PORT_PIN_B5_MODE_CHANGE,PORT_PIN_B5_RESISTOR,PORT_PIN_B5_INIT_VALUE,
    PORT_B_ID,PORT_PIN_B6,PORT_PIN_B6_DIR,PORT_PIN_B6_MODE,PORT_PIN_B6_DIR_CHANGE,PORT_PIN_B6_MODE_CHANGE,PORT_PIN_B6_RESISTOR,PORT_PIN_B6_INIT_VALUE,
    PORT_B_ID,PORT_PIN_B7,PORT_PIN_B7_DIR,PORT_PIN_B7_MODE,PORT_PIN_B7_DIR_CHANGE,PORT_PIN_B7_MODE_CHANGE,PORT_PIN_B7_RESISTOR,PORT_PIN_B7_INIT_VALUE,
       
    PORT_C_ID,PORT_PIN_C0,PORT_PIN_C0_DIR,PORT_PIN_C0_MODE,PORT_PIN_C0_DIR_CHANGE,PORT_PIN_C0_MODE_CHANGE,PORT_PIN_C0_RESISTOR,PORT_PIN_C0_INIT_VALUE,
    PORT_C_ID,PORT_PIN_C1,PORT_PIN_C1_DIR,PORT_PIN_C1_MODE,PORT_PIN_C1_DIR_CHANGE,PORT_PIN_C1_MODE_CHANGE,PORT_PIN_C1_RESISTOR,PORT_PIN_C1_INIT_VALUE,
    PORT_C_ID,PORT_PIN_C2,PORT_PIN_C2_DIR,PORT_PIN_C2_MODE,PORT_PIN_C2_DIR_CHANGE,PORT_PIN_C2_MODE_CHANGE,PORT_PIN_C2_RESISTOR,PORT_PIN_C2_INIT_VALUE,
    PORT_C_ID,PORT_PIN_C3,PORT_PIN_C3_DIR,PORT_PIN_C3_MODE,PORT_PIN_C3_DIR_CHANGE,PORT_PIN_C3_MODE_CHANGE,PORT_PIN_C3_RESISTOR,PORT_PIN_C3_INIT_VALUE,
    PORT_C_ID,PORT_PIN_C4,PORT_PIN_C4_DIR,PORT_PIN_C4_MODE,PORT_PIN_C4_DIR_CHANGE,PORT_PIN_C4_MODE_CHANGE,PORT_PIN_C4_RESISTOR,PORT_PIN_C4_INIT_VALUE,
    PORT_C_ID,PORT_PIN_C5,PORT_PIN_C5_DIR,PORT_PIN_C5_MODE,PORT_PIN_C5_DIR_CHANGE,PORT_PIN_C5_MODE_CHANGE,PORT_PIN_C5_RESISTOR,PORT_PIN_C5_INIT_VALUE,
    PORT_C_ID,PORT_PIN_C6,PORT_PIN_C6_DIR,PORT_PIN_C6_MODE,PORT_PIN_C6_DIR_CHANGE,PORT_PIN_C6_MODE_CHANGE,PORT_PIN_C6_RESISTOR,PORT_PIN_C6_INIT_VALUE,
    PORT_C_ID,PORT_PIN_C7,PORT_PIN_C7_DIR,PORT_PIN_C7_MODE,PORT_PIN_C7_DIR_CHANGE,PORT_PIN_C7_MODE_CHANGE,PORT_PIN_C7_RESISTOR,PORT_PIN_C7_INIT_VALUE,
    
    PORT_D_ID,PORT_PIN_D0,PORT_PIN_D0_DIR,PORT_PIN_D0_MODE,PORT_PIN_D0_DIR_CHANGE,PORT_PIN_D0_MODE_CHANGE,PORT_PIN_D0_RESISTOR,PORT_PIN_D0_INIT_VALUE,
    PORT_D_ID,PORT_PIN_D1,PORT_PIN_D1_DIR,PORT_PIN_D1_MODE,PORT_PIN_D1_DIR_CHANGE,PORT_PIN_D1_MODE_CHANGE,PORT_PIN_D1_RESISTOR,PORT_PIN_D1_INIT_VALUE,
    PORT_D_ID,PORT_PIN_D2,PORT_PIN_D2_DIR,PORT_PIN_D2_MODE,PORT_PIN_D2_DIR_CHANGE,PORT_PIN_D2_MODE_CHANGE,PORT_PIN_D2_RESISTOR,PORT_PIN_D2_INIT_VALUE,
    PORT_D_ID,PORT_PIN_D3,PORT_PIN_D3_DIR,PORT_PIN_D3_MODE,PORT_PIN_D3_DIR_CHANGE,PORT_PIN_D3_MODE_CHANGE,PORT_PIN_D3_RESISTOR,PORT_PIN_D3_INIT_VALUE,
    PORT_D_ID,PORT_PIN_D4,PORT_PIN_D4_DIR,PORT_PIN_D4_MODE,PORT_PIN_D4_DIR_CHANGE,PORT_PIN_D4_MODE_CHANGE,PORT_PIN_D4_RESISTOR,PORT_PIN_D4_INIT_VALUE,
    PORT_D_ID,PORT_PIN_D5,PORT_PIN_D5_DIR,PORT_PIN_D5_MODE,PORT_PIN_D5_DIR_CHANGE,PORT_PIN_D5_MODE_CHANGE,PORT_PIN_D5_RESISTOR,PORT_PIN_D5_INIT_VALUE,
    PORT_D_ID,PORT_PIN_D6,PORT_PIN_D6_DIR,PORT_PIN_D6_MODE,PORT_PIN_D6_DIR_CHANGE,PORT_PIN_D6_MODE_CHANGE,PORT_PIN_D6_RESISTOR,PORT_PIN_D6_INIT_VALUE,
    PORT_D_ID,PORT_PIN_D7,PORT_PIN_D7_DIR,PORT_PIN_D7_MODE,PORT_PIN_D7_DIR_CHANGE,PORT_PIN_D7_MODE_CHANGE,PORT_PIN_D7_RESISTOR,PORT_PIN_D7_INIT_VALUE,
    
    PORT_E_ID,PORT_PIN_E0,PORT_PIN_E0_DIR,PORT_PIN_E0_MODE,PORT_PIN_E0_DIR_CHANGE,PORT_PIN_E0_MODE_CHANGE,PORT_PIN_E0_RESISTOR,PORT_PIN_E0_INIT_VALUE,
    PORT_E_ID,PORT_PIN_E1,PORT_PIN_E1_DIR,PORT_PIN_E1_MODE,PORT_PIN_E1_DIR_CHANGE,PORT_PIN_E1_MODE_CHANGE,PORT_PIN_E1_RESISTOR,PORT_PIN_E1_INIT_VALUE,
    PORT_E_ID,PORT_PIN_E2,PORT_PIN_E2_DIR,PORT_PIN_E2_MODE,PORT_PIN_E2_DIR_CHANGE,PORT_PIN_E2_MODE_CHANGE,PORT_PIN_E2_RESISTOR,PORT_PIN_E2_INIT_VALUE,
    PORT_E_ID,PORT_PIN_E3,PORT_PIN_E3_DIR,PORT_PIN_E3_MODE,PORT_PIN_E3_DIR_CHANGE,PORT_PIN_E3_MODE_CHANGE,PORT_PIN_E3_RESISTOR,PORT_PIN_E3_INIT_VALUE,
    PORT_E_ID,PORT_PIN_E4,PORT_PIN_E4_DIR,PORT_PIN_E4_MODE,PORT_PIN_E4_DIR_CHANGE,PORT_PIN_E4_MODE_CHANGE,PORT_PIN_E4_RESISTOR,PORT_PIN_E4_INIT_VALUE,
    PORT_E_ID,PORT_PIN_E5,PORT_PIN_E5_DIR,PORT_PIN_E5_MODE,PORT_PIN_E5_DIR_CHANGE,PORT_PIN_E5_MODE_CHANGE,PORT_PIN_E5_RESISTOR,PORT_PIN_E5_INIT_VALUE,
    
    PORT_F_ID,PORT_PIN_F0,PORT_PIN_F0_DIR,PORT_PIN_F0_MODE,PORT_PIN_F0_DIR_CHANGE,PORT_PIN_F0_MODE_CHANGE,PORT_PIN_F0_RESISTOR,PORT_PIN_F0_INIT_VALUE,
    PORT_F_ID,PORT_PIN_F1,PORT_PIN_F1_DIR,PORT_PIN_F1_MODE,PORT_PIN_F1_DIR_CHANGE,PORT_PIN_F1_MODE_CHANGE,PORT_PIN_F1_RESISTOR,PORT_PIN_F1_INIT_VALUE,
    PORT_F_ID,PORT_PIN_F2,PORT_PIN_F2_DIR,PORT_PIN_F2_MODE,PORT_PIN_F2_DIR_CHANGE,PORT_PIN_F2_MODE_CHANGE,PORT_PIN_F2_RESISTOR,PORT_PIN_F2_INIT_VALUE,
    PORT_F_ID,PORT_PIN_F3,PORT_PIN_F3_DIR,PORT_PIN_F3_MODE,PORT_PIN_F3_DIR_CHANGE,PORT_PIN_F3_MODE_CHANGE,PORT_PIN_F3_RESISTOR,PORT_PIN_F3_INIT_VALUE,
    PORT_F_ID,PORT_PIN_F4,PORT_PIN_F4_DIR,PORT_PIN_F4_MODE,PORT_PIN_F4_DIR_CHANGE,PORT_PIN_F4_MODE_CHANGE,PORT_PIN_F4_RESISTOR,PORT_PIN_F4_INIT_VALUE,
};
/* this array to hold the index of the configured pins in the configuration structure */
const uint8 Port_configured_pins[PORT_NUM_OF_CONFIG_PINS] = {
  PORT_PINA0_INDEX,
  PORT_PINA1_INDEX,
  PORT_PINF1_INDEX,
  PORT_PINF2_INDEX,
  PORT_PINF3_INDEX,
  PORT_PINB4_INDEX,
};