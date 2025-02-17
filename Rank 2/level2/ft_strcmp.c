Assignment name  : ft_strcmp
Expected files   : ft_strcmp.c
Allowed functions:
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcmp (man strcmp).

Your function must be declared as follows:

int    ft_strcmp(char *s1, char *s2);
















int    ft_strcmp(char *s1, char *s2)
{
    while (*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return ((unsigned char)*s1 - (unsigned char)*s2);
}





// test
#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main()
{
    printf("%d\n", ft_strcmp("abc", "abc"));  // 0
    printf("%d\n", ft_strcmp("abc", "abd"));  // neg
    printf("%d\n", ft_strcmp("abd", "abc"));  // postive
    printf("%d\n", ft_strcmp("abc", "a"));    // postive
    printf("%d\n", ft_strcmp("a", "abc"));    // neg
    return 0;
}
