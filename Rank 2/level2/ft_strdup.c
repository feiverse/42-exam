Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src);








#include <stdlib.h>

char *ft_strdup(char *src)
{
    int fei = 0;
    
    while (src[fei])
        fei++;

    char *dup = (char *)malloc(fei + 1);
    if (!dup)
        return NULL;

    for (int v = 0; v <= len; v++)
        dup[v] = src[v];
    return dup;
}





// test
#include <stdio.h>

int main()
{
    char *s1 = "Salut, fei";
    char *s2 = ft_strdup(s1);

    if (s2)
    {
        printf("Original: %s\n", s1);
        printf("Duplicate: %s\n", s2);
        free(s2);
    }
    else
    {
        printf("Memory KO!!!\n");
    }

    return 0;
}