#include <ctest.h>
#include <deposit.c>

double v=99999;
CTEST(caclulation_value_near100000, calculation_time30)
{
	ASSERT_DBL_NEAR_TOL(99177, TaskCalculations(30, v), 1);
}
CTEST(caclulation_value_near100000, calculation_time31)
{
	ASSERT_DBL_NEAR_TOL(100168, TaskCalculations(31, v), 1);
}
CTEST(caclulation_value_near100000, calculation_time120)
{
	ASSERT_DBL_NEAR_TOL(100656, TaskCalculations(120, v), 1);
}
CTEST(caclulation_value_near100000, calculation_time121)
{
	ASSERT_DBL_NEAR_TOL(101988, TaskCalculations(121, v), 1);
}
CTEST(caclulation_value_near100000, calculation_time240)
{
	ASSERT_DBL_NEAR_TOL(103944, TaskCalculations(240, v), 1);
}
CTEST(caclulation_value_near100000, calculation_time241)
{
	ASSERT_DBL_NEAR_TOL(107922, TaskCalculations(241, v), 1);
}

double v1=100001;
CTEST(caclulation_value_over100000, calculation_time30)
{
	ASSERT_DBL_NEAR_TOL(99179, TaskCalculations(30, v1), 1);
}
CTEST(caclulation_value_over100000, calculation_time31)
{
	ASSERT_DBL_NEAR_TOL(100255, TaskCalculations(31, v1), 1);
}
CTEST(caclulation_value_over100000, calculation_time120)
{
	ASSERT_DBL_NEAR_TOL(100987, TaskCalculations(120, v1), 1);
}
CTEST(caclulation_value_over100000, calculation_time121)
{
	ASSERT_DBL_NEAR_TOL(102653, TaskCalculations(121, v1), 1);
}
CTEST(caclulation_value_over100000, calculation_time240)
{
	ASSERT_DBL_NEAR_TOL(105261, TaskCalculations(240, v1), 1);
}
CTEST(caclulation_value_over100000, calculation_time241)
{
	ASSERT_DBL_NEAR_TOL(109905, TaskCalculations(241, v1), 1);
}