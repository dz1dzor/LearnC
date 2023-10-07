#include <stdio.h>

/**
 * main - displaying how do-while loop works
 * Return: Always 0 (Success)
 * Author: dz1dzor
 */

int main(void)
{
	int i;

	i = 5;
	do
	{
		printf("this is a program of do-while loop.\n");
		i--;
	}
	while (i != 0);

	return (0);
}

