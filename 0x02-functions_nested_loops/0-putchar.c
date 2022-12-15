#include <main.h>
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
