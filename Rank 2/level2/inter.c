/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwei <fwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 15:06:33 by fwei              #+#    #+#             */
/*   Updated: 2025/03/07 15:07:48 by fwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    inter(char *a, char *b)
{
	int v = 0;
	int asc[256] = {0};

	while (b[v])
	{
		asc[(unsigned char)b[v]] = 1;
		v++;
	}

	v = 0;
	while (a[v])
	{
		if (asc[(unsigned char)a[v]] == 1)
		{
			write(1, &a[v], 1);
			asc[(unsigned char)a[v]] = 2;
		}
		v++;
	}
}

int main(int ac, char **av)
{
	if (ac == 3)
		inter(av[1], av[2]);
	write(1, "\n", 1);
	return 0;
}
