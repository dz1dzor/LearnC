#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 *
 * Author: dz1dzor
 */
int main(void)
{
	int src[5] = {1, 2, 3, 4, 5};
	int dest[5], i = 0;

	while (i < 5 )
	{
		dest[i] = src[4 - i];
		printf("%d\t%d\n", src[i], dest[i]);
		i++;
	}

	return (0);
}

