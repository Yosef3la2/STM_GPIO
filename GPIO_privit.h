/*********************************
**********************************
********ya rab sab7na w rab7na****
**********************************
**********************************/

#ifndef GPIO_PRIVIT_H_
#define GPIO_PRIVIT_H_

/************************************************GPIO_REGISTERS************************************/

typedef struct
{

	volatile u32 CRL;
	volatile u32 CRH;
	volatile u32 IDR;
	volatile u32 ODR;
	volatile u32 BSPR;
	volatile u32 BPR;
	volatile u32 LUCK;


}GPIO;

#define GPIO_PORTA ((volatile GPIO*)0X40010800)
#define GPIO_PORTB ((volatile GPIO*)0X40010C00)
#define GPIO_PORTC ((volatile GPIO*)0X40011000)

/*******************************************************************************************************/
/*********/




#endif
