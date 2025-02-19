Assignment name  : add_prime_sum
Expected files   : add_prime_sum.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.

Yes, the examples are right.

Examples:

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>

  

  
#include <unistd.h>

int	atoiv(char *s)
{
	int n = 0;
	while (*s >= '0' && *s <= '9')
		n = n * 10 + (*s++ - '0');
	return n;
}

int	prime(int n)
{
	if (n < 2)
		return 0;
	for (int v = 2; v * v <= n; v++)
		if (n % v == 0)
			return 0;
	return 1;
}

void	putnbr(int n)
{
	if (n > 9)
		putnbr(n / 10);
	char c = n % 10 + '0';
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int n = atoiv(av[1]);
	
	if (ac != 2 || n <= 0) 
	{
		write(1, "0\n", 2);
		return 0;
	}
	int sum = 0;
	for (int v = 2; v <= n; v++)
		if (prime(v))
			sum += v;
	putnbr(sum);
	write(1, "\n", 1);
	return 0;
}
