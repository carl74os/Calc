
#ifdef TEST

#include "calc.h"
#include "unity.h"

void setUp(void) {}

void tearDown(void) {}

void test_calc_add(void)
{
  TEST_ASSERT_EQUAL(30, add(10, 20));
  TEST_ASSERT_EQUAL(1, add(0, 1));
  TEST_ASSERT_EQUAL(-1, add(-1, 0));
  TEST_ASSERT_NOT_EQUAL(-2, add(-1, 0));
}

void test_calc_sub(void)
{
  TEST_ASSERT_EQUAL_HEX_MESSAGE(-10, sub(10, 20), "SUB Test 1");
  TEST_ASSERT_NOT_EQUAL_INT_MESSAGE(-12, sub(0, 1), "SUB Test");
  TEST_ASSERT_EQUAL(23, sub(-15, -38));
}

#endif  // TEST
