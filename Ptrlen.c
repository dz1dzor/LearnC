#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 *
 * Author: dz1dzor
 */
int main(void)
{
	int len1, len2;
	char *s, str[30];

	printf("Enter in any sentence: ");
	/*scanf("%s", str);*/
	fgets(str, 30, stdin);
	s = str;

	while (*s != '\0')
	{
		printf("%c", *s);
		s++;
		len1++;
		if (*s != 32)
			len2++;
	}
	printf("The length with space is %d\n", len1);
	printf("The length without space is %d\n", len2);

	return (0);
}

