/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwei <fwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 14:51:14 by fwei              #+#    #+#             */
/*   Updated: 2025/03/07 14:53:08 by fwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	res = 0, sign = 1;

	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign = -1;
	while (*str >= '0' && *str <= '9')
		res = res * 10 + (*str++ - '0');
	return res * sign;
}






/* test */
#include <stdio.h>

int main() 
{
	printf("%d\n", ft_atoi("369"));
	printf("%d\n", ft_atoi("-727")); 
	printf("%d\n", ft_atoi("  +888"));
	printf("%d\n", ft_atoi("  -42fwei"));
	return 0;
}
