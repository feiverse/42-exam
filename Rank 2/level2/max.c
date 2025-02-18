Assignment name  : max
Expected files   : max.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

int		max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0.










	
int	max(int *tab, unsigned int len)
{
	if (len == 0)
		return 0;
		
	int max = tab[0];
	for (unsigned int v = 1; v < len; v++)
		if (tab[v] > max)
			max = tab[v];
	
	return max;
}


// test

#include <stdio.h>

int main()
{
    int arr1[] = {1, 9, 7, 2, 8};
    int arr2[] = {-10, -3, -19, -6};
    int arr3[] = {42};
    int arr4[] = {};
    
    printf("%d\n", max(arr1, 5)); // 9
    printf("%d\n", max(arr2, 4)); // -3
    printf("%d\n", max(arr3, 1)); // 42
    printf("%d\n", max(arr4, 0)); // 0

    return 0;
}
