#include <unistd.h>
int -putchar(char);

int _putchar(char c)
{
	return (write(1, &c, 1));
}
