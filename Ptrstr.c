#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 *
 * Author: dz1dzor
 */
int main(void)
{
	char name[10], *nm;

	printf("Enter your first name: ");
	scanf("%s", name);
	nm = name;

	printf("Your name is ");
	while (*nm != '\0')
	{
		printf("%c", *nm);
		nm++;
	}
	putchar('\n');

	return (0);
}

