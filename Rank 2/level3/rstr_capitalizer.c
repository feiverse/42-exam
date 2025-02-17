Assignment name  : rstr_capitalizer
Expected files   : rstr_capitalizer.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes one or more strings and, for each argument, puts 
the last character that is a letter of each word in uppercase and the rest
in lowercase, then displays the result followed by a \n.

A word is a section of string delimited by spaces/tabs or the start/end of the
string. If a word has a single letter, it must be capitalized.

A letter is a character in the set [a-zA-Z]

If there are no parameters, display \n.

Examples:

$> ./rstr_capitalizer | cat -e
$
$> ./rstr_capitalizer "a FiRSt LiTTlE TESt" | cat -e
A firsT littlE tesT$
$> ./rstr_capitalizer "SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
seconD tesT A littlE biT   moaR compleX$
   but... thiS iS noT thaT compleX$
     okay, thiS iS thE lasT 1239809147801 buT noT    thE leasT    T$
$> 





#include <unistd.h>

void    rsc(char *s)
{
    int v = 0;

    while (s[v])
    {
        char c = s[v];
        if (c >= 65 && c <= 90)
            c += 32;
        if ((c >= 97 && c <= 122) &&
            (s[v + 1] == ' ' || s[v + 1] == '\t' || s[v + 1] == '\0'))
            c -= 32;

        write(1, &c, 1);
        v++;
    }
}

int    main(int ac, char **av)
{
    if (ac < 2)
    {
        write(1, "\n", 1);
        return 0;
    }

    for (int v = 1; v < ac; v++)
    {
        rsc(av[v]);
        write(1, "\n", 1);
    }
    return 0;
}