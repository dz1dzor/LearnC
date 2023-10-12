#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 * Author: dz1dzor
 */
int main(void)
{
	char name[10];
	void SayHi(char *name);

	printf("Enter your first name: ");
	scanf("%s", name);

	SayHi(name);

	return (0);
}

/**
 * SayHi - greet me
 * Return: nothing
 */
void SayHi(char *n)
{
	printf("Hi %s\n", n);
}

