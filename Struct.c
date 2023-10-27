#include <stdio.h>
#include <stdlib.h>

/**
 * struct staff - holds info about employees
 * @staff: employees
 */
struct staff
{
	char name[10];
	int age;
	char role[30];
	float salary;
};

/**
 * main - Entry point
 * Return: Always 0 (Success)
 *
 * Author: dz1dzor
 */
int main(void)
{
	struct staff CEO = {"Kofi", 36, "CEO", 540000.00};
	struct staff VP = {"Ama", 33, "Vice President", 490000.00};
	struct staff COO = {"Kwaku", 34, "Chief Operating Officer", 510000.00};
	struct staff Teller1 = {"Abena", 29, "Teller", 230000.00};
	struct staff Security = {"Kojo", 32, "Head of Security", 190000.00};
	struct staff testrun;

	testrun = CEO;

	printf("The size of a struct is %lu.\n", sizeof(CEO));
	printf("The %s's name is %s.\n", testrun.role, testrun.name);
	printf("He is %d years old ", testrun.age);
	printf("and he is earning $%f.\n", testrun.salary);

	return (0);
}


