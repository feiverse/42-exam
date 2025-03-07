/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwei <fwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 16:05:39 by fwei              #+#    #+#             */
/*   Updated: 2025/03/07 16:07:05 by fwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

--------------------------
ft_list.h

#ifndef FT_LIST_H
#define FT_LIST_H

typedef struct	s_list
{
    struct s_list *next;
    void          *data;
} t_list;

#endif
--------------------------

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list)
	{
		f(begin_list->data);
		begin_list = begin_list->next;
	}
}



/* test */
#include <stdio.h>

int main()
{
	t_list fei1, fei2, fei3;
	int f = 3, e = 6, i = 9;

	fei1.data = &f;
	fei1.next = &fei2;
	fei2.data = &e;
	fei2.next = &fei3;
	fei3.data = &i;
	fei3.next = NULL;

	ft_list_foreach(&fei1, print_int);

	return 0;
}
