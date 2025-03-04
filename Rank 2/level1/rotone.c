Assignment name  : rotone
Expected files   : rotone.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the next one in alphabetical order.

'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.

The output will be followed by a \n.

If the number of arguments is not 1, the program displays \n.

Example:

$>./rotone "abc"
bcd
$>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
$>./rotone "AkjhZ zLKIJz , 23y " | cat -e
BlkiA aMLJKa , 23z $
$>./rotone | cat -e
$
$>
$>./rotone "" | cat -e
$
$>




#include <unistd.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int v = 0;
		while (av[1][v])
		{
			char c = av[1][v];
			if (c >= 97 && c <= 121 || c >= 65 && c <= 89)
				c += 1;
			else if (c == 122 || c == 90)
				c -= 25;
			write(1, &c, 1);
			v++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
