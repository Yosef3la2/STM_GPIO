/*********************************
**********************************
********ya rab sab7na w rab7na****
**********************************
**********************************/

#ifndef GPIO_INTERFACE_H_
#define GPIO_INTERFACE_H_



void MGPIO_voidSetPortConfiguration(u8 u8PortNum,u32 u8Mode);



void MGPIO_voidSetPortValue(u8 u8PortNum,u32 u8PortValue);
u16 MGPIO_voidGetPort(u8 u8PortNum);
void MGPIO_voidSetValue(u8 u8PortNum,u8 u8PIN_Num,u8 u8PIN_Value);
void MGPIO_voidSetPIN_Configuration(u8 u8PortNum,u8 u8PIN_Num,u8 u8PIN_Config);

u8 MGPIO_voidGet_PIN(u8 u8PortNum,u8 u8PIN_Num );






#endif /* GPIO_INTERFACE_H_ */
