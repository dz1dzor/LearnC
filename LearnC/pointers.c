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
	int pnt = 2334;
	int *pnter = &pnt;
	/* char alphabets[6];

	   for (i = 0; i < 6; i++)
	   {
	   scanf("%c", &alphabets);
	   }
	   printf("%c \n", alphabets[3]);*/

	printf("%p \n", &pnter);
	printf("%i \n", *pnter);

	printf("The size of a long double is %ld \n", sizeof(void));



	printf("\n");
	return (0);
}

