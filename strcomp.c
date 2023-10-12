#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 *
 * Author: dz1dzor
 */
int main(void)
{
	char str1[30], str2[30], *s1, *s2;
	int sim = 0, dsim = 0;

	printf("Enter in your sentence: ");
	fgets(str1, 30, stdin);
	s1 = str1;
	printf("Enter in your second sentence: ");
	fgets(str2, 30, stdin);
	s2 = str2;

	printf("%s", str1);
	printf("%s", str2);

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 == *s2)
			sim++;
		else
			dsim++;
		s1++;
		s2++;
	}
	printf("There are %d similar letters\n", sim);
	printf("There are %d disimilar letters\n", dsim);

	return (0);
}

