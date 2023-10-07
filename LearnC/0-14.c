#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point to print out numbers 0 to 14
 *
 * Return: Always 0 (Success)
 *
 * Author: dzidzor
 */

int main(void)
{
	int i;

	i = 0;
	for (i = 0; i <= 14; i += 2)
	{
		printf("%5d", i);
	}
	printf("\n");

	return (0);
}

