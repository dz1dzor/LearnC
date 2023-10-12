#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 * Author: dz1dzor
 */

int main(void)
{
	int i = 89;
	const int *p = &i;

	printf("%d\n", *p);

	return (0);
}

