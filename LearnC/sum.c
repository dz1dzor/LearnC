#include <stdio.h>
#include <math.h>

/**
 * main - finds the sum of numbers and prints the sum out
 * Return: Always 0 (Success)
 * Author: dz1dzor
 */

int main(void)
{
	int i, n, result1 = 0;
	int result2 = 0;

	printf("Enter in a number: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		result1 = result1 + i;
		result2 = result2 + i * i;
	}
	printf("The totals are %d and %d.\n", result1, result2);

	return (0);
}

