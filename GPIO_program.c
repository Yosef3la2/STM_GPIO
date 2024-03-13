/*********************************
**********************************
********ya rab sab7na w rab7na****
**********************************
**********************************/



#include"std_macros.h"
//#include"TYPES.h"
#include"GPIO_privit.h"
#include"GPIO_interface.h"
#include"GPIO_configration.h"
/****************************************************************
 * THIS FUNCTION RETURN VOID AND GET PORT NAME AND MODE
 *
 * Using to set configuration for all port
 *
 * ***************************************************************/
void MGPIO_voidSetPortConfiguration(u8 u8_PortNum,u32 u8_Mode){
switch(u8PortNum){
		case PORTA:
			GPIO_PORTA->CRL=u8_Mode;
			GPIO_PORTA->CRH=u8_Mode;
			break;
		case PORTB:
			GPIO_PORTB->CRL=u8_Mode;
			GPIO_PORTB->CRH=u8_Mode;
			break;
		case PORTC:
			GPIO_PORTC->CRL=u8_Mode;
		    GPIO_PORTC->CRH=u8_Mode;
			break;
		}

}
/**************************************************************************************************************************/






/**************************************************************************************************************************/


void MGPIO_voidSetPortValue(u8 u8_PortNum,u32 u32_PortValue){


	switch(u8PortNum){
			case PORTA:
				GPIO_PORTA->ODR=0X0000FFFF&u8PortValue;
				break;
			case PORTB:
				GPIO_PORTB->ODR=0X0000FFFF&u8PortValue;
				break;
			case PORTC:
				GPIO_PORTC->ODR=0X0000FFFF&u8PortValue;
				break;
			}



}


u16 MGPIO_voidGetPort(u8 u8_PortNum){
	switch(u8_PortNum){
	case PORTA:
	return((u16)GPIO_PORTA->IDR);
	case PORTB:
		return((u16)GPIO_PORTB->IDR);
	case PORTC:
		return((u16)GPIO_PORTC->IDR);
	default:
		break;
}

return 0;
}





void MGPIO_voidSetValue(u8 u8_PortNum,u8 u8_PIN_Num,u8 u8_PIN_Value){

	/*******************CHACK PINS OF PORTA************************/
if(u8PortNum==PORTA)
{
		switch (u8PIN_Num) {
		case PIN0:
			if (u8PIN_Value == HIGH) {
				SET_BIT(GPIO_PORTA->ODR, PIN0);
			} else if (u8PIN_Value == LOW) {
				CLEAR_BIT(GPIO_PORTA->ODR, PIN0);
			} else {/*return error*/
			}
			break;

		case PIN1:
			if (u8PIN_Value == HIGH) {
				SET_BIT(GPIO_PORTA->ODR, PIN1);
			} else if (u8PIN_Value == LOW) {
				CLEAR_BIT(GPIO_PORTA->ODR, PIN1);
			} else {/*return error*/
			}
			break;

		case PIN2:
			if (u8PIN_Value == HIGH) {
				SET_BIT(GPIO_PORTA->ODR, PIN2);
			} else if (u8PIN_Value == LOW) {
				CLEAR_BIT(GPIO_PORTA->ODR, PIN2);
			} else {/*return error*/
			}

			break;

		case PIN3:
			if (u8PIN_Value == HIGH) {
				SET_BIT(GPIO_PORTA->ODR, PIN3);
			} else if (u8PIN_Value == LOW) {
				CLEAR_BIT(GPIO_PORTA->ODR, PIN3);
			} else {/*return error*/
			}
			break;

		case PIN4:
			if (u8PIN_Value == HIGH) {
				SET_BIT(GPIO_PORTA->ODR, PIN4);
			} else if (u8PIN_Value == LOW) {
				CLEAR_BIT(GPIO_PORTA->ODR, PIN4);
			} else {/*return error*/
			}
			break;

		case PIN5:
			if (u8PIN_Value == HIGH) {
				SET_BIT(GPIO_PORTA->ODR, PIN5);
			} else if (u8PIN_Value == LOW) {
				CLEAR_BIT(GPIO_PORTA->ODR, PIN5);
			} else {/*return error*/
			}
			break;

		case PIN6:
			if (u8PIN_Value == HIGH) {
				SET_BIT(GPIO_PORTA->ODR, PIN6);
			} else if (u8PIN_Value == LOW) {
				CLEAR_BIT(GPIO_PORTA->ODR, PIN6);
			} else {/*return error*/
			}
			break;

		case PIN7:
			if (u8PIN_Value == HIGH) {
				SET_BIT(GPIO_PORTA->ODR, PIN7);
			} else if (u8PIN_Value == LOW) {
				CLEAR_BIT(GPIO_PORTA->ODR, PIN7);
			} else {/*return error*/
			}
			break;

		case PIN8:
			if (u8PIN_Value == HIGH) {
				SET_BIT(GPIO_PORTA->ODR, PIN8);
			} else if (u8PIN_Value == LOW) {
				CLEAR_BIT(GPIO_PORTA->ODR, PIN8);
			} else {/*return error*/
			}
			break;

		case PIN9:
			if (u8PIN_Value == HIGH) {
				SET_BIT(GPIO_PORTA->ODR, PIN9);
			} else if (u8PIN_Value == LOW) {
				CLEAR_BIT(GPIO_PORTA->ODR, PIN9);
			} else {/*return error*/
			}
			break;

		case PIN10:
			if (u8PIN_Value == HIGH) {
				SET_BIT(GPIO_PORTA->ODR, PIN10);
			} else if (u8PIN_Value == LOW) {
				CLEAR_BIT(GPIO_PORTA->ODR, PIN10);
			} else {/*return error*/
			}
			break;

		case PIN11:
			if (u8PIN_Value == HIGH) {
				SET_BIT(GPIO_PORTA->ODR, PIN11);
			} else if (u8PIN_Value == LOW) {
				CLEAR_BIT(GPIO_PORTA->ODR, PIN11);
			} else {/*return error*/
			}
			break;

		case PIN12:
			if (u8PIN_Value == HIGH) {
				SET_BIT(GPIO_PORTA->ODR, PIN12);
			} else if (u8PIN_Value == LOW) {
				CLEAR_BIT(GPIO_PORTA->ODR, PIN12);
			} else {/*return error*/
			}
			break;

		case PIN13:
			if (u8PIN_Value == HIGH) {
				SET_BIT(GPIO_PORTA->ODR, PIN13);
			} else if (u8PIN_Value == LOW) {
				CLEAR_BIT(GPIO_PORTA->ODR, PIN13);
			} else {/*return error*/
			}
			break;

		case PIN14:
			if (u8PIN_Value == HIGH) {
				SET_BIT(GPIO_PORTA->ODR, PIN14);
			} else if (u8PIN_Value == LOW) {
				CLEAR_BIT(GPIO_PORTA->ODR, PIN14);
			} else {/*return error*/
			}
			break;

		case PIN15:
			if (u8PIN_Value == HIGH) {
				SET_BIT(GPIO_PORTA->ODR, PIN15);
			} else if (u8PIN_Value == LOW) {
				CLEAR_BIT(GPIO_PORTA->ODR, PIN15);
			} else {/*return error*/
			}
			break;

		}

	}
/*******************CHACK PINS OF PORTB************************/
else if(u8PortNum==PORTB){


	switch (u8PIN_Num) {
		case PIN0:
			if (u8PIN_Value == HIGH) {
				SET_BIT(GPIO_PORTB->ODR, PIN0);
			} else if (u8PIN_Value == LOW) {
				CLEAR_BIT(GPIO_PORTB->ODR, PIN0);
			} else {/*return error*/
			}
			break;

		case PIN1:
			if (u8PIN_Value == HIGH) {
				SET_BIT(GPIO_PORTB->ODR, PIN1);
			} else if (u8PIN_Value == LOW) {
				CLEAR_BIT(GPIO_PORTB->ODR, PIN1);
			} else {/*return error*/
			}
			break;

		case PIN2:
			if (u8PIN_Value == HIGH) {
				SET_BIT(GPIO_PORTB->ODR, PIN2);
			} else if (u8PIN_Value == LOW) {
				CLEAR_BIT(GPIO_PORTB->ODR, PIN2);
			} else {/*return error*/
			}

			break;

		case PIN3:
			if (u8PIN_Value == HIGH) {
				SET_BIT(GPIO_PORTB->ODR, PIN3);
			} else if (u8PIN_Value == LOW) {
				CLEAR_BIT(GPIO_PORTB->ODR, PIN3);
			} else {/*return error*/
			}
			break;

		case PIN4:
			if (u8PIN_Value == HIGH) {
				SET_BIT(GPIO_PORTB->ODR, PIN4);
			} else if (u8PIN_Value == LOW) {
				CLEAR_BIT(GPIO_PORTB->ODR, PIN4);
			} else {/*return error*/
			}
			break;

		case PIN5:
			if (u8PIN_Value == HIGH) {
				SET_BIT(GPIO_PORTB->ODR, PIN5);
			} else if (u8PIN_Value == LOW) {
				CLEAR_BIT(GPIO_PORTB->ODR, PIN5);
			} else {/*return error*/
			}
			break;

		case PIN6:
			if (u8PIN_Value == HIGH) {
				SET_BIT(GPIO_PORTB->ODR, PIN6);
			} else if (u8PIN_Value == LOW) {
				CLEAR_BIT(GPIO_PORTB->ODR, PIN6);
			} else {/*return error*/
			}
			break;

		case PIN7:
			if (u8PIN_Value == HIGH) {
				SET_BIT(GPIO_PORTB->ODR, PIN7);
			} else if (u8PIN_Value == LOW) {
				CLEAR_BIT(GPIO_PORTB->ODR, PIN7);
			} else {/*return error*/
			}
			break;

		case PIN8:
			if (u8PIN_Value == HIGH) {
				SET_BIT(GPIO_PORTB->ODR, PIN8);
			} else if (u8PIN_Value == LOW) {
				CLEAR_BIT(GPIO_PORTB->ODR, PIN8);
			} else {/*return error*/
			}
			break;

		case PIN9:
			if (u8PIN_Value == HIGH) {
				SET_BIT(GPIO_PORTB->ODR, PIN9);
			} else if (u8PIN_Value == LOW) {
				CLEAR_BIT(GPIO_PORTB->ODR, PIN9);
			} else {/*return error*/
			}
			break;

		case PIN10:
			if (u8PIN_Value == HIGH) {
				SET_BIT(GPIO_PORTB->ODR, PIN10);
			} else if (u8PIN_Value == LOW) {
				CLEAR_BIT(GPIO_PORTB->ODR, PIN10);
			} else {/*return error*/
			}
			break;

		case PIN11:
			if (u8PIN_Value == HIGH) {
				SET_BIT(GPIO_PORTB->ODR, PIN11);
			} else if (u8PIN_Value == LOW) {
				CLEAR_BIT(GPIO_PORTB->ODR, PIN11);
			} else {/*return error*/
			}
			break;

		case PIN12:
			if (u8PIN_Value == HIGH) {
				SET_BIT(GPIO_PORTB->ODR, PIN12);
			} else if (u8PIN_Value == LOW) {
				CLEAR_BIT(GPIO_PORTB->ODR, PIN12);
			} else {/*return error*/
			}
			break;

		case PIN13:
			if (u8PIN_Value == HIGH) {
				SET_BIT(GPIO_PORTB->ODR, PIN13);
			} else if (u8PIN_Value == LOW) {
				CLEAR_BIT(GPIO_PORTB->ODR, PIN13);
			} else {/*return error*/
			}
			break;

		case PIN14:
			if (u8PIN_Value == HIGH) {
				SET_BIT(GPIO_PORTB->ODR, PIN14);
			} else if (u8PIN_Value == LOW) {
				CLEAR_BIT(GPIO_PORTB->ODR, PIN14);
			} else {/*return error*/
			}
			break;

		case PIN15:
			if (u8PIN_Value == HIGH) {
				SET_BIT(GPIO_PORTB->ODR, PIN15);
			} else if (u8PIN_Value == LOW) {
				CLEAR_BIT(GPIO_PORTB->ODR, PIN15);
			} else {/*return error*/
			}
			break;

		}

	}

/*********************CHACK PINS OF PORTC***********************/

	else if (u8PortNum == PORTC) {

		switch (u8PIN_Num) {
		case PIN13:
			if (u8PIN_Value == HIGH) {
				SET_BIT(GPIO_PORTB->ODR, PIN13);
			} else if (u8PIN_Value == LOW) {
				CLEAR_BIT(GPIO_PORTB->ODR, PIN13);
			} else {/*return error*/
			}
			break;

		case PIN14:
			if (u8PIN_Value == HIGH) {
				SET_BIT(GPIO_PORTB->ODR, PIN14);
			} else if (u8PIN_Value == LOW) {
				CLEAR_BIT(GPIO_PORTB->ODR, PIN14);
			} else {/*return error*/
			}
			break;

		case PIN15:
			if (u8PIN_Value == HIGH) {
				SET_BIT(GPIO_PORTB->ODR, PIN15);
			} else if (u8PIN_Value == LOW) {
				CLEAR_BIT(GPIO_PORTB->ODR, PIN15);
			} else {/*return error*/
			}
			break;

		}

	}

}


void MGPIO_voidSetPIN_Configuration(u8 u8PortNum,u8 u8PIN_Num,u8 u8PIN_Config){


	switch (u8PortNum) {
	case PORTA:
		if (u8PIN_Num < 8) {
			GPIO_PORTA->CRL &= ~((0b1111) << (4 * u8PIN_Num));
			GPIO_PORTA->CRL |= ((u8PIN_Config) << (4 * u8PIN_Num));

		}

		else if (u8PIN_Num < 16) {
			u8PIN_Num -= 8;

			GPIO_PORTA->CRH &= ~((0b1111) << (4 * u8PIN_Num));
			GPIO_PORTA->CRH |= ((u8PIN_Config) << (4 * u8PIN_Num));

		}

		break;

	case PORTB:
		if (u8PIN_Num <= 7) {
			GPIO_PORTB->CRL &= ~((0b1111) << (4 * u8PIN_Num));
			GPIO_PORTB->CRL |= ((u8PIN_Config) << (4 * u8PIN_Num));

		}

		else if (u8PIN_Num <= 15) {
			u8PIN_Num -= 8;
			GPIO_PORTB->CRH &= ~((0b1111) << (4 * u8PIN_Num));
			GPIO_PORTB->CRH |= ((u8PIN_Config) << (4 * u8PIN_Num));

		}

		break;
	case PORTC:
		u8PIN_Num -= 8;
		GPIO_PORTC->CRH &= ~((0b1111) << (4 * u8PIN_Num));
		GPIO_PORTC->CRH |= ((u8PIN_Config) << (4 * u8PIN_Num));
		break;
	default:
		break;

	}

}


u8 MGPIO_voidGet_PIN(u8 u8PortNum,u8 u8PIN_Num){
	u8 volatile u8Loc_PinValue;
	switch(u8PortNum){

	case PORTA:


		u8Loc_PinValue=GET_BIT(GPIO_PORTA->IDR, u8PIN_Num);




		break;


	case PORTB:
		u8Loc_PinValue=GET_BIT(GPIO_PORTA->IDR, u8PIN_Num);
		break;

	case PORTC:
		u8Loc_PinValue=GET_BIT(GPIO_PORTA->IDR, u8PIN_Num);
		break;
	default:
		break;

	}

return u8Loc_PinValue;
	}














