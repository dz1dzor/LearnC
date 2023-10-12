#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 *
 * Author: dz1dzor
 */
int main(void)
{
	int array[5] = {1, 2, 3, 4, 5}, i = 0;

	while (i < 5)
	{
		printf("%d\t%p\n", array[i], &array[i]);
		printf("%d\t%p\n", *(array + i), &array[i]);
		printf("%d\t%p\n", i[array], &array[i]);
		i++;
	}

	return (0);
}

