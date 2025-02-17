Assignment name  : ft_range
Expected files   : ft_range.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_range(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at start and end at end (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 1, 2 and 3.
- With (-1, 2) you will return an array containing -1, 0, 1 and 2.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing 0, -1, -2 and -3.







#include <stdlib.h>

int *ft_range(int start, int end)
{
    int size = (start <= end) ? (end - start + 1) : (start - end + 1);
    int *arr = (int *)malloc(sizeof(int) * size);
    if (!arr)
        return NULL;

    int v = 0;
    while (start != end)
    {
        arr[v++] = start;
        start += (start < end) ? 1 : -1;
    }
    arr[v] = end;
    return arr;
}



// test

int	main(void)
{
	int start = 2;
	int end = 7;
	int *arr = ft_range(start, end);
	
	if (!arr)
		return 1;
	
	for (int v = 0; v <= (end - start); v++)
		printf("%d ", arr[v]);

	printf("\n");
	free(arr);
}
