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

int	check_in(char *s, char c, int index)
{
	for (int v = 0; v < index; v++)
		if (s[v] == c)
			return 1;
	return 0;
}

int check_out(char *s2, char c)
{
	while (*s2)
		if (*s2++ == c)
			return 1;
	return 0;
}

int main(int ac, char **av)
{
	if (ac == 3)
	{
		for (int v = 0; av[1][v]; v++)
			if (!check_in(av[1], av[1][v], v) && check_out(av[2], av[1][v]))
				write(1, &av[1][v], 1);
	}
	write(1, "\n", 1);
	return 0;
}
