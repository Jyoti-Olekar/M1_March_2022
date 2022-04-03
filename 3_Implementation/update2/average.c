#include "average.h"

function_status_t average(float num1, float num2, float *result)
{
  float average = ((num1 + num2 )/2);
    if (average >= INT_MAX)
        return OVERFLOW;
    
    if (average <= INT_MIN)
        return UNDERFLOW;

    *result = average;
    return SUCCESS;
}