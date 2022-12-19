#include"main.h"
/**
 * swap_int
 * @a= pointer to int 
 * @b pointer to another int
 *
 * Return: void
 */

void swap_int(&a, &b)
{
	int x;
	x = &a;
	&a = &b;
	&b = x;
}
