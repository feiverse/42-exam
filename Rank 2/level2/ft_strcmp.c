/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwei <fwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 14:46:46 by fwei              #+#    #+#             */
/*   Updated: 2025/03/07 14:49:00 by fwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_strcmp(char *s1, char *s2)
{
    while (*s1 && (*s1 == *s2))
    {
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}





/* test */
#include <stdio.h> 

int main()
{
	printf("%d\n", ft_strcmp("abc", "abc"));  // 0
	printf("%d\n", ft_strcmp("abc", "abd"));  // neg
	printf("%d\n", ft_strcmp("abd", "abc"));  // postive
	printf("%d\n", ft_strcmp("abc", "a"));    // postive
	printf("%d\n", ft_strcmp("a", "abc"));    // neg
	return 0;
}
