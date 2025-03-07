/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwei <fwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 15:23:53 by fwei              #+#    #+#             */
/*   Updated: 2025/03/07 15:43:43 by fwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	expand_str(char *s)
{
	int v = 0, space3 = 0;

	while (s[v] == ' ' || s[v] == '\t')
		v++;
	
	while (s[v])
	{
		if (s[v] != ' ' && s[v] != '\t')
		{
			if (space3)
				write(1, "   ", 3);
			space3 =1;
			while (s[v] && s[v] != ' ' && s[v] != '\t')
				write(1, &s[v++], 1);
		}
		else
			v++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2 && av[1][0])
		expand_str(av[1]);
	write(1, "\n", 1);
	return 0;
}
