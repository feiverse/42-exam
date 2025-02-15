Assignment name  : ft_rrange
Expected files   : ft_rrange.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_rrange(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at end and end at start (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 3, 2 and 1
- With (-1, 2) you will return an array containing 2, 1, 0 and -1.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing -3, -2, -1 and 0.







#include <stdlib.h>

int *ft_rrange(int start, int end)
{
    int size = (start > end) ? (start - end + 1) : (end - start + 1);
    int *arr = (int *)malloc(sizeof(int) * size);
    if (!arr)
        return NULL;
    
    for (int v = 0; v < size; v++)
        arr[v] = end > start ? end - v : end + v;
    
    return arr;
}






// test
#include <stdio.h>

void print_arr(int *arr, int size)
{
    for (int v = 0; v < size; v++)
        printf("%d ", arr[v]);
    printf("\n");
}

int main()
{
    int *arr;

    arr = ft_rrange(1, 3);
    print_arr(arr, 3); // 3 2 1
    free(arr);

    arr = ft_rrange(-1, 2);
    print_arr(arr, 4); // 2 1 0 -1
    free(arr);

    arr = ft_rrange(0, -3);
    print_arr(arr, 4); // -3 -2 -1 0
    free(arr);

    return 0;
}