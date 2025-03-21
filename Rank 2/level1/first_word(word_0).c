/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwei <fwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 23:15:08 by fwei              #+#    #+#             */
/*   Updated: 2025/03/16 00:29:38 by fwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	if (ac == 2)
    {
		int v = 0;
		while (av[1][v] == ' ' || av[1][v] == '\t')
			v++;
		while (av[1][v] && av[1][v] != ' ' && av[1][v] != '\t')
			write(1, &av[1][v++], 1);
	}
	write(1, "\n", 1);
	return 0;
}
