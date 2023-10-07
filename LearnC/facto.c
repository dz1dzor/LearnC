#include <stdio.h>

/**
 * main - calculates the factorial of a given number
 * Return: Always 0 (Success)
 * Author: dz1dzor
 */

int main(void)
{
	int i, n, total;

	printf("Enter in a number: ");
	scanf("%d", &n);

	total = n;
	i = n - 1;
	while (i < n && i != 0)
	{
		total *= i;
		i--;
	}
	printf("The factorial of %d is %d.\n", n, total);

	return (0);
}

