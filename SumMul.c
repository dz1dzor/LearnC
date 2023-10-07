#include <stdio.h>

/**
 * main - Entry point
 *
 * Author: dz1dzor
 */

int main(void)
{
	int n, n1, n2, n3;

	printf("Enter three whole numbers: ");
	n = scanf("%d %d %d", &n1, &n2, &n3);

	if (n == 3)
	{
		printf("The sum of the numbers is: %d\n", n1 + n2 + n3);
		printf("The product of the numbers is: %d\n", n1 * n2 * n3);
	}
}

