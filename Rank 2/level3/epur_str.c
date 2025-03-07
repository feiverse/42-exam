/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwei <fwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 15:22:08 by fwei              #+#    #+#             */
/*   Updated: 2025/03/07 15:43:17 by fwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	epur_str(char *s)
{
    int v = 0, space = 0;

	while (s[v] == ' ' || s[v] == '\t')
			v++;
	while (s[v])
	{
		if (s[v] == ' ' || s[v] == '\t')
			space = 1;
		else
		{
			if (space)
				write(1, " ", 1);
			space = 0;
			write(1, &s[v], 1);
		}
		v++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2 && av[1][0])
		epur_str(av[1]);
	write(1, "\n", 1);
	return 0;
}
