#include <stdio.h>

/**
 * main - entry point
 * Return: void
 * Author: dz1dzor
 */

int main(void)
{
	volatile int x = 23;
	volatile const int y = 26;

	++x;
	/*++y;*/
	printf("%d, %d\n", x, y);
}

