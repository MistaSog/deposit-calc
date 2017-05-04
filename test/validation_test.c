#include <ctest.h>
#include <deposit.h>

CTEST(validation_value, value_zero) 
{
	int res = InputValue(0);
	const int exp = 0;
	ASSERT_EQUAL(exp, res);
}
CTEST(validation_value, value_negative) 
{
	int res = InputValue(-1);
	const int exp = 0;
	ASSERT_EQUAL(exp, res);
}
CTEST(validation_value, value_near) 
{
	int res = InputValue(9999);
	const int exp = 0;
	ASSERT_EQUAL(exp, res);
}
CTEST(validation_value, value_equal) 
{
	int res = InputValue(10000);
	const int exp = 1;
	ASSERT_EQUAL(exp, res);
}
CTEST(validation_value, value_over) 
{
	int res = InputValue(10001);
	const int exp = 1;
	ASSERT_EQUAL(exp, res);
}
CTEST(validation_value, value_overover) 
{
	int res = InputValue(10000000000000);
	const int exp = 1;
	ASSERT_EQUAL(exp, res);
}
CTEST(validation_time, time_negative) 
{
	int res = InputTime(-1);
	const int exp = 0;
	ASSERT_EQUAL(exp, res);
}
CTEST(validation_time, time_over) 
{
	int res = InputTime(366);
	const int exp = 0;
	ASSERT_EQUAL(exp, res);
}
CTEST(validation_time, time_overover) 
{
	int res = InputTime(720);
	const int exp = 0;
	ASSERT_EQUAL(exp, res);
}
CTEST(validation_time, time_zero) 
{
	int res = InputTime(0);
	const int exp = 1;
	ASSERT_EQUAL(exp, res);
}
CTEST(validation_time, time_equal) 
{
	int res = InputTime(365);
	const int exp = 1;
	ASSERT_EQUAL(exp, res);
}