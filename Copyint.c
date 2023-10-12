#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 *
 * Author: dz1dzor
 */
int main(void)
{
	int src[5] = {1, 2, 3, 4, 5}, dest[5], i = 0;

	for (i = 0; i < 5; i++)
	{
		dest[i] = src[i];
		printf("%d\n", dest[i]);
	}

	return (0);
}

