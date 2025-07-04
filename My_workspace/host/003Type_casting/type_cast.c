/*
 * type_cast.c
 *
 *  Created on: Jul 4, 2025
 *      Author: Rui
 */


#include <stdio.h>

int main(void)
{
	unsigned char data = (unsigned char) (0x87+0xFF00);
	unsigned long int data2 = 0x87+0xFF00;
	float result = (float) 80 / 3 ;
	unsigned char data3 = 0x87;
	printf("Data : %u result : %f \n",data, result);
	printf("%lu\n", data2);
	printf("%u", data3);

	return 0;
}
