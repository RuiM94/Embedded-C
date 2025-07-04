/*
 * main.c
 *
 *  Created on: Jul 4, 2025
 *      Author: Rui
 */
#include <stdio.h>
#include "math.c"

int function_add_number(int a , int b , int c );

int main ()
{
	int a = function_add_number(1,2,3);

	printf("Sum = %d\n",a);

	return 0;
}


// This is function definition
int function_add_number(int a , int b , int c )
{
	int sum ;
	sum = a+b+c;
	return sum;
}
