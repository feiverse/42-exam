#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int	putchar(char c)
{
	return (write(1, &c, 1));
}

int	putstr(char *s)
{
	int	v = 0;

	if (!s)
		s = "(null)";
	while (*s)
		v += write(1, s++, 1);
	return v;
}

int	putnbr(int nb)
{
	int		v = 0;
	long	n = nb;

	if (n < 0)
	{
		v += putchar('-');
		n = -n;
	}
	if (n >= 10)
		v += putnbr(n / 10);
	v += putchar(n % 10 + '0');
	return v;
}

int	puthex(unsigned int n)
{
	int		v = 0;
	char	*hex = "0123456789abcdef";

	if (n >= 16)
		v += puthex(n / 16);
	v += putchar(hex[n % 16]);
	return v;
}

int	ft_printf(const char *fei, ...)
{
	va_list	v;
	int		w = 0, m = 0;

	va_start(v, fei);
	while (fei[w])
	{
		if (fei[w] == '%' && fei[w + 1])
		{
			w++;
			if (fei[w] == 's')
				m += putstr(va_arg(v, char *));
			else if (fei[w] == 'd')
				m += putnbr(va_arg(v, int));
			else if (fei[w] == 'x')
				m += puthex(va_arg(v, unsigned int));
		}
		else
			m += putchar(fei[w]);
		w++;
	}
	va_end(v);
	return m;
}
