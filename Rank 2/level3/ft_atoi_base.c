/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwei <fwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 15:35:04 by fwei              #+#    #+#             */
/*   Updated: 2025/03/07 15:43:50 by fwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	fei(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int v, res = 0, sign = 1;

	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str)
	{
		v = fei(*str);
		if (v == -1 || v >= str_base)
			break;
		res = res * str_base + v;
		str++;
	}
	return res * sign;
}




/* test */
#include <stdio.h>

int main()
{
	printf("%d\n", ft_atoi_base("1A", 16));     // 26
	printf("%d\n", ft_atoi_base("-101", 2));    // -5
	printf("%d\n", ft_atoi_base("123", 10));    // 123
	printf("%d\n", ft_atoi_base("7F", 16));     // 127
	printf("%d\n", ft_atoi_base("1101", 2));    // 13
	printf("%d\n", ft_atoi_base("-2F", 16));    // -47
	return 0;
}
