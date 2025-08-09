/*
 * main.c
 *
 *  Created on: Jul 27, 2025
 *      Author: Rui
 */


#include <stdio.h>
#include <stdint.h>

void wait_for_return(void);

int main (void)
{
	int32_t number1, number2;

	printf("Please write the first number: ");
	fflush(stdout);
	scanf("%d",&number1);
	printf("Please write the second number: ");
	fflush(stdout);
	scanf("%d",&number2);

	printf("Bitwise operator AND between the numbers: %d\n", number1&number2);
	printf("Bitwise operator OR between the numbers: %d\n", number1|number2);
	printf("Bitwise operator NOT of number1 : %d\n", ~number1);
	printf("Bitwise operator NOT of number2 : %d\n", ~number2);
	printf("Bitwise operator XOR between the numbers: %d\n", number1^number2);


	wait_for_return();
	return 0;

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
