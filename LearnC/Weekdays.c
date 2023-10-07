#include <stdio.h>
#include <string.h>

/**
 * main - prints out the day corresponding to the number
 *	entered by a user.
 * Return: Always 0 (Success)
 * Author: dz1dzor
 */

int main(void)
{
	int i, j;
	char days[7] = ("Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"
			"Friday", "Saturday");
	/**
	 * days[0] = "Sunday";
	 * days[1] = "Monday";
	 * days[2] = "Tuesday";
	 * days[3] = "Wednesday";
	 * days[4] = "Thursday";
	 * days[5] = "Friday";
	 * days[6] = "Saturday";
	 */

	printf("Enter in any number from 1 to 7 to see its corresponding day: ");
	scanf("%d", &j);

	i = j - 1;
	switch (days[i])
	{
		case 0:
			printf("The day of the week is %d.\n", days[0]);
			break;
		case 1:
			printf("The day of the week is %d.\n", days[1]);
			break;
		case 2:
			printf("The day of the week is %d.\n", days[2]);
			break;
		case 3:
			printf("The day of the week is %d.\n", days[3]);
			break;
		case 4:
			printf("The day of the week is %d.\n", days[4]);
			break;
		case 5:
			printf("The day of the week is %d.\n", days[5]);
			break;
		case 6:
			printf("The day of the week is %d.\n", days[6]);
			break;
		default:
			break;
	}

	return (0);
}
