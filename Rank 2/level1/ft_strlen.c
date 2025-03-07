/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwei <fwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 23:06:50 by fwei              #+#    #+#             */
/*   Updated: 2025/03/07 23:07:54 by fwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	v = 0;

	while (str[v])
		v++;
	return v;
}



/* test */
#include <stdio.h>

int ft_strlen(char *s);

int main()
{
	printf("%d\n", ft_strlen("Hey Fei")); // 7
	printf("%d\n", ft_strlen(""));	// 0
	printf("%d\n", ft_strlen("Le monde de l’imagination est sans frontières."));  // 49
	return 0;
}
