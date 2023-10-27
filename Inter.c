#include "Header.h"

/**
 * main - Entry point
 * Return: Always 0 (Success)
 *
 * Author: dz1dzor
 */
int main(void)
{
	int x, y;

	printf("Enter in a value for X: ");
	scanf("%d", &x);
	printf("Enter in a value for Y: ");
	scanf("%d", &y);

	_swap(&x, &y);

	printf("X = %d and Y = %d\n", x, y);

	return (0);
}

/**
 * _swap - interchanges the values
 * @a: first value
 * @b: second value
 */
void _swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;

	printf("X = %d and Y = %d\n", *a, *b);
}
