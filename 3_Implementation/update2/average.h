/**
 * @file average.h
 * @author Jyoti Olekar
 * @brief Interface for average of two numbers with underflow and overflow checks
 * @version 0.1
 * @date 2022-04-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef _Average_H_
#define _Average_H_

#include <stdio.h>
#include <limits.h>

typedef enum function_status_t
{
    SUCCESS,
    OVERFLOW,
    UNDERFLOW
}function_status_t;


/**
 * @brief funtion for average of two numbers
 * 
 * @param num1[in] Operand 1 to be added
 * @param num2[in] Operand 2 to be added
 * @param result[out] Result of average of two numbers if success
 * @return function_status_t Result of function execution
 */

function_status_t average(float num1, float num2, float *result);

#endif /*_Average_H_*/