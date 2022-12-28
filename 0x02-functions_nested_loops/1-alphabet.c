#include "main.h"

/**
 * print_alphabet - in print_alphabet functionj
 * take a break
 * Return: always 0
 */

void print_alphabet(void)
{

	int i;
        char *h = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0 ; i <= 25 ; i++)
	{
		_putchar(*h);
		h++;
	}

	_putchar('\n');

}
