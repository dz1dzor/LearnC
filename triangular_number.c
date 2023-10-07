#include <stdio.h>

/**
 * main - generates the triangular number of a given number
 * Return: Always 0 (Success)
 * Author: dz1dzor
 */

int main(void)
{
	int i, j, tri = 0;

	printf("Enter a number to see its triangular number: ");
	scanf("%d", &i);

	for (j = 1; j <= i; ++j)
	{
		tri = tri + j;
	}
	printf("The triangular number for that number is %d\n", tri);

	return (0);
}

