/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwei <fwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 15:11:52 by fwei              #+#    #+#             */
/*   Updated: 2025/03/07 15:13:40 by fwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	if (len == 0)
		return 0;

	int max = tab[0];
	for (unsigned int v = 1; v < len; v++)
		if (tab[v] > max)
			max = tab[v];

	return max;
}


/* test */
#include <stdio.h>

int main()
{
	int v1[] = {1, 9, 7, 2, 8};
	int v2[] = {-10, -3, -19, -6};
	int v3[] = {42};
	int v4[] = {};

	printf("%d\n", max(v1, 5)); // 9
	printf("%d\n", max(v2, 4)); // -3
	printf("%d\n", max(v3, 1)); // 42
	printf("%d\n", max(v4, 0)); // 0
	return 0;
}
