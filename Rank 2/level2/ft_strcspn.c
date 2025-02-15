Assignment name	: ft_strcspn
Expected files	: ft_strcspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strcspn
(man strcspn).

The function should be prototyped as follows:

size_t	ft_strcspn(const char *s, const char *reject);















#include <stddef.h>

size_t ft_strcspn(const char *s, const char *reject)
{
    size_t v, w;

    for (v = 0; s[v]; v++)
    {
        for (w = 0; reject[w]; w++)
        {
            if (s[v] == reject[w])
                return v;
        }
    }
    return v;
}








// test
#include <stdio.h>

int main()
{
    printf("%zu\n", ft_strcspn("hello world", "od"));  // 4
    printf("%zu\n", ft_strcspn("abcdef", "xyz"));      // 6
    printf("%zu\n", ft_strcspn("123456", "36"));       // 2
    return 0;
}
