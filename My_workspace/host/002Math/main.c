/*
 * main.c
 *
 *  Created on: Jul 4, 2025
 *      Author: Rui
 */
#include <stdio.h>
#include "math.h"

int main (void)
{
	printf("Add : %X\n",math_add(0x0FFF1111, 0x0FFF1111));

	printf("Add : %I64X\n",math_mul(0x0FFF1111, 0x0FFF1111));

	printf("Add : %f\n",math_div(100,8));

	return 0;
}
