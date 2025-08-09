/*
 * main.c
 *
 *  Created on: Jul 20, 2025
 *      Author: Rui
 */

/* Simple demonstration of how a if statement works
 *
 */

#include <stdio.h>
#include <stdint.h>

int main (void)
{
	uint32_t Age;

	printf("Please input your age: ");
	fflush(stdout);
	scanf("%d", &Age);

	if(Age >= 18)
		printf("You are eligible to vote :-)\n");
	else
		printf("You are not eligible to vote :-(\n");
	//Else could have been used too
	fflush(stdout);
	printf("Press enter key button to exit application");
	fflush(stdout);
	while(getchar()!= '\n')
	{

	}
	getchar();
	return 0;

}
