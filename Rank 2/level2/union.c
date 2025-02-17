Assignment name  : union
Expected files   : union.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in either one of the strings.

The display will be in the order characters appear in the command line, and
will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Example:

$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$>





#include <unistd.h>

void ft_union(char *s1, char *s2)
{
    int v = 0;
    int asc[256] = {0};

    while (s1[v])
    {
        if (asc[(int)s1[v]] == 0)
        {
            asc[(int)s1[v]] = 1;
            write(1, &s1[v], 1);
        }
        v++;
    }

    v = 0;
    while (s2[v])
    {
        if (asc[(int)s2[v]] == 0)
        {
            asc[(int)s2[v]] = 1;
            write(1, &s2[v], 1);
        }
        v++;
    }
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        ft_union(av[1], av[2]);
    }
    write(1, "\n", 1);
    return 0;
}