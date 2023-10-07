#include <stdio.h>

int main()
{
	int c;

	c = getchar() != EOF;
	putchar(c);
	putchar('\n');
	putchar(EOF);
	putchar('\n');
	printf("%d\n", EOF);
}
