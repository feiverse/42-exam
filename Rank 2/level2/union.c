/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwei <fwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 15:18:08 by fwei              #+#    #+#             */
/*   Updated: 2025/03/07 15:18:14 by fwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_union(char *a, char *b)
{
	int v = 0;
	int asc[256] = {0};
	
	while (a[v])
	{
		if (asc[(int)a[v]] == 0)
		{
			asc[(int)a[v]] = 1;
			write(1, &a[v], 1);
		}
		v++;
	}
	v = 0;
	while (b[v])
	{
		if (asc[(int)b[v]] == 0)
		{
			asc[(int)b[v]] = 1;
			write(1, &b[v], 1);
		}
		v++;
	}
}

int main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
	return 0;
}
