#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * Author: dz1dzor
 */

int main(void)
{
	int i;
	/*int n;*/
	char alphabets[26];

	for (i = 0; i <= 26; i++)
	{
		/*alphabets[6] = i;*/
		scanf("%c", &alphabets[i]);
		printf("%c", alphabets[i]);
	}
	printf("\n");
	/*printf("%c \n", alphabets[5]);*/

	return (0);
}

