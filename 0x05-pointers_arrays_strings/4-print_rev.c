#include "main.h"
#include "string.h"

/**
* _puts - this function prints s
* @s: String to count
* Return: String length
*/

void print_rev(char *s)
{
	int i;
	int x;

	x = strlen(s);

	for (i = x; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
