Assignment name  : inter
Expected files   : inter.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.

The display will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Examples:

$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$

  
  
#include <unistd.h>

void    inter(char *a, char *b)
{
    int v = 0;
    int asc[256] = {0};

    while (b[v])
    {
        asc[(unsigned char)b[v]] = 1;
        v++;
    }

    v = 0;
    while (a[v])
    {
        if (asc[(unsigned char)a[v]] == 1)
        {
            write(1, &a[v], 1);
            asc[(unsigned char)a[v]] = 2;
        }
        v++;
    }
    write(1, "\n", 1);
}

int main(int ac, char **av)
{
    if (ac == 3)
        inter(av[1], av[2]);
    else
        write(1, "\n", 1);
    return 0;
}