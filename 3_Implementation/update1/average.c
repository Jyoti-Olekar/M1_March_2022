#include <stdio.h>
#include <limits.h>
int main()
{
  float number1=0 , number2=0 ;
  float average;
 
  printf("Enter the two number: ");
  scanf("%f %f",&number1,&number2);
  printf("%d",INT_MAX);
  average= (float)(number1 + number2)/2;

  printf("The Average of %f and %f is: %.2f",number1,number2, average);
  return 0;
}