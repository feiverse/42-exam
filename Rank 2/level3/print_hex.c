/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwei <fwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 15:39:28 by fwei              #+#    #+#             */
/*   Updated: 2025/03/07 15:39:31 by fwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(unsigned int n)
{
	char	hex[] = "0123456789abcdef";

	if (n >= 16)
		print_hex(n / 16);
	write(1, &hex[n % 16], 1);
}

int	atoiv(char *s)
{
	int n = 0;
	while (*s >= '0' && *s <= '9')
		n = n * 10 + (*s++ - '0');
	return n;
}

int	main(int ac, char **av)
{
	if (ac == 2)
		print_hex(atoiv(av[1]));
	write(1, "\n", 1);
	return 0;
}
