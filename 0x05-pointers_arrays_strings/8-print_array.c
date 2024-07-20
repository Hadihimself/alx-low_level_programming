#include "main.h"
#include "string.h"

/**
* print_array - this function prints s in reverse
* @a: Array name
* @n: Array index total
* Return: Always 0.
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i + 1 != n)
			printf(", ");
	}

	printf("\n");
}
