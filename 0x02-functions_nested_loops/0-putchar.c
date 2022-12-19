#include "main.h"

/**
 * main - in main functionj
 * take a break
 * Return: always 0
 */

int main(void)
{
	char *h = "_putchar";
	int i;

	for (i = 0 ; i <= 7 ; i++)
	{
		_putchar(*h);
		h++;
	}

	_putchar('\n');

	return (0);
}
