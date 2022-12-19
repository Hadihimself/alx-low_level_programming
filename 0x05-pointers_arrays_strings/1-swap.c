#include "main.h"

/**
 * swap_int - swap 2 ints
 *
 *@a:pointer to int
 *@b:pointer to another int
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int x;
	x = *a;
	*a = *b;
	*b = x;
}
