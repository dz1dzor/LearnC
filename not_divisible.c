#include <stdio.h>

/**
 * main - print numbers between 1 to 100 which
 *	are not divisible by 2, 3 and 5.
 *
 * Return: Always 0 (Success)
 * Author: dz1dzor
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0)
		{
			printf("%5d", i);
		}
	}
	printf("\n");

	return (0);
}

