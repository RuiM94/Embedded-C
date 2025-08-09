/*
 * main.c
 *
 *  Created on: Jul 28, 2025
 *      Author: Rui
 */

#include <stdio.h>
#include <stdint.h>

void wait_for_return(void);
void clear4th_5th_6th_bit(int32_t);

int main (void)
{
	int32_t number1, number2;

	printf("Please write the first number: ");
	fflush(stdout);
	scanf("%d",&number1);
	printf("Please write the second number: ");
	fflush(stdout);
	scanf("%d",&number2);

	clear4th_5th_6th_bit(number1);
	clear4th_5th_6th_bit(number2);

	wait_for_return();
	return 0;

}

void clear4th_5th_6th_bit(int32_t number)
{
	printf("Your number %x is now: %x after clear the 4th, 5th and 6th bit\n", number, number & (~112));
}

void wait_for_return(void)
{
	printf("Press enter key button to exit application");
	fflush(stdout);
	while(getchar()!= '\n')
	{

	}
	getchar();
}

