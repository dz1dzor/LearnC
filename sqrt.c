#include <stdio.h>
#include <math.h>

/**
 * main - print numbers from 1 to 9 and their square roots
 * Return: Always 0 (Success)
 * Author: dz1dzor
 */

int main(void)
{
	int i;

	for (i = 1; i <= 9; i++)
	{
		printf("%d %5.2f", i, sqrt(i));
	}

	printf("\n");

	return (0);
}

