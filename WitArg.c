#include <stdio.h>

/**
 * main - prints out the average of numbers
 * Return: Always 0 (Success)
 *
 * Author: dz1dzor
 */
double _average();
int average;

int main(void)
{
	double total;

	total = _average();
	printf("=============================\n");
	printf("The final number is %f with address %p.\n", total, &total);

	return (0);
}

/**
 * _sub - finds the average of three numbers
 * Return: the final answer
 */
double _average()
{
	int _sum(int nu1, int nu2, int nu3);
	int num1, num2, num3;

	printf("Finding the average of 3 numbers\n");
	printf("================================\n");
	printf("Enter the first number: ");
	scanf("%d", &num1);
	printf("Enter the second number: ");
	scanf("%d", &num2);
	printf("Enter the second number: ");
	scanf("%d", &num3);

	average = _sum(num1, num2, num3) / 3;

	return (average);
}

/**
 * _sum - adds the three numbers
 * @num1: first number
 * @num2: second number
 * @num3: third number
 * Return: the sum
 */
int _sum(int nu1, int nu2, int nu3)
{
	int sum;

	sum = nu1 + nu2 + nu3;

	return (sum);
}

