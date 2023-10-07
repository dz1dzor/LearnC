#include <string.h>
#include <stdio.h>

/**
 * main - searches for a character in a string
 * Return: Always 0 (Success)
 * Author: dz1dzor
 */

int main(void)
{
	int i;
	char v;
	char str[10];

	printf("Enter in any word that has not more than 10 letters: ");
	scanf("%s", str);
	//fgets(str);
	printf("Enter the character to look for in the word: ");
	scanf("%c", &v);
	v = getchar();

	for (i = 0; i < 10; i++)
	{
		if (str[i] == v)
		{
			printf("The character is the %d", i + 1);
			if (i >= 3)
				printf("th letter");
			else if (i == 1)
				printf("nd letter");
			else if (i == 2)
				printf("rd letter");
			else if (i == 0)
				printf("st letter");
			printf(" in the word.\n");
		}
		else if (v != str[i])
			printf("The letter isn't part of the word.\n");
	}
	//if (v != str[i])
	//	printf("The letter isn't part of the word.\n");
	//printf("Did it run?\n");

	return (0);
}

