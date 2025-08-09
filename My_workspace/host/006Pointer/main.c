/*
 * main.c
 *
 *  Created on: Jul 19, 2025
 *      Author: Rui
 */

/*	Understanding pointers, how you can reference, deference, read one and write on one.
 *	Understanding the different pointer type var you have and how typecasting can change the variable and how incrementing changes the variable
 */

#include <stdio.h>

long long int example = 0xffabcd1122334455;

int main (void)
{
	char variable = 100;
	printf("Size of a pointer is = %d",sizeof(int*));
	printf("This is the value of variable: %d\n", variable);
	fflush(stdout);
	printf("This is the memory address of variable: %p\n", &variable);
	fflush(stdout);
	char* address = &variable;
	char data = *address;
	printf("This is the stored value of address: %p\n",address);
	fflush(stdout);
	printf("This is the 1st byte of address: %d\n",data);
	fflush(stdout);
	*address = 65;
	printf("This is the new value of variable: %d\n", variable);
	fflush(stdout);

	char *pExample1;
	pExample1 = (char*)&example;

	printf("Value at address +1 %p is %x\n", pExample1+1,*(pExample1+1));
	printf("Value at address %p is %x\n", pExample1,*pExample1);
	int *pExample2;
	pExample2 = (int*)&example;

	printf("Value at address +1 %p is %x\n",(pExample2+1),*(pExample2+1));
	printf("Value at address %p is %x\n",pExample2,*pExample2);
	long int *pExample3;
	pExample3 = (long int*)&example;

	printf("Value at address +1 %p is %lx\n",pExample3+1, *(pExample3+1));
	printf("Value at address %p is %lx\n",pExample3, *pExample3);
	long long int *pExample4;
	pExample4 = &example;

	printf("Value at address +1 %p is %I64x\n",(pExample4+1),*(pExample4+1));
	printf("Value at address %p is %I64x\n",pExample4,*pExample4);
}
