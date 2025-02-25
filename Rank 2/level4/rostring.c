Assignment name  : rostring
Expected files   : rostring.c
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a program that takes a string and displays this string after rotating it
one word to the left.

Thus, the first word becomes the last, and others stay in the same order.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string.

Words will be separated by only one space in the output.

If there's less than one argument, the program displays \n.

Example:

$>./rostring "abc   " | cat -e
abc$
$>
$>./rostring "Que la      lumiere soit et la lumiere fut"
la lumiere soit et la lumiere fut Que
$>
$>./rostring "     AkjhZ zLKIJz , 23y"
zLKIJz , 23y AkjhZ
$>
$>./rostring "first" "2" "11000000"
first
$>
$>./rostring | cat -e
$
$>


#include <unistd.h>

void rostring(char *s)
{
    int v = 0, rise = 0, done = 0, fei = 1;

    while (s[v] == ' ' || s[v] == '\t')
        v++;

    rise = v;
    while (s[v] && s[v] != ' ' && s[v] != '\t')
        v++;
    done = v;

    while (s[v] == ' ' || s[v] == '\t')
        v++;

    while (s[v])
    {
        if (s[v] != ' ' && s[v] != '\t')
        {
            if (!fei)
                write(1, " ", 1);
            fei = 0;

            while (s[v] && s[v] != ' ' && s[v] != '\t')
            {
                write(1, &s[v], 1);
                v++;
            }
        }
        else
            v++;
    }
    if (rise != done && !fei)
        write(1, " ", 1);
    while (rise < done)
    {
        write(1, &s[rise], 1);
        rise++;
    }
}

int main(int ac, char **av)
{
    if (ac > 1 && av[1][0])
        rostring(av[1]);
    write(1, "\n", 1);
    return 0;
}
