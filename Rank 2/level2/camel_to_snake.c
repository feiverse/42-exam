Assignment name  : camel_to_snake
Expected files   : camel_to_snake.c
Allowed functions: malloc, realloc, write
--------------------------------------------------------------------------------

Write a program that takes a single string in lowerCamelCase format
and converts it into a string in snake_case format.

A lowerCamelCase string is a string where each word begins with a capital letter
except for the first one.

A snake_case string is a string where each word is in lower case, separated by
an underscore "_".

Examples:
$>./camel_to_snake "hereIsACamelCaseWord"
here_is_a_camel_case_word
$>./camel_to_snake "helloWorld" | cat -e
hello_world$
$>./camel_to_snake | cat -e
$











#include <unistd.h>
#include <stdlib.h>

void camel_to_snake(char *s) 
{
    int v = 0;
    
    while (s[v]) 
    {
        if (s[v] >= 65 && s[v] <= 90) 
        {
            write(1, "_", 1);
            s[v] += 32;
        }
        write(1, &s[v], 1);
        v++;
    }
}

int main(int ac, char **av) 
{
    if (ac == 2) 
    {
        camel_to_snake(av[1]);
    }
    write(1, "\n", 1);
    return 0;
}
