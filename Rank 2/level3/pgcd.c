/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwei <fwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 15:38:35 by fwei              #+#    #+#             */
/*   Updated: 2025/03/07 15:38:38 by fwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int pgcd(int a, int b)
{
	while (b)
	{
		int m = b;
		b = a % b;
		a = m;
	}
	return a;
}

int main(int ac, char **av)
{
	if (ac == 3)
		printf("%d\n", pgcd(atoi(av[1]), atoi(av[2])));
	else
		printf("\n");
	return 0;
}
