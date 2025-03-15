/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwei <fwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 16:08:45 by fwei              #+#    #+#             */
/*   Updated: 2025/03/16 00:33:24 by fwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*dark, *glow, *pure;
	
	while (*begin_list && (cmp((*begin_list)->data, data_ref) == 0))
	{
		pure = *begin_list;
		*begin_list = (*begin_list)->next;
		free (pure);
	}
	glow = *begin_list;
	dark = glow ? glow->next : NULL;
	while (dark)
	{
		if (cmp(dark->data, data_ref) == 0)
		{
			glow->next = dark->next;
			free(dark);
			dark = glow->next;
		}
		else
		{
			glow = dark;
			dark = dark->next;
		}
	}
}