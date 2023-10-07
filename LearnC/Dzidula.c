#include <stdio.h>

/**
 * main - prints out the reverse of an array
 * Return: Always 0 (Success)
 * Author: dz1dzor
 */

int main(void)
{
	int i = 0, j = 6;
	char name[7] = {'D', 'z', 'i', 'd', 'u', 'l', 'a'};
	char dest[7];

	//while (name[i] != '\0')
	while (i < 7)
	{
		name[i] = dest[j];

		printf("%c", dest[j]);
		j--;
		i++;
	}
	printf("\n");

	return (0);
}
