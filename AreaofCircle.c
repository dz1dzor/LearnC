#include "Header.h"

#define PI 3.14
#define store scanf

/**
 * main - Entry point
 * Return: Always 0 (Success)
 *
 * Author: dz1dzor
 */
int main(void)
{
	float r;

	printf("Enter the radius of the circle: ");
	store("%f", &r);

	printf("The area of the circle is %.2f cm^2\n", circle(r));

	return (0);
}

/**
 * circle - calculates the area of a circle
 * @r: radius
 *
 * Return: area
 */
float circle(float r)
{
	float area;

	area = PI * r * r;

	return (area);
}
