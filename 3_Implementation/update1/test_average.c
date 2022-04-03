#include "unity.h"

extern void manual_test_average();

void setUp(void)
{

}

void tearDown(void)
{

}

void automated_test_average()
{
    TEST_ASSERT_EQUAL(0,average(0, 0));
	TEST_ASSERT_EQUAL(15,average(10, 20));
	TEST_ASSERT_EQUAL(-70,average(-60, -80));
}


void automated_test_average_overflow()
{
    TEST_ASSERT_EQUAL(0,average(INT_MAX, INT_MAX));
}


void automated_test_average_underflow()
{
    TEST_ASSERT_EQUAL(0,average(INT_MIN, INT_MIN ));
}



int main(void)
{
    manual_test_average();

    UnityBegin(NULL);

    RUN_TEST(test_average);

    return (UnityEnd());
}

