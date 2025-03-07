/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwei <fwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 15:21:07 by fwei              #+#    #+#             */
/*   Updated: 2025/03/07 15:43:30 by fwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	atoiv(char *s)
{
	int n = 0;
	while (*s >= '0' && *s <= '9')
		n = n * 10 + (*s++ - '0');
	return n;
}

int	prime(int n)
{
	if (n < 2)
		return 0;
	for (int v = 2; v * v <= n; v++)
		if (n % v == 0)
			return 0;
	return 1;
}

void	putnbr(int n)
{
	if (n > 9)
		putnbr(n / 10);
	char c = n % 10 + '0';
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "0\n", 2);
		return 0;
	}
	int n = atoiv(av[1]);
	if (n <= 0) 
	{
		write(1, "0\n", 2);
		return 0;
	}
	int sum = 0;
	for (int v = 2; v <= n; v++)
		if (prime(v))
			sum += v;
	putnbr(sum);
	write(1, "\n", 1);
	return 0;
}
