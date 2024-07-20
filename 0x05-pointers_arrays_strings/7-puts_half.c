#include "main.h"
#include "string.h"

/**
* puts_half - this function prints half of the geven string
* @str: String to count
* Return: String length
*/

void puts_half(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
		i++;

	i--;

	if (i % 2 == 0)
		j = (i + 1) / 2;
	else if (i % 2 != 0)
		j = i / 2;

	for (j += 1; j <= i; j++)
		_putchar(str[j]);

	_putchar('\n');
}
