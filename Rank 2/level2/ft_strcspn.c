/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwei <fwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 14:53:36 by fwei              #+#    #+#             */
/*   Updated: 2025/03/07 15:02:57 by fwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t v, w;
	
	for (v = 0; s[v]; v++)
	{
		for (w = 0; reject[w]; w++)
		{
			if (s[v] == reject[w])
				return v;
		}
	}
	return v;
}




/* test */
#include <stdio.h>

int main()
{
	printf("%zu\n", ft_strcspn("hello world", "od"));  // 4
	printf("%zu\n", ft_strcspn("abcdef", "xyz"));      // 6
	printf("%zu\n", ft_strcspn("123456", "36"));       // 2
	return 0;
}
