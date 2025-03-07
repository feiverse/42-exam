/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwei <fwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 14:59:57 by fwei              #+#    #+#             */
/*   Updated: 2025/03/07 15:02:50 by fwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	while (*s1)
	{
		for (const char *v = s2; *v; v++)
			if (*s1 == *v)
				return (char *)s1;
			s1++;
	}
	return NULL;
}





/* test */

#include <stdio.h>

int main()
{
	char v1[] = "Hey fei";
	char v2[] = "yf";
	char v3[] = "salut";
	
	printf("%s\n", ft_strpbrk(v1, v2)); // "y fei"
	printf("%s\n", ft_strpbrk(v1, v3)); // (null) 

	return 0;
}
