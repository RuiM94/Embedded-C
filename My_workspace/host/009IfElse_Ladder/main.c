/*
 * main.c
 *
 *  Created on: Jul 21, 2025
 *      Author: Rui
 */


#include <stdio.h>
#include <stdint.h>

void wait_for_return(void);

int main (void)
{
	float salary;

	printf("Please input your salary: ");
	fflush(stdout);
	scanf("%f",&salary);
	if(salary < 0)
	{
		printf("Invalid format, exiting program...\n");
		wait_for_return();
		return 0;
	}
	if(salary < 9525 && salary >= 0)
		printf("Tax payable: %f\n",0*salary);
	else if (salary < 38700)
		printf("Tax payable: %f\n",0.12*salary);
	else if(salary <82500)
		printf("Tax payable: %f\n", 0.22*salary);
	else
		printf("Tax payable: %f\n", 0.32*salary+1000);
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
