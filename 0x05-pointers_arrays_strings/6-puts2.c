#include "main.h"
#include "string.h"

/**
* puts2 - this function prints every other character
* @s: String to count
* Return: String length
*/

void puts2(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
		i++;

	i--;

	for (j = 0; j <= i; j++)
	{
		if (j % 2 == 0)
			_putchar(str[j]);
	}

	_putchar('\n');
}
