/*
 * main.c
 *
 *  Created on: Aug 9, 2025
 *      Author: Rui
 */


#include <stdio.h>
#include <stdint.h>

void wait_for_return(void);

int main (void)
{
	uint8_t i = 1;

	while(i<11)
	{
		printf("%d\n", i);
		i++;
	}
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
