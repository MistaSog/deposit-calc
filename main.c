#include <stdio.h>

int main()
{
	int v, t;
	printf("Enter the value (v >= 10000)\n");
	while(1)
	{
		scanf("%d",&v);
		if (v >= 10000) break;
		printf("Wrong value! Try again\n");
	}
	printf("Enter the time (0 <= t <= 365)\n");
	while(1)
	{
		scanf("%d",&t);
		if (t >= 0 && t <= 365) break;
		printf("Wrong time! Try again\n");
	}
	return 0;
}
