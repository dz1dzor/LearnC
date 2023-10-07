#include <stdio.h>

/**
 * main - print alphabets from a to j
 *
 * Return: Always 0 (Success)
 * Author: dz1dzor
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'j'; a++)
	{
		printf("%2c", a);
	}
	printf("\n");

	return (0);
}

