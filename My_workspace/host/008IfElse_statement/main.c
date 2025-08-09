/*
 * main.c
 *
 *  Created on: Jul 20, 2025
 *      Author: Rui
 */


#include <stdio.h>
#include <stdint.h>

void wait_for_return(void);

int main (void)
{
	float number1, number2;

	printf("Please input first number: ");
	fflush(stdout);
	if( scanf("%f", &number1)==0)
	{
		printf("Invalid number, exiting...\n");
		wait_for_return();
		return 0;
	}
	if( scanf("%f", &number2)==0)
	{
		printf("Invalid number, exiting...\n");
		wait_for_return();
		return 0;
	}
	printf("Please input second number: ");
	fflush(stdout);
	scanf("%f", &number2);

	int32_t n1,n2;

	n1 = number1;
	n2 = number2;

	if((n1 != number1) || (n2 != number2))
		printf("Warning, only integer part is being taken in to consideration!\n");

	if(n1<n2)
		printf("%d is bigger\n",n2);
	else
	{
		if(n1>n2)
			printf("%d is bigger\n",n1);
		else
			printf("Both numbers are equal\n");
	}
	//Else could have been used too
	fflush(stdout);
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
