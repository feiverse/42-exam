/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwei <fwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 23:09:12 by fwei              #+#    #+#             */
/*   Updated: 2025/03/07 23:14:43 by fwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	repeat_alpha(char c)
{
	int    count;

	if (c >= 97 && c <= 122)
		count = c - 97 + 1;
	else if (c >= 65 && c <= 90)
		count = c - 65 + 1;
	else
		count = 1;
	while(count--)
		write(1, &c, 1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int	v = 0;
		while (av[1][v])
		{
			repeat_alpha(av[1][v]);
			v++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
