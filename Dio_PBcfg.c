 /******************************************************************************
 *
 * Module: Dio
 *
 * File Name: Dio_PBcfg.c
 *
 * Description: Post Build Configuration Source file for TM4C123GH6PM Microcontroller - Dio Driver
 *
 * Author: Ebrahim Mostafa
 ******************************************************************************/

#include "Dio.h"

/*
 * Module Version 1.0.0
 */
#define DIO_PBCFG_SW_MAJOR_VERSION              (1U)
#define DIO_PBCFG_SW_MINOR_VERSION              (0U)
#define DIO_PBCFG_SW_PATCH_VERSION              (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define DIO_PBCFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define DIO_PBCFG_AR_RELEASE_MINOR_VERSION     (0U)
#define DIO_PBCFG_AR_RELEASE_PATCH_VERSION     (3U)

/* AUTOSAR Version checking between Dio_PBcfg.c and Dio.h files */
#if ((DIO_PBCFG_AR_RELEASE_MAJOR_VERSION != DIO_AR_RELEASE_MAJOR_VERSION)\
 ||  (DIO_PBCFG_AR_RELEASE_MINOR_VERSION != DIO_AR_RELEASE_MINOR_VERSION)\
 ||  (DIO_PBCFG_AR_RELEASE_PATCH_VERSION != DIO_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of PBcfg.c does not match the expected version"
#endif

/* Software Version checking between Dio_PBcfg.c and Dio.h files */
#if ((DIO_PBCFG_SW_MAJOR_VERSION != DIO_SW_MAJOR_VERSION)\
 ||  (DIO_PBCFG_SW_MINOR_VERSION != DIO_SW_MINOR_VERSION)\
 ||  (DIO_PBCFG_SW_PATCH_VERSION != DIO_SW_PATCH_VERSION))
  #error "The SW version of PBcfg.c does not match the expected version"
#endif

/* PB structure used with Dio_Init API */
const Dio_ConfigType Dio_Configuration = {
                                          DIOconfig_PortA , DioConf_PORTA_Pin0,
                                          DIOconfig_PortA , DioConf_PORTA_Pin1,
                                          DIOconfig_PortA , DioConf_PORTA_Pin2,
                                          DIOconfig_PortA , DioConf_PORTA_Pin3,
                                          DIOconfig_PortA , DioConf_PORTA_Pin4,
                                          DIOconfig_PortA , DioConf_PORTA_Pin5,
                                          DIOconfig_PortA , DioConf_PORTA_Pin6,
                                          DIOconfig_PortA , DioConf_PORTA_Pin7,
                                          DIOconfig_PortB , DioConf_PORTB_Pin0,
                                          DIOconfig_PortB , DioConf_PORTB_Pin1,
                                          DIOconfig_PortB , DioConf_PORTB_Pin2,
                                          DIOconfig_PortB , DioConf_PORTB_Pin3,
                                          DIOconfig_PortB , DioConf_PORTB_Pin4,
                                          DIOconfig_PortB , DioConf_PORTB_Pin5,
                                          DIOconfig_PortB , DioConf_PORTB_Pin6,
                                          DIOconfig_PortB , DioConf_PORTB_Pin7,
                                          DIOconfig_PortC , DioConf_PORTC_Pin0,
                                          DIOconfig_PortC , DioConf_PORTC_Pin1,
                                          DIOconfig_PortC , DioConf_PORTC_Pin2,
                                          DIOconfig_PortC , DioConf_PORTC_Pin3,
                                          DIOconfig_PortC , DioConf_PORTC_Pin4,
                                          DIOconfig_PortC , DioConf_PORTC_Pin5,
                                          DIOconfig_PortC , DioConf_PORTC_Pin6,
                                          DIOconfig_PortC , DioConf_PORTC_Pin7,
                                          DIOconfig_PortD , DioConf_PORTD_Pin0,
                                          DIOconfig_PortD , DioConf_PORTD_Pin1,
                                          DIOconfig_PortD , DioConf_PORTD_Pin2,
                                          DIOconfig_PortD , DioConf_PORTD_Pin3,
                                          DIOconfig_PortD , DioConf_PORTD_Pin4,
                                          DIOconfig_PortD , DioConf_PORTD_Pin5,
                                          DIOconfig_PortD , DioConf_PORTD_Pin6,
                                          DIOconfig_PortD , DioConf_PORTD_Pin7,
                                          DIOconfig_PortE , DioConf_PORTE_Pin0,
                                          DIOconfig_PortE , DioConf_PORTE_Pin1,
                                          DIOconfig_PortE , DioConf_PORTE_Pin2,
                                          DIOconfig_PortE , DioConf_PORTE_Pin3,
                                          DIOconfig_PortE , DioConf_PORTE_Pin4,
                                          DIOconfig_PortE , DioConf_PORTE_Pin5,
                                          DIOconfig_PortF , DioConf_PORTF_Pin0,
                                          DIOconfig_PortF , DioConf_PORTF_Pin1,
                                          DIOconfig_PortF , DioConf_PORTF_Pin2,
                                          DIOconfig_PortF , DioConf_PORTF_Pin3,
                                          DIOconfig_PortF , DioConf_PORTF_Pin4
				                         };



