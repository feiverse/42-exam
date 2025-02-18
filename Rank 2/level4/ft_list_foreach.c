Assignment name  : ft_list_foreach
Expected files   : ft_list_foreach.c, ft_list.h
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a list and a function pointer, and applies this
function to each element of the list.

It must be declared as follows:

void    ft_list_foreach(t_list *begin_list, void (*f)(void *));

The function pointed to by f will be used as follows:

(*f)(list_ptr->data);

You must use the following structure, and turn it in as a file called
ft_list.h:

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;



--------------------------
ft_list.h

#ifndef FT_LIST_H
#define FT_LIST_H

typedef struct s_list
{
    struct s_list *next;
    void          *data;
} t_list;

#endif
--------------------------

#include "ft_list.h"

void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    while (begin_list)
    {
        f(begin_list->data);
        begin_list = begin_list->next;
    }
}




// test

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
