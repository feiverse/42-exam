/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwei <fwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 15:15:57 by fwei              #+#    #+#             */
/*   Updated: 2025/03/07 15:16:06 by fwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	snake_to_camel(char *s)
{
	int v = 0, set = 0;

	while (s[v])
	{
		if (s[v] == '_')
			set = 1;
		else
		{
			if (set && s[v] >= 97 && s[v] <= 122)
				s[v] -= 32;
			write(1, &s[v], 1);
			set = 0;
		}
		v++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		snake_to_camel(av[1]);
	write(1, "\n", 1);
	return 0;
}
