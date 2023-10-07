#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fileptr = fopen("Employees_File.txt", "a");

	fprintf(fileptr, "Janet Doe, Customer Service\nAma Doe, PRO\n");

	fclose(fileptr);

	return (0);
}

