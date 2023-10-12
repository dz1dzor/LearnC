#include <stdio.h>

/**
 * main - print out the returned value from a user-defined function
 * Return: Always 0 (Success)
 *
 * Author: dz1dzor
 */
int _sum(int num1, int num2, int num3);

int main(void)
{
	int a, b, c, sum;

	printf("Finding the sum of the 3 numbers.\n");
	printf("================================\n");
	printf("Enter in the first number: ");
	scanf("%d", &a);
	printf("Enter in the second number: ");
	scanf("%d", &b);
	printf("Enter in the third number: ");
	scanf("%d", &c);

	sum = _sum(a, b, c);
	printf("The sum of those 3 numbers is %d.\n", sum);

	return (0);
}

/**
 * _sum - add three numbers
 * @num1: the first number
 * @num2: the second number
 * @num3: the third number
 *
 * Return: the total sum of the three numbers
 */
int _sum(int num1, int num2, int num3)
{
	int sum;

	sum = num1 + num2 + num3;

	return (sum);
}

