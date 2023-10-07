#include <stdio.h>

/**
 * main - entry point
 * Return: void
 * Author: dz1dzor
 */

int main(void)
{
	int v, w, x, y;

	v = 2;
	w = 3;
	/*x = v + w++;*/
	y = v + w++;
	printf("%d, %d, %d, %d\n", v, w, x, y);
}


