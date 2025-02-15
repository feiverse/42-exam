Assignment name  : ft_strlen
Expected files   : ft_strlen.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that returns the length of a string.

Your function must be declared as follows:

int	ft_strlen(char *str);







int	ft_strlen(char *str)
{
	int	v = 0;

	while (str[v])
		v++;
	return v;
}



// test
#include <stdio.h>

int ft_strlen(char *s);

int main() {
    printf("%d\n", ft_strlen("Hey Fei"));       // 7
    printf("%d\n", ft_strlen(""));            // 0
    printf("%d\n", ft_strlen("Le monde de l’imagination est sans frontières."));  // 49
    return 0;
}