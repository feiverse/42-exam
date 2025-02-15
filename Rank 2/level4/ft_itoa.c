
Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);














#include <stdlib.h>

char    *ft_itoa(int n) 
{
    int v = 0;
    long num = n;

    if (num <= 0) 
    {
        v++;
        num = -num;
    }
    long fei = num;
    while (fei > 0) 
    {
        v++;
        fei /= 10;
    }
    char *res = (char *)malloc(v + 1);
    if (!res)
        return NULL;

    res[v] = '\0';

    if (n == 0)
        res[0] = '0';

    if (n < 0)
        res[0] = '-';
    while (num > 0) 
    {
        res[--v] = (num % 10) + '0';
        num /= 10;
    }

    return res;
}


//  
int main() 
{
    char *s = ft_itoa(-12345);
    printf("%s\n", s);
    free(s);
    return 0;
}