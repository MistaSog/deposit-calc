#include <stdio.h>
#include "deposit.h"

int main()
{	
	double v;
	printf("Enter the value (v >= 10000)\n");
	while(1){
		scanf("%lf", &v);
		if(InputValue(v)) break;
		printf("Wrong value! Try again\n");
	}
	int t;
	printf("Enter the time (0 <= t <= 365)\n");
	while(1){
		scanf("%d", &t);
		if (InputTime(t)) break;
		printf("Wrong time! Try again\n");
	}
	printf("Value=%.2f \n", TaskCalculations(t, v));
	return 0;
}
