#include <ctest.h>
#include "deposit.h"

CTEST(validation_value, value_zero) 
{
	int res = InputValue(0);
	const int exp = 1;
	ASSERT_EQUAL(exp, res);
}
CTEST(validation_value, value_negative) 
{
	int res = InputValue(-1);
	const int exp = 0;
	ASSERT_EQUAL(exp, res);
}
CTEST(validation_value, value_near10000) 
{
	int res = InputValue(9999);
	const int exp = 0;
	ASSERT_EQUAL(exp, res);
}
CTEST(validation_value, value_equal10000) 
{
	int res = InputValue(10000);
	const int exp = 1;
	ASSERT_EQUAL(exp, res);
}
CTEST(validation_value, value_over10000) 
{
	int res = InputValue(10001);
	const int exp = 1;
	ASSERT_EQUAL(exp, res);
}
CTEST(validation_value, value_overover10000) 
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
CTEST(validation_time, time_over265) 
{
	int res = InputTime(366);
	const int exp = 0;
	ASSERT_EQUAL(exp, res);
}
CTEST(validation_time, time_overover365) 
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
CTEST(validation_time, time_equal365) 
{
	int res = InputTime(365);
	const int exp = 1;
	ASSERT_EQUAL(exp, res);
}