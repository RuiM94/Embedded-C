/*
 * main.c
 *
 *  Created on: Jul 28, 2025
 *      Author: Rui
 */


#include <stdio.h>
#include <stdint.h>

void wait_for_return(void);
void set4th_and_7th_bit(int32_t);

int main (void)
{
	int32_t number1, number2;

	printf("Please write the first number: ");
	fflush(stdout);
	scanf("%d",&number1);
	printf("Please write the second number: ");
	fflush(stdout);
	scanf("%d",&number2);

	set4th_and_7th_bit(number1);
	set4th_and_7th_bit(number2);

	wait_for_return();
	return 0;

}

void set4th_and_7th_bit(int32_t number)
{
	printf("Your number is %d after setting the 4th and 7th bit\n", number | 144);
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
