#include "unity.h"
#include "average.h"


void setUp(void)
{

}

void tearDown(void)
{

}

void automated_test_average()
{
    float expected_average = 0;
    float result_average = 0; 

    TEST_ASSERT_EQUAL(SUCCESS, average(0, 0, &result_average));
    //TEST_ASSERT_EQUAL(expected_average, result_average);

    TEST_ASSERT_EQUAL(SUCCESS, average(10, 20, &result_average));
    //TEST_ASSERT_EQUAL(15, result_average);

    TEST_ASSERT_EQUAL(SUCCESS, average(-60, -80, &result_average));
    //TEST_ASSERT_EQUAL(-70, result_average);
}


void automated_test_average_overflow()
{
    float expected_average = 0;
    float result_average = 0;
    TEST_ASSERT_EQUAL(OVERFLOW, average(INT_MAX, INT_MAX, &result_average));
}


void automated_test_average_underflow()
{
    float expected_average = 0;
    float result_average = 0;
    TEST_ASSERT_EQUAL(UNDERFLOW, average(INT_MIN, INT_MIN, &result_average));
}



int main(void)
{

    UnityBegin(NULL);

    RUN_TEST(automated_test_average);
    RUN_TEST(automated_test_average_overflow);
    RUN_TEST(automated_test_average_underflow);

    return (UnityEnd());
}

