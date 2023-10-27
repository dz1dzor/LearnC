#include <stdio.h>

struct time
{
	int hours, minutes, seconds;
};

struct car
{
	struct time st;
	struct time rt;
	int car_number;
};

/**
 * main - Entry point
 * Return: Always 0 (Success)
 * Author: dz1dzor
 */
int main(void)
{
	struct time
	{
		int hours, minutes, seconds;
	};

	struct car
	{
		struct time st;
		struct time rt;
		int car_number;
	};

	struct car car1;

	printf("What is your car number?\n");
	scanf("%d", &car1.car_number);

	/* Taking the duration of the journey */
	printf("In hours, how long is the journey?\n");
	scanf("%d", &car1.rt.hours);

	/* Taking the starting time of the journey */
	printf("When are you starting the journey?\n");
	scanf("%d %d %d", &car1.st.hours, &car1.st.minutes, &car1.st.seconds);

	/* Info display */
	printf("The registerd DVLA number of the car is %d\n", car1.car_number);
	printf("Starting time is %d:%d:%d\n", car1.st.hours, car1.st.minutes, car1.st.seconds);

	printf("They will get there at %d:", car1.st.hours + car1.rt.hours);

	car1.rt.minutes = car1.st.minutes;
	car1.rt.seconds = car1.rt.seconds;
	printf("%d:%d\n", car1.rt.minutes, car1.rt.seconds);

	return (0);
}

