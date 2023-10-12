#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 *
 * Author: dz1dzor
 */
int main(void)
{
	int i, j, k;

	void date(int dd, int mm, int yy);

	printf("Enter the day of the month: ");
	scanf("%d", &i);
	printf("Enter the number corresponding to the month: ");
	scanf("%d", &j);
	printf("Enter the last two numbers of the year: ");
	scanf("%d", &k);

	date(i, j, k);

	return (0);
}

/**
 * date - prints today's date
 * @dd: day
 * @mm: month
 * @yy: year
 * Return: nothing
 */
void date(int dd, int mm, int yy)
{
	printf("%d/%d/%d\n", dd, mm, yy);
}

