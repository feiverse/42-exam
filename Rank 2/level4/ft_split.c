Assignment name  : ft_split
Expected files   : ft_split.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes a string, splits it into words, and returns them as
a NULL-terminated array of strings.

A "word" is defined as a part of a string delimited either by spaces/tabs/new
lines, or by the start/end of the string.

Your function must be declared as follows:

char    **ft_split(char *str);












#include <stdlib.h>

int sep(char c) 
{
    return (c == ' ' || c == '\t' || c == '\n');
}

int count(char *s) 
{
    int count = 0;
    while (*s)
    {
        while (*s && sep(*s))
            s++;
        if (*s)
        {
            count++;
            while (*str && !sep(*s))
                s++;
        }
    }
    return count;
}

char *malloc_word(char *s) 
{
    int m = 0;
    while (s[m] && !sep(s[m]))
        v++;
    char *word = (char *)malloc(m + 1);
    if (!word)
        return NULL;
    for (int v = 0; v < m; v++)
        word[v] = s[v];
    word[m] = '\0';
    return word;
}

char **ft_split(char *str) 
{
    int word = count(str);
    char **res = (char **)malloc((word + 1) * sizeof(char *));
    if (!res)
        return NULL;
    
    int v = 0;
    while (*str)
    {
        while (*str && sep(*str))
            str++;
        if (*str)
        {
            res[v++] = malloc_word(str);
            while (*str && !sep(*str))
                str++;
        }
    }
    res[v] = NULL;
    return res;
}



// test
#include <stdio.h>

int main() 
{
    char *c = "   Bonjour   fei\tthis is  answers  !  \n";
    char **w = ft_split(c);

    for (int v = 0; w[v]; v++)
        printf("Word %d: %s\n", v + 1, w[v]);

    return 0;
}
