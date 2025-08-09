/*
 * main.c
 *
 *  Created on: Jul 27, 2025
 *      Author: Rui
 */


#include <stdio.h>
#include <stdint.h>

void wait_for_return(void);
void circle_area(int32_t);
void triangle_area(int32_t,int32_t);
void rectangle_area(int32_t,int32_t);
void square_area(int32_t);
void trapezoid_area(int32_t,int32_t,int32_t);

int main (void)
{
	uint8_t format;
	int32_t radius, base, base_small, base_big, side, width, height;

	printf("Area calculation program\n");
	fflush(stdout);
	printf("Circle    ---> c\n");
	fflush(stdout);
	printf("Triangle  ---> t\n");
	fflush(stdout);
	printf("Rectangle ---> r\n");
	fflush(stdout);
	printf("Square    ---> s\n");
	fflush(stdout);
	printf("Trapezoid ---> z\n");
	fflush(stdout);
	printf("Select format: ");
	fflush(stdout);
	switch(format = getchar())
	{
	case 'c':
		printf("input Radius: ");
		fflush(stdout);
		scanf("%d", &radius);
		circle_area(radius);
		break;
	case 't':
		printf("input base value: ");
		fflush(stdout);
		scanf("%d",&base);
		printf("input height: ");
		fflush(stdout);
		scanf("%d",&height);
		triangle_area(base,height);
		break;
	case 'r':
		printf("input width: ");
		fflush(stdout);
		scanf("%d",&width);
		printf("input height: ");
		fflush(stdout);
		scanf("%d",&height);
		rectangle_area(width,height);
		break;
	case 's':
		printf("input side value: ");
		fflush(stdout);
		scanf("%d",&side);
		square_area(side);
		break;
	case 'z':
		printf("input smaller base value: ");
		fflush(stdout);
		scanf("%d", &base_small);
		printf("input bigger base value: ");
		fflush(stdout);
		scanf("%d", &base_big);
		printf("input height: ");
		fflush(stdout);
		scanf("%d", &height);
		trapezoid_area(base_small,base_big,height);
		break;
	default:
		printf("Select a valid option, exiting program...\n");
	}

	wait_for_return();
	return 0;

}

void trapezoid_area(int32_t base_small, int32_t base_big, int32_t height)
{
	if(base_small<0 || base_big<0 || height<0)
	{
		printf("Invalid value was selected for bases or height, exiting program...\n");
	}
	else
	{
		float Area = (float)(base_small + base_big)*height/2;
		printf("Trapezoid area is: %f\n", Area);
		fflush(stdout);
	}
}

void square_area(int32_t side)
{
	if( side )
	{
		printf("Invalid value was selected for side, exiting program...\n");
	}
	else
	{
		float Area = side*side;
		printf("Rectangle area is: %f\n", Area);
		fflush(stdout);
	}
}

void rectangle_area(int32_t base, int32_t height)
{
	if(base < 0 || height < 0)
	{
		printf("Invalid value was selected for length or height, exiting program...\n");
	}
	else
	{
		float Area = base*height;
		printf("Rectangle area is: %f\n", Area);
		fflush(stdout);
	}
}

void triangle_area(int32_t base,int32_t height)
{
	if(base < 0 || height < 0)
	{
		printf("Invalid value was selected for base or height, exiting program...\n");
	}
	else
	{
		float Area = (float)(base*height)/2;
		printf("Triangle area is: %f\n", Area);
		fflush(stdout);
	}
}
void circle_area(int32_t radius)
{
	if(radius < 0)
	{
		printf("Invalid value was selected for radius, exiting program...\n");
	}
	else
	{
		float Area = radius*radius*3.14;
		printf("Circle area is: %f\n", Area);
		fflush(stdout);
	}
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
