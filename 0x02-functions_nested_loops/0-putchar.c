#include </alx-low_level_programming/0x02-functions_nested_loops/main.h>
int main (void)
{
	char *h ="_putchar";
	
	while (h)
	{
		_putchar(*h);
		h++;
	}

	_putchar('\n');

	return (0);
}
