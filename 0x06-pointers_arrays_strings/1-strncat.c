#include "main.h"

/**
 * _strncat - copy from n.
 * @dest: Destination string
 * @src: String for adding
 * @n: is th number of chars to copy
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, k, num;

	i = 0;
	while (dest[i] != '\0')
		i++;

	j = 0;
	while (src[j] != '\0')
		j++;
	if (n >= j)
		num = j;
	else
		num = n;

	for (k = 0; k < num && src[k] != '\0'; k++)
	{
		dest[i] = src[k];
		i++;
	}
	if (k < n)
		dest[k] = '\0';

	return (dest);
}
