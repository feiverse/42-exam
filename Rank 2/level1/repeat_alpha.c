Assignment name  : repeat_alpha
Expected files   : repeat_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>


#include <unistd.h>

void   repeat_alpha(char c)
{
    int    count;
    
    if (c >= 97 && c <= 122)
        count = c - 97 + 1;
    else if (c >= 65 && c <= 90)
        count = c - 65 + 1;
    else
        count = 1;
    while(count--)
        write(1, &c, 1);
}

int    main(int ac, char **av)
{
	int    v = 0;
    
    if (ac == 2)
    {
        while (av[1][v])
        {
            repeat_alpha(av[1][v]);
            v++;
        }
    }
    write(1, "\n", 1);
    return 0;
}
