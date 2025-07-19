/*
 * type_cast.c
 *
 *  Created on: Jul 4, 2025
 *      Author: Rui
 */


/* Importance of different typecasting
 * and how it can affect the variable.
 * Also note the difference between implicit and explicit casting
 * (implicit is done by us, explicit is done by the machine)
 */

#include <stdio.h>

int main(void)
{
	unsigned char data = (unsigned char) (0x87+0xFF00);
	unsigned long int data2 = 0x87+0xFF00;
	float result = (float) 80 / 3 ;
	unsigned char data3 = 0x87;
	printf("Data : %x result : %f \n",data, result);
	printf("%lx\n", data2);
	printf("%u", data3);

	return 0;
}
