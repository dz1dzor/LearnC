#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point
 * Return: Always 0 (Success)
 * Author: dz1dzor
 */

struct StaffData
{
	char name[50];
	char role[50];
	char department[50];
	char branch[50];
	int age;
	double anl_slr;
};

int main(void)
{
	struct StaffData staff1;
	strcpy(staff1.name, "Bismarck Kete");
	strcpy(staff1.role, "Chief Engineer");
	strcpy(staff1.department, "Tech Department");
	strcpy(staff1.branch, "Headquarters");
	staff1.age = 21;
	staff1.anl_slr = 2.0E5;

	struct StaffData staff2;
	strcpy(staff2.name, "Michael Nyarku");
	strcpy(staff2.role, "Head of HR");
	strcpy(staff2.department, "HR Department");
	strcpy(staff2.branch, "Headquarters");
	staff2.age = 23;
	staff2.anl_slr = 1.5E5;

	struct StaffData staff3;
	strcpy(staff3.name, "Rejoice Seyram Dzani");
	strcpy(staff3.role, "Admnistrator");
	strcpy(staff3.department, "Medical Department");
	strcpy(staff3.branch, "Headquarters");
	staff3.age = 21;
	staff3.anl_slr = 1.2E5;

	struct StaffData staff4;
	strcpy(staff4.name, "Kofi Baboni");
	strcpy(staff4.role, "Public Relations Officer");
	strcpy(staff4.department, "Public Relations");
	strcpy(staff4.branch, "Headquarters");
	staff4.age = 25;
	staff4.anl_slr = 1.15285E5;

	//printf("%c\n\n", staff1);
	//printf("%c\n\n", staff2);
	//printf("%c\n\n", staff3);
	//printf("%c\n\n", staff4);

	int *staff1_age = &staff1.age;

	printf("%s\n", *&staff1.name);
	printf("%d\n", *staff1_age);
	printf("%p\n%p\n", &staff1, &staff1.department);

	return (0);
}

