#include <stdio.h>

int main()
{
	float fahr, celcius, lower, upper, step;

	lower = -17;
	upper = 148;
	step = 11;

	celcius = lower;
	while (celcius <= upper)
	{
		fahr = 32.0 - (celcius / (5.0/9.0));
		printf("%3.0lf\t%6.2lf\n", celcius, fahr);
		celcius += step;
	}
}

