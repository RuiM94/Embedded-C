/*
 * main.c
 *
 *  Created on: Jul 15, 2025
 *      Author: Rui
 */

#include <stdio.h>
int main(void)
{
	float a, b, c;

	printf("Input first number:\n");
	fflush(stdout);
	scanf("%f", &a);
	printf("Input second number:\n");
	fflush(stdout);
	scanf("%f", &b);
	printf("Input third number:\n");
	fflush(stdout);
	scanf("%f", &c);
	printf("Your average is: %f", (a+b+c)/3);
	fflush(stdout);

	getchar();
	getchar();
	return 0;
}
