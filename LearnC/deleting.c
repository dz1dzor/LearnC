#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int num[20] = {0}, j, k, n, p, t;

	printf("\n Enter number of elements :");
	scanf("%d", &n);

	printf("\n Enter elements :");
	for (j = 0; j < n; j++)
		scanf("%d", &num[j]);

	printf("\n Elements are :");
	for (j = 0; j < n; j++)
		printf("\n %d %p", num[j], &num[j]);

	printf("\n Enter element number to delete :");
	scanf("%d", &p);
	p--;
	for (j = 0; j < n; j++)
	{
		if (j >= p)
			num[j] = num[j + 1];
	}
	for (j = 0; j < n; j++)
		if (num[j] != 0)
			printf("\n %d %p", num[j], &num[j]);
}
