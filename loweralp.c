#include "main.h"

/**
 * lower - returns the lower alphabet of the same alphabet
 * @c: character
 * Return: character
 * Author: dz1dzor
 */

int lower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 'a' - 'A');
	else
		return (c);
}

int main(void)
{
	int c = 'A';

	lower(c);

	return (0);
}

