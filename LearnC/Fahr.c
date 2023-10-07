#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
	float fahr, celcius, lower, upper, step;

	/**
	 *lower = 0;
	 *upper = 300;
	 *step = 20;
	 */

	fahr = lower;
	printf("Fahrenheit-Celcius Table\n");
	while (fahr <= UPPER)
	{
		celcius = 5.0 * (fahr - 32.0) / 9.0;
		printf("%3.0lf\t%6.1lf\n", fahr, celcius);
		fahr += STEP;
	}
	printf("\nReverse Order\n");
	for (fahr = UPPER; fahr >= LOWER; fahr -= STEP)
	{
		celcius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0lf\t%6.1lf\n", fahr, celcius);
	}
}

