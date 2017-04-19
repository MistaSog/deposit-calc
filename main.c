#include <stdio.h>

float InputValue()
{
	float v;
	printf("Enter the value (v >= 10000)\n");
	while(1){
		scanf("%f", &v);
		if (v >= 10000) break;
		printf("Wrong value! Try again\n");
	}
	return v;
}

int InputTime()
{
	int t;
	printf("Enter the time (0 <= t <= 365)\n");
	while(1){
		scanf("%d", &t);
		if (t >= 0 && t <= 365) break;
		printf("Wrong time! Try again\n");
	}
	return t;
}

void TaskCalculations(int t, float v)
{
	int timePer;
	if (t >= 0 && t <= 30) timePer=1;
	if (t >= 31 && t <= 120) timePer=2;
	if (t >= 121 && t <= 240) timePer=3;
	if (t >= 241 && t <= 365) timePer=4;
	if (v < 100000){
		switch(timePer){
			case 1: v -= (((v/100) * 10)/ 365) * t; break;
			case 2: v += (((v/100) * 2)/ 365) * t;  break;
			case 3: v += (((v/100) * 6)/ 365) * t;  break;
			case 4: v += (((v/100) * 12)/ 365) * t;  break;
		}
	}
	else{
		switch(timePer){
			case 1: v -= (((v/100) * 10)/ 365) * t; break;
			case 2: v += (((v/100) * 3)/ 365) * t;  break;
			case 3: v += (((v/100) * 8)/ 365) * t;  break;
			case 4: v += (((v/100) * 15)/ 365) * t;  break;
		}
	}
	printf("Value=%.2f \n", v);
}

int main()
{
	TaskCalculations(InputTime(),InputValue());
	return 0;
}
