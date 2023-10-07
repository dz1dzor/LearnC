#include <stdio.h>

/**
 * main - entry point
 *
 * Author: dz1dzor
 */

int main(void)
{
	int a;

	printf("Enter in an integer number: ");
	scanf("%d", &a);

	if (a < 10)
	{
		printf("%d\n", a);
	}
	else
	{
		printf("The number you entered is 10 or greater.\n");
	}
}

