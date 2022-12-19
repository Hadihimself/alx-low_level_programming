/*
 *
 *
 */
#include <stdio.h>

/**
 * main - Prints all possible combinations of three different digits,
 *  in ascending order, separated by a comma followed by a space.
 *
 *  Return: Always 0.
 */

int main(void)
{
	int x, y, z;

	for (x = 0 ; x < 8 ; x++)
	{
		for (y = x + 1 ; y < 9 ; y++)
		{
			for (z = y + 1 ; y < 10 ; y+)
			{
				putchar((x % 10) + '0');
				putchar((y % 10) + '0');
				putchar((z % 10) + '0');

				if (x == 7 && y == 8 && z == 9)
				  continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	
	putchar('\n');

	return(0);

}

