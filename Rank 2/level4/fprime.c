/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwei <fwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 15:59:26 by fwei              #+#    #+#             */
/*   Updated: 2025/03/07 16:00:41 by fwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	fprime(int n)
{
	if (n == 1)
	{
		printf("1");
		return;
	}
	int x = 1;
	for (int v = 2; v <= n; v++)
	{
		while (n % v == 0)
		{
			if (!x)
				printf("*");
			printf("%d", v);
			n /= v;
			x = 0;
		}
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		fprime(atoi(av[1]));
	printf("\n");
	return 0;
}
