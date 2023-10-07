#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 * Author: dz1dzor
 */

int main(void)
{
	int a, b, c;

	printf("Enter a number: ");
	scanf("%d", &a);
	printf("Enter another number: ");
	scanf("%d", &b);

	c = a;
	a = b;
	b = c;

	printf("After the swapping, the values are:");
	printf("%d, %d.\n", a, b);

	return (0);
}

