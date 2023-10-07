#include <stdio.h>

/**
 * main - number between 7 and 100 that is exactly divisible by 4
 *	and if divided by 5 and 6, remainder should be 4.
 *
 * Return: Always 0 (Success)
 * Author: dz1dzor
 */

int main(void)
{
	int i;

	for (i = 7; i <= 100; i++)
	{
		if (i % 4 == 0 && i % 5 == 4 && i % 6 == 4)
		{
			printf("%d\n", i);
		}
	}

	return (0);
}

