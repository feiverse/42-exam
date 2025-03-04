Assignment name  : tab_mult
Expected files   : tab_mult.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays a number's multiplication table.

The parameter will always be a strictly positive number that fits in an int,
and said number times 9 will also fit in an int.

If there are no parameters, the program displays \n.

Examples:

$>./tab_mult 9
1 x 9 = 9
2 x 9 = 18
3 x 9 = 27
4 x 9 = 36
5 x 9 = 45
6 x 9 = 54
7 x 9 = 63
8 x 9 = 72
9 x 9 = 81
$>./tab_mult 19
1 x 19 = 19
2 x 19 = 38
3 x 19 = 57
4 x 19 = 76
5 x 19 = 95
6 x 19 = 114
7 x 19 = 133
8 x 19 = 152
9 x 19 = 171
$>
$>./tab_mult | cat -e
$
$>

  

#include <unistd.h>

void	putnbr(int n) 
{
	if (n > 9)
		putnbr(n / 10);
	char c = n % 10 + '0';
	write(1, &c, 1);
}

void	putstr(char *s) 
{
	while (*s)
		write(1, s++, 1);
}

int	atoi_s(char *s) 
{
	int n = 0;
	while (*s >= '0' && *s <= '9')
		n = n * 10 + (*s++ - '0');
	return n;
}

int	main(int ac, char **av) 
{
	if (ac == 2) 
	{
		int n = atoi_s(av[1]);
		for (int v = 1; v <= 9; v++) 
		{
			putnbr(v);
			putstr(" x ");
			putnbr(n);
			putstr(" = ");
			putnbr(v * n);
			putstr("\n");
		}
	}
	else
		putstr("\n");
	return 0;
}
