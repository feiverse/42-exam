Write a program that prints the numbers from 1 to 100, each separated by a
newline.

If the number is a multiple of 3, it prints 'fizz' instead.

If the number is a multiple of 5, it prints 'buzz' instead.

If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead.

Example:

$>./fizzbuzz
1
2
fizz
4
buzz
fizz
7
8
fizz
buzz
11
fizz
13
14
fizzbuzz
[...]
97
98
fizz
buzz
$>


#include <unistd.h>

void putnbr(char *s)
{
	while (*s)
		write(1, s++, 1);
}

void putnbr(int n)
{
	if (n > 9)
		putnbr(n / 10);
    char c = n % 10 + '0');
    write(1, &c, 1);

int main(void)
{
    for (int v = 1; v <= 100; v++)
    {
        if (v % 15 == 0)
            putstr("fizzbuzz");
        else if (v % 3 == 0)
            putstr("fizz");
        else if (v % 5 == 0)
            putstr("buzz");
        else
            putnbr(v);
        putstr("\n");
    }
    return 0;
}


