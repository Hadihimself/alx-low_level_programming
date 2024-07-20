#include "main.h"
#include "string.h"

/**
* print_rev - this function prints s in reverse
* @s: String to count
* Return: String length
*/

void print_rev(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
		i++;

	for (i -= 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
