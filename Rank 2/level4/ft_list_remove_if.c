/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwei <fwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 16:08:45 by fwei              #+#    #+#             */
/*   Updated: 2025/03/07 16:10:04 by fwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *v, *w, *fei;

	while (*begin_list && cmp((*begin_list)->data, data_ref) == 0)
	{
		fei = *begin_list;
		*begin_list = (*begin_list)->next;
		free(fei);
	}

	w = *begin_list;
	v = w ? w->next : NULL;

	while (v)
	{
		if (cmp(v->data, data_ref) == 0)
		{
			w->next = v->next;
			free(v);
			v = w->next;
		}
		else
		{
			w = v;
			v = v->next;
		}
	}
}
