#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char line[300];
	//char line2[300];

	FILE *fileptr = fopen("Employees_File.txt", "r");

	fgets(line, 300, fileptr);
	printf("%s", line);

	fgets(line, 300, fileptr);
	printf("%s", line);

	fclose(fileptr);

	return (0);
}

