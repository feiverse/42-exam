/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwei <fwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 15:45:06 by fwei              #+#    #+#             */
/*   Updated: 2025/03/07 15:46:11 by fwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	strc(char *s)
{
	int v = 0, src = 1;

	while (s[v])
	{
		char c = s[v];

		if (c >= 97 && c <= 122)
		{
			if (src)
				c -= 32;
		}
		else if (c >= 65 && c <= 90)
		{
			if (!src)
				c += 32;
		}
		write(1, &c, 1);

		src = (c == ' ' || c == '\t');
		v++;
	}
}

int	main(int ac, char **av)
{
	int v = 1;
	if (ac < 2)
		write(1, "\n", 1);
	else
	{
		while (v < ac)
		{
			strc(av[v]);
			write(1, "\n", 1);
			v++;
		}
	}
	return 0;
}
