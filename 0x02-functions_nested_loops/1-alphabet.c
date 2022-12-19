#include "main.h"

/**
 * main - in main functionj
 * take a break
 * Return: always 0
 */

int main(void)
{

	int i;
        char *h = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0 ; i <= 25 ; i++)
	{
		_putchar(*h);
		h++;
	}

	_putchar('\n');

	return (0);
}
