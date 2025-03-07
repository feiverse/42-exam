/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwei <fwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 16:01:15 by fwei              #+#    #+#             */
/*   Updated: 2025/03/07 16:04:46 by fwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	int v = 0;
	long n = nbr;
	
	if (n <= 0)
	{
		v++;
		n = -n;
	}
	long fei = n;
	while (fei > 0)
	{
		v++;
		fei /= 10;
	}
	char *res = (char *)malloc(v + 1);
	if (!res)
		return NULL;

	res[v] = '\0';
	if (nbr == 0)
		res[0] = '0';
	if (nbr < 0)
		res[0] = '-';
	while (n > 0)
	{
		res[--v] = (n % 10) + '0';
		n /= 10;
	}
	return res;
}



/* text */
#include <stdio.h>

int main() 
{
	printf("%s\n", ft_itoa(123));
    return 0;
}
