/*********************************
**********************************
********ya rab sab7na w rab7na****
**********************************
**********************************/

#ifndef GPIO_CONFIGRATION_H_
#define GPIO_CONFIGRATION_H_
/******************************************************************/
/**************************PINS NAME*******************************/
#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7
#define PIN8 8
#define PIN9 9
#define PIN10 10
#define PIN11 11
#define PIN12 12
#define PIN13 13
#define PIN14 14
#define PIN15 15







/*****************************************************************/
/***************************PORTS NAME***************************/

#define PORTA 0
#define PORTB 1
#define PORTC 2


/****************************************************************/

/****************SELECT PORT MODE*****************************************/

/*
 * ************************INPUT MODE***************************************
 *
 * */
#define INPUT_ANLOG               0X00000000
#define INPUT_FLOATING            0X44444444
#define INPUT_PULLUP_PULLDOWN     0X88888888


/*
 *
 * *******************OUTPUT MODE For Speed 10***************************
 *
 * */

#define OUTPUT_SPEED_10MHZ_PP     0X11111111
#define OUTPUT_SPEED_10MHZ_OD     0X55555555
#define OUTPUT_SPEED_10MHZ_AFPP   0X99999999
#define OUTPUT_SPEED_10MHZ_AFOD   0XCCCCCCCC


/*
 *
 * *******************OUTPUT MODE For Speed 2***************************
 *
 * */
#define OUTPUT_SPEED_2MHZ_PP      0X22222222
#define OUTPUT_SPEED_2MHZ_OD      0X66666666
#define OUTPUT_SPEED_2MHZ_AFPP    0XAAAAAAAA
#define OUTPUT_SPEED_2MHZ_AFOD    0XEEEEEEEE


/*
 *
 * *******************OUTPUT MODE For Speed 50***************************
 *
 * */
#define OUTPUT_SPEED_50MHZ_PP     0x33333333
#define OUTPUT_SPEED_50MHZ_OD     0x77777777
#define OUTPUT_SPEED_50MHZ_AFPP   0xBBBBBBBB
#define OUTPUT_SPEED_50MHZ_AFOD   0XFFFFFFFF



/*****************************************************************/
/******************PINS STATE*************************************/

#define HIGH 1
#define LOW  0

/********************************************************************/
/**********************PINS CONFIGRATION****************************/





/********************************************************************/


#endif /* GPIO_CONFIGRATION_H_ */
