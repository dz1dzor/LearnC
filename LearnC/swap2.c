#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0 (Success)
 * Author: dz1dzor
 */

int main(void)
{
	int a, b;

	a = 3;
	b = 5;

	a += b;
	b = a - b;
	a = a -b;

	printf("%d, %d", a, b);

	return (0);
}

