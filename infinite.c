#include <stdio.h>

/**
 * main - print numbers in ascending and descending order using
 *	the infinite for loop.
 *
 * Return: Always 0 (Success)
 * Author: dz1dzor
 */

int main(void)
{
	int i;

	i = 0;
	for (;;)
	{
		printf("%5d %5d", i++, i--);
		i++;
	}

	printf("\n");

	return (0);
}

