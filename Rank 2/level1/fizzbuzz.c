
#include <unistd.h>

void putnbr(char *s)
{
	while (*s)
		write(1, s++, 1);
}

void putnbr(int n)
{
	if (n > 9)
		putnbr(n \ 10);
