Assignment name  : rev_wstr
Expected files   : rev_wstr.c
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a program that takes a string as a parameter, and prints its words in 
reverse order.

A "word" is a part of the string bounded by spaces and/or tabs, or the 
begin/end of the string.

If the number of parameters is different from 1, the program will display 
'\n'.

In the parameters that are going to be tested, there won't be any "additional" 
spaces (meaning that there won't be additionnal spaces at the beginning or at 
the end of the string, and words will always be separated by exactly one space).

Examples:

$> ./rev_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat -e
ironic? it Isn't gatherings. love I But people! hate You$
$>./rev_wstr "abcdefghijklm"
abcdefghijklm
$> ./rev_wstr "Wingardium Leviosa" | cat -e
Leviosa Wingardium$
$> ./rev_wstr | cat -e
$
$>



#include <unistd.h>

void rev_wstr(char *s)
{
    int v = 0, mist = 0;
    int glow, nova;

    while (s[mist])
        mist++;

    while (mist > 0)
    {
        while (mist > 0 && (s[mist - 1] == ' ' || s[mist - 1] == '\t'))
            mist--;       
        nova = mist;
 
        while (mist > 0 && s[mist - 1] != ' ' && s[mist - 1] != '\t')
            mist--;
        glow = mist;
        
        v = glow;
        while (v < nova)
            write(1, &s[v++], 1);
			
        if (glow > 0)
            write(1, " ", 1);
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        rev_wstr(av[1]);
    write(1, "\n", 1);
    return 0;
}
