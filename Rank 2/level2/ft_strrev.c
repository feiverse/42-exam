Assignment name  : ft_strrev
Expected files   : ft_strrev.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

char    *ft_strrev(char *str);














char	*ft_strrev(char *str)
{
    char v, *done = str;
    if (!str) 
		return str;

    while (*done) 
		done++;  
    done--;  

    while (str < done)
    {
        v = *str;
        *str++ = *done;
        *done-- = v;
    }
    return str;
}
