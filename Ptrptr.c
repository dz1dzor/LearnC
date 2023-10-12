#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 *
 * Author: dz1dzor
 */
int main(void)
{
	int i = 98;
	int *p, **q, ***r, ****s;

	p = &i;
	q = &p;
	r = &q;
	s = &r;

	printf("%d\t%p\t%p\t%p\t%p\n", i, p, q, r, s);
	printf("%d\t%d\t\t%d\t\t%d\t\t%d\n", i, *p, **q, ***r, ****s);

	return (0);
}

