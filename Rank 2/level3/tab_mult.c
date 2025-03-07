/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwei <fwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 15:46:44 by fwei              #+#    #+#             */
/*   Updated: 2025/03/07 15:47:09 by fwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putnbr(int n) 
{
	if (n > 9)
		putnbr(n / 10);
	char c = n % 10 + '0';
	write(1, &c, 1);
}

void	putstr(char *s) 
{
	while (*s)
		write(1, s++, 1);
}

int	atoi_s(char *s) 
{
	int n = 0;
	while (*s >= '0' && *s <= '9')
		n = n * 10 + (*s++ - '0');
	return n;
}

int	main(int ac, char **av) 
{
	if (ac == 2) 
	{
		int n = atoi_s(av[1]);
		for (int v = 1; v <= 9; v++) 
		{
			putnbr(v);
			putstr(" x ");
			putnbr(n);
			putstr(" = ");
			putnbr(v * n);
			putstr("\n");
		}
	}
	else
		putstr("\n");
	return 0;
}
