Assignment name  : ft_list_size
Expected files   : ft_list_size.c
Allowed functions: 
--------------------------------------------------------------------------------

Write a function that returns the number of elements in the linked list that's
passed to it.

It must be declared as follows:

int	ft_list_size(t_list *begin_list);

You must use the following structure in your program ft_list_size.c :

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;







typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int	ft_list_size(t_list *begin_list)
{
	int	count = 0;
	while (begin_list)
	{
		count++;
		begin_list = begin_list->next;
	}
	return count;
}




// test

#include <stdio.h>
#include <stdlib.h>

t_list *create_node(void *data)
{
    t_list *new_node = (t_list *)malloc(sizeof(t_list));
    if (!new_node)
        return NULL;
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

int main()
{
    t_list *head = create_node("First");
    head->next = create_node("Second");
    head->next->next = create_node("Third");

    printf("List size: %d\n", ft_list_size(head)); // 3

    return 0;
}