#include "main.h"



/**
 *  _strlen - Returns the length of a string
 * @s: String to count
 *
 * Return: String length 
 */

int _puts(char *s)
{
		int c = 0;
		
		for (; *s != '\0'; s++)
		{
			_putchar(*s);
		}
		
		_putchar('\n');

}
