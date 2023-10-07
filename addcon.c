#include <stdio.h>

/**
 * main - add 10 consecutive numbers starting from 1
 * Return: Always 0 (Success)
 * Author: dz1dzor
 */

int main(void)
{
	int i = 1, sum;

	while (i <= 10)
	{
		sum += i;
		i++;
	}
	printf("The total sum of 10 consecutive numbers starting from 1 ");
	printf("is %d\n", sum);

	return (0);
}

