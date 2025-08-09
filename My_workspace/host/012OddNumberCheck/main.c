/*
 * main.c
 *
 *  Created on: Jul 28, 2025
 *      Author: Rui
 */


#include <stdio.h>
#include <stdint.h>

void wait_for_return(void);
void CheckOddNumber(int32_t);

int main (void)
{
	int32_t number1, number2;

	printf("Please write the first number: ");
	fflush(stdout);
	scanf("%d",&number1);
	printf("Please write the second number: ");
	fflush(stdout);
	scanf("%d",&number2);

	CheckOddNumber(number1);
	CheckOddNumber(number2);

	wait_for_return();
	return 0;

}

void CheckOddNumber(int32_t number)
{

	if(number & 1)
		printf("Number %d is odd\n",number);
	else
		printf("Number %d is even\n",number);
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
