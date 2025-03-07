/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwei <fwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 15:31:22 by fwei              #+#    #+#             */
/*   Updated: 2025/03/07 15:43:57 by fwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int	ft_list_size(t_list *begin_list)
{
	int	v = 0;
	while (begin_list)
	{
		v++;
		begin_list = begin_list->next;
	}
	return v;
}




/* test */

#include <stdio.h>
#include <stdlib.h>

t_list *create_node(void *data)
{
	t_list *v = (t_list *)malloc(sizeof(t_list));
	if (!v)
		return NULL;
	
	v->data = data;
	v->next = NULL;
	return v;
}

int main()
{
	t_list *v = create_node("un");

	v->next = create_node("deux");
	v->next->next = create_node("troix");
	printf("List size: %d\n", ft_list_size(v)); // 3

	return 0;
}
