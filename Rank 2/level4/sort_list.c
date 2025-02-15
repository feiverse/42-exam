Assignment name  : sort_list
Expected files   : sort_list.c
Allowed functions: 
--------------------------------------------------------------------------------

Write the following functions:

t_list	*sort_list(t_list* lst, int (*cmp)(int, int));

This function must sort the list given as a parameter, using the function 
pointer cmp to select the order to apply, and returns a pointer to the 
first element of the sorted list.

Duplications must remain.

Inputs will always be consistent.

You must use the type t_list described in the file list.h 
that is provided to you. You must include that file 
(#include "list.h"), but you must not turn it in. We will use our own 
to compile your assignment.

Functions passed as cmp will always return a value different from 
0 if a and b are in the right order, 0 otherwise.

For example, the following function used as cmp will sort the list 
in ascending order:

int ascending(int a, int b)
{
	return (a <= b);
}



-----------------------------------
./subjects/list.h (Don't need push it)

typedef struct s_list t_list;

struct s_list
{
	int     data;
	t_list  *next;
};
------------------------------------

#include "list.h"
#include <stdlib.h>

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
    t_list *h = lst;
    int		t;

    if (!lst) 
        return NULL;

    while (lst->next)
    {
        if (!cmp(lst->data, lst->next->data))
        {
            t = lst->data;
            lst->data = lst->next->data;
            lst->next->data = t;
            lst = h;
        }
        else
            lst = lst->next;
    }
    return h;
}






// test
#include <stdio.h>

t_list *create_node(int data)
{
    t_list *new_node = (t_list *)malloc(sizeof(t_list));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

int ascending(int a, int b)
{
    return (a <= b);
}

void print_list(t_list *lst)
{
    while (lst)
    {
        printf("%d -> ", lst->data);
        lst = lst->next;
    }
    printf("NULL\n");
}

int main()
{
    t_list *head = create_node(3);
    head->next = create_node(1);
    head->next->next = create_node(2);

    printf("Before sorting:\n");
    print_list(head);

    head = sort_list(head, ascending);

    printf("After sorting:\n");
    print_list(head);

    return 0;
}
//
Before sorting:
3 -> 1 -> 2 -> NULL
After sorting:
1 -> 2 -> 3 -> NULL