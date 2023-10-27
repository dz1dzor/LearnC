#include "Header.h"

/**
 * main - Entry point
 * Return: Always 0 (Success)
 *
 * Author: dz1dzor
 */
int main(void)
{
	int x, y, s, p, m;
	double d;

	printf("Enter in the first number: ");
	scanf("%d", &x);
	printf("Enter in the second number: ");
	scanf("%d", &y);

	_opera(&x, &y, &s, &p, &m, &d);

	printf("The sum and product of the values are %d and %d resp.\n", s, p);
	printf("The subt and div of the values are %d and %f resp.\n", m, d);
	return (0);
}

/**
 * _opera - summing and multiplying values
 * @n1: first number
 * @n2: second number
 * @sum: sum of the numbers
 * @prod: product of the numbers
 */
void _opera(int *n1, int *n2, int *sum, int *prod, int *subt, double *div)
{
	double n_1, n_2;

	*sum = *n1 + *n2;
	*prod = *n1 * *n2;
	*subt = *n1 - *n2;

	n_1 = *n1, n_2 = *n2;
	*div = n_1 / n_2;
}

