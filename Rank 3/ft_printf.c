/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fei <fei@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 06:36:37 by fei               #+#    #+#             */
/*   Updated: 2025/06/03 04:29:51 by fei              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	va_list	done;
	int		v = 0, m = 0;

	va_start(done, fei);
	while (fei[v])
	{
		if (fei[v] == '%' && fei[v + 1])
		{
			v++;
			if (fei[v] == 's')
				m += putstr(va_arg(done, char *));
			else if (fei[v] == 'd')
				m += putnbr(va_arg(done, int));
			else if (fei[v] == 'x')
				m += puthex(va_arg(done, unsigned int));
		}
		else
			m += putchar(fei[v]);
		v++;
	}
	va_end(done);
	return m;
}
