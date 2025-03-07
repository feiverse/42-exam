/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwei <fwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 23:16:26 by fwei              #+#    #+#             */
/*   Updated: 2025/03/07 23:16:27 by fwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putstr(char *s)
{
	while (*s)
		write(1, s++, 1);
}

void	putnbr(int n)
{
	if (n > 9)
		putnbr(n / 10);
	char c = n % 10 + '0';
	write(1, &c, 1);
}

int	main(void)
{
	for (int v = 1; v <= 100; v++)
	{
		if (v % 15 == 0)
			putstr("fizzbuzz");
		else if (v % 3 == 0)
			putstr("fizz");
		else if (v % 5 == 0)
			putstr("buzz");
		else
			putnbr(v);
		putstr("\n");
	}
	return 0;
}
