#include <stdio.h>

/**
 * main - Entry point
 *
 * Author: dz1dzor
 */

int main(void)
{
	int age;

	printf("What is your age?");
	scanf("%d", &age);

	if (age >= 18)
		printf("\'Eligible for Voting\'\n.");
	else
		;
}

