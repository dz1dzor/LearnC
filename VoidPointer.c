#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 * Author: dz1dzor
 */

int main(void)
{
	char c = 'a';
	void *p = &c;

	printf("%c\n", *(char *)p);

	return (0);
}

