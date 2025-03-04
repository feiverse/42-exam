Assignment name	: ft_strpbrk
Expected files	: ft_strpbrk.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strpbrk
(man strpbrk).

The function should be prototyped as follows:

char	*ft_strpbrk(const char *s1, const char *s2);















char *ft_strpbrk(const char *s1, const char *s2)
{
    while (*s1)
    {
        for (const char *v = s2; *v; v++)
            if (*s1 == *v)
                return (char *)s1;
        s1++;
    }
    return NULL;
}






//test

#include <stdio.h>

int main()
{
    char str1[] = "Hey fei";
    char str2[] = "yf";
    char str3[] = "salut";

    printf("%s\n", ft_strpbrk(str1, str2)); // "y fei"
    printf("%s\n", ft_strpbrk(str1, str3)); // (null) 
    
    return 0;
}
