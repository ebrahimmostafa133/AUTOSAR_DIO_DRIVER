 /******************************************************************************
 *
 * Module: Dio
 *
 * File Name: Dio_Cfg.h
 *
 * Description: Pre-Compile Configuration Header file for TM4C123GH6PM Microcontroller - Dio Driver
 *
 * Author: Ebrahim Mostafa
 ******************************************************************************/

#ifndef DIO_CFG_H
#define DIO_CFG_H

/*
 * Module Version 1.0.0
 */
#define DIO_CFG_SW_MAJOR_VERSION              (1U)
#define DIO_CFG_SW_MINOR_VERSION              (0U)
#define DIO_CFG_SW_PATCH_VERSION              (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define DIO_CFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define DIO_CFG_AR_RELEASE_MINOR_VERSION     (0U)
#define DIO_CFG_AR_RELEASE_PATCH_VERSION     (3U)

/* Pre-compile option for Development Error Detect */
#define DIO_DEV_ERROR_DETECT                (STD_ON)

/* Pre-compile option for Version Info API */
#define DIO_VERSION_INFO_API                (STD_ON)

/* Pre-compile option for presence of Dio_FlipChannel API */
#define DIO_FLIP_CHANNEL_API                (STD_ON)

/* Number of the configured Dio Channels */
#define DIO_CONFIGURED_CHANNLES             (43U)
//#define DIO_CONFIGURED_CHANNLES             (2U)

#define DIO_CONFIGURED_PORTS            (6U)
/* Channel Index in the array of structures in Dio_PBcfg.c */
/*  used at functions read channel & flip channel */
#define DioConf_PORTA_Pin0_CHANNEL_ID_INDEX (uint8)0
#define DioConf_PORTA_Pin1_CHANNEL_ID_INDEX (uint8)1
#define DioConf_PORTA_Pin2_CHANNEL_ID_INDEX (uint8)2
#define DioConf_PORTA_Pin3_CHANNEL_ID_INDEX (uint8)3
#define DioConf_PORTA_Pin4_CHANNEL_ID_INDEX (uint8)4
#define DioConf_PORTA_Pin5_CHANNEL_ID_INDEX (uint8)5
#define DioConf_PORTA_Pin6_CHANNEL_ID_INDEX (uint8)6
#define DioConf_PORTA_Pin7_CHANNEL_ID_INDEX (uint8)7
#define DioConf_PORTB_Pin0_CHANNEL_ID_INDEX (uint8)8
#define DioConf_PORTB_Pin1_CHANNEL_ID_INDEX (uint8)9
#define DioConf_PORTB_Pin2_CHANNEL_ID_INDEX (uint8)10
#define DioConf_PORTB_Pin3_CHANNEL_ID_INDEX (uint8)11
#define DioConf_PORTB_Pin4_CHANNEL_ID_INDEX (uint8)12
#define DioConf_PORTB_Pin5_CHANNEL_ID_INDEX (uint8)13
#define DioConf_PORTB_Pin6_CHANNEL_ID_INDEX (uint8)14
#define DioConf_PORTB_Pin7_CHANNEL_ID_INDEX (uint8)15
#define DioConf_PORTC_Pin0_CHANNEL_ID_INDEX (uint8)16
#define DioConf_PORTC_Pin1_CHANNEL_ID_INDEX (uint8)17
#define DioConf_PORTC_Pin2_CHANNEL_ID_INDEX (uint8)18
#define DioConf_PORTC_Pin3_CHANNEL_ID_INDEX (uint8)19
#define DioConf_PORTC_Pin4_CHANNEL_ID_INDEX (uint8)20
#define DioConf_PORTC_Pin5_CHANNEL_ID_INDEX (uint8)21
#define DioConf_PORTC_Pin6_CHANNEL_ID_INDEX (uint8)22
#define DioConf_PORTC_Pin7_CHANNEL_ID_INDEX (uint8)23
#define DioConf_PORTD_Pin0_CHANNEL_ID_INDEX (uint8)24
#define DioConf_PORTD_Pin1_CHANNEL_ID_INDEX (uint8)25
#define DioConf_PORTD_Pin2_CHANNEL_ID_INDEX (uint8)26
#define DioConf_PORTD_Pin3_CHANNEL_ID_INDEX (uint8)27
#define DioConf_PORTD_Pin4_CHANNEL_ID_INDEX (uint8)28
#define DioConf_PORTD_Pin5_CHANNEL_ID_INDEX (uint8)29
#define DioConf_PORTD_Pin6_CHANNEL_ID_INDEX (uint8)30
#define DioConf_PORTD_Pin7_CHANNEL_ID_INDEX (uint8)31
#define DioConf_PORTE_Pin0_CHANNEL_ID_INDEX (uint8)32
#define DioConf_PORTE_Pin1_CHANNEL_ID_INDEX (uint8)33
#define DioConf_PORTE_Pin2_CHANNEL_ID_INDEX (uint8)34
#define DioConf_PORTE_Pin3_CHANNEL_ID_INDEX (uint8)35
#define DioConf_PORTE_Pin4_CHANNEL_ID_INDEX (uint8)36
#define DioConf_PORTE_Pin5_CHANNEL_ID_INDEX (uint8)37
#define DioConf_PORTF_Pin0_CHANNEL_ID_INDEX (uint8)38
#define DioConf_PORTF_Pin1_CHANNEL_ID_INDEX (uint8)39
#define DioConf_PORTF_Pin2_CHANNEL_ID_INDEX (uint8)40
#define DioConf_PORTF_Pin3_CHANNEL_ID_INDEX (uint8)41
#define DioConf_PORTF_Pin4_CHANNEL_ID_INDEX (uint8)42

/* DIO Configured Port ID's  */
#define DIOconfig_PortA                  (0U)
#define DIOconfig_PortB                  (1U)
#define DIOconfig_PortC                  (2U)
#define DIOconfig_PortD                  (3U)
#define DIOconfig_PortE                  (4U)
#define DIOconfig_PortF                  (5U)

/* DIO Configured Channel ID's */
#define DioConf_PORTA_Pin0  (Dio_ChannelType)0
#define DioConf_PORTA_Pin1  (Dio_ChannelType)1
#define DioConf_PORTA_Pin2  (Dio_ChannelType)2
#define DioConf_PORTA_Pin3  (Dio_ChannelType)3
#define DioConf_PORTA_Pin4  (Dio_ChannelType)4
#define DioConf_PORTA_Pin5  (Dio_ChannelType)5
#define DioConf_PORTA_Pin6  (Dio_ChannelType)6
#define DioConf_PORTA_Pin7  (Dio_ChannelType)7
#define DioConf_PORTB_Pin0  (Dio_ChannelType)0
#define DioConf_PORTB_Pin1  (Dio_ChannelType)1
#define DioConf_PORTB_Pin2  (Dio_ChannelType)2
#define DioConf_PORTB_Pin3  (Dio_ChannelType)3
#define DioConf_PORTB_Pin4  (Dio_ChannelType)4
#define DioConf_PORTB_Pin5  (Dio_ChannelType)5
#define DioConf_PORTB_Pin6  (Dio_ChannelType)6
#define DioConf_PORTB_Pin7  (Dio_ChannelType)7
#define DioConf_PORTC_Pin0  (Dio_ChannelType)0
#define DioConf_PORTC_Pin1  (Dio_ChannelType)1
#define DioConf_PORTC_Pin2  (Dio_ChannelType)2
#define DioConf_PORTC_Pin3  (Dio_ChannelType)3
#define DioConf_PORTC_Pin4  (Dio_ChannelType)4
#define DioConf_PORTC_Pin5  (Dio_ChannelType)5
#define DioConf_PORTC_Pin6  (Dio_ChannelType)6
#define DioConf_PORTC_Pin7  (Dio_ChannelType)7
#define DioConf_PORTD_Pin0  (Dio_ChannelType)0
#define DioConf_PORTD_Pin1  (Dio_ChannelType)1
#define DioConf_PORTD_Pin2  (Dio_ChannelType)2
#define DioConf_PORTD_Pin3  (Dio_ChannelType)3
#define DioConf_PORTD_Pin4  (Dio_ChannelType)4
#define DioConf_PORTD_Pin5  (Dio_ChannelType)5
#define DioConf_PORTD_Pin6  (Dio_ChannelType)6
#define DioConf_PORTD_Pin7  (Dio_ChannelType)7
#define DioConf_PORTE_Pin0  (Dio_ChannelType)0
#define DioConf_PORTE_Pin1  (Dio_ChannelType)1
#define DioConf_PORTE_Pin2  (Dio_ChannelType)2
#define DioConf_PORTE_Pin3  (Dio_ChannelType)3
#define DioConf_PORTE_Pin4  (Dio_ChannelType)4
#define DioConf_PORTE_Pin5  (Dio_ChannelType)5
#define DioConf_PORTF_Pin0  (Dio_ChannelType)0
#define DioConf_PORTF_Pin1  (Dio_ChannelType)1
#define DioConf_PORTF_Pin2  (Dio_ChannelType)2
#define DioConf_PORTF_Pin3  (Dio_ChannelType)3
#define DioConf_PORTF_Pin4  (Dio_ChannelType)4

#endif /* DIO_CFG_H */
