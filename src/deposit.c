int InputValue(double v)
{
	if (v >= 10000) return 1;
	return 0;
}

int InputTime(int t)
{
	if (t >= 0 && t <= 365) return 1;
	return 0;
}

double TaskCalculations(int t, double v)
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
	return v;
}
