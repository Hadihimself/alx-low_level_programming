#include "main.h"
#include "string.h"

/**
* rev_string - this function prints s in reverse
* @s: String to count
* Return: String length
*/

void rev_string(char *s)
{
	int i, j;
	char temp;

	i = 0;
	while (s[i] != '\0')
		i++;

	i--;

	for (j = 0; j <= i; j++, i--)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
	}
}
