#include "main.h"

/**
 * print_alphabet_x10 - in print_alphabet_x10 functionj
 * take a break
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	int i, j;
	char *h = "abcdefghijklmnopqrstuvwxyz";

	for (j = 0 ; j <= 10 ; j++)
	{
		for (i = 0 ; i <= 25 ; i++)
		{
			_putchar(*h);
			h++;
		}

	_putchar('\n');
	}

}
