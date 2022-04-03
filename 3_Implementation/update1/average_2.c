#include "stdio.h"
#include "unity.h"

float average(float num1, float num2)
{
	float average= float((num1 + num2)/2); 
	return average;
}

void manual_test_average()
{
	
	if(0 == average(0, 0))
		printf("Average function works\n");
	else 
		printf("Average function is not working\n");

	if(15 == average(10, 20))
		printf("Average function works for positive numbers\n");
	else 
		printf("Average function is not working for positive numbers\n");
	
	if(-70 == average(-60, -80))
		printf("Average function works for negative numbers\n");
	else 
		printf("Average function is not working for negative numbers\n");

}

