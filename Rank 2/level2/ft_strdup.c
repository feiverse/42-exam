/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwei <fwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 14:55:47 by fwei              #+#    #+#             */
/*   Updated: 2025/03/07 14:58:47 by fwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int arc = 0;
	
	while (src[arc])
		arc++;
	
	char *dup = (char *)malloc(arc + 1);
	if (!dup)
		return NULL;

	for (int v = 0; v <= arc; v++)
		dup[v] = src[v];
	return dup;
}



/* test */
#include <stdio.h>

int main()
{
	char *v1 = "Salut, fei";
	char *v2 = ft_strdup(v1);
	
	if (v2)
	{
        printf("Original: %s\n", v1);
        printf("Duplicate: %s\n", v2);
        free(v2);
	}
    else
	{
        printf("Memory KO!!!\n");
	}
    return 0;
}
