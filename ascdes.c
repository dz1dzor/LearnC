#include <stdio.h>

/**
 * main - print numbers from 1 to 10 in ascending order
 *	and then descending order
 *
 * Return: Always 0 (Success)
 * Author: dz1dzor
 */

int main(void)
{
	int i;

	for (i = 1; i < 11; i++)
	{
		printf("%5d", i);
	}

	printf("\n");
	for (i = 10; i > 0; i--)
	{
		printf("%5d", i);
	}

	printf("\n");

	return (0);
}

