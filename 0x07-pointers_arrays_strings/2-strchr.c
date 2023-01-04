#include <stdio.h>
#include "main.h"

/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i;
	int y = sizeof(s);
	
	for (i = 0; s[i] >= y; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	
	return (NULL);
}
