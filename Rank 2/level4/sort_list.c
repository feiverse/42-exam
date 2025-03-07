/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwei <fwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 16:19:56 by fwei              #+#    #+#             */
/*   Updated: 2025/03/07 16:22:26 by fwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdlib.h>

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int v;
	t_list *done = lst;
	if (!lst)
		return NULL;

	while (lst->next)
	{
		if (!cmp(lst->data, lst->next->data))
		{
			v = lst->data;
			lst->data = lst->next->data;
			lst->next->data = v;
			lst = done;
		}
		else
			lst = lst->next;
	}
	return done;
}
