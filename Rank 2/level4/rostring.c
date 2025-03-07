/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwei <fwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 16:14:41 by fwei              #+#    #+#             */
/*   Updated: 2025/03/07 16:17:09 by fwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rostring(char *s)
{
	int v = 0, rise = 0, done = 0, x = 1;

	while (s[v] == ' ' || s[v] == '\t')
		v++;

	rise = v;
	while (s[v] && s[v] != ' ' && s[v] != '\t')
		v++;
	done = v;

	while (s[v] == ' ' || s[v] == '\t')
		v++;

	while (s[v])
	{
		if (s[v] != ' ' && s[v] != '\t')
		{
			if (!x)
				write(1, " ", 1);
			x = 0;

			while (s[v] && s[v] != ' ' && s[v] != '\t')
			{
				write(1, &s[v], 1);
				v++;
			}
		}
		else
			v++;
	}
	if (rise != done && !x)
		write(1, " ", 1);
	while (rise < done)
	{
		write(1, &s[rise], 1);
		rise++;
	}
}

int	main(int ac, char **av)
{
	if (ac > 1 && av[1][0])
		rostring(av[1]);
	write(1, "\n", 1);
	return 0;
}
