/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fei <fei@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 06:36:37 by fei               #+#    #+#             */
/*   Updated: 2025/05/29 06:37:38 by fei              ###   ########.fr       */
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
	return (v);
}

int	putnbr(int n)
{
	long	nb = n;
	int		v = 0;

	if (nb < 0)
	{
		v += putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		v += putnbr(nb / 10);
	v += putchar(nb % 10 + '0');
	return (v);
}

int	puthex(unsigned int n)
{
	char	*hex = "0123456789abcdef";
	int		v = 0;

	if (n >= 16)
		v += puthex(n / 16);
	v += putchar(hex[n % 16]);
	return (v);
}

int	ft_printf(const char *fei, ...)
{
	va_list	arc;
	int		v = 0, w = 0;

	va_start(arc, fei);
	while (fei[v])
	{
		if (fei[v] == '%' && fei[v + 1])
		{
			v++;
			if (fei[v] == 's')
				w += putstr(va_arg(arc, char *));
			else if (fei[v] == 'd')
				w += putnbr(va_arg(arc, int));
			else if (fei[v] == 'x')
				w += puthex(va_arg(arc, unsigned int));
		}
		else
			w += putchar(fei[v]);
		v++;
	}
	va_end(arc);
	return (w);
}
