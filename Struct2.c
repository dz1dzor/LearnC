#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 *
 * Author: dz1dzor
 */
int main(void)
{
	struct info
	{
		char name[25], month[10];
		int day, year;
	};
	struct person
	{
		struct info prs;
	};

	struct person prs1;

	printf("What is your full name?\n");
	fgets(prs1.prs.name, 25, stdin);

	printf("In words, what month were you born in?\n");
	scanf("%s", prs1.prs.month);

	printf("What day and year were you born?\n");
	scanf("%d %d", &prs1.prs.day, &prs1.prs.year);

	printf("You are called %s", prs1.prs.name);
	printf(" and your date of birth is ");
	printf("%d %s %d\n", prs1.prs.day, prs1.prs.month, prs1.prs.year);

	return (0);
}

