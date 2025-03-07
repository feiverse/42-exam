/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwei <fwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 15:40:32 by fwei              #+#    #+#             */
/*   Updated: 2025/03/07 15:42:24 by fwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rsc(char *s)
{
	int v = 0;
	
	while (s[v])
	{
		char c = s[v];
		if (c >= 65 && c <= 90)
			c += 32;
		if ((c >= 97 && c <= 122) &&
			(s[v + 1] == ' ' || s[v + 1] == '\t' || s[v + 1] == '\0'))
			c -= 32;
		write(1, &c, 1);
		v++;
	}
}

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		write(1, "\n", 1);
		return 0;
    }
	
	for (int v = 1; v < ac; v++)
	{
		rsc(av[v]);
		write(1, "\n", 1);
	}
	return 0;
}
