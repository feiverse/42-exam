
Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);














#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	int v = 0;
	long n = nbr;


	if (n <= 0)
	{
		v++;
		n = -n;
	}
	
	long fei = n;
	while (fei > 0)
	{
		v++;
		fei /= 10;
	}
	
	char *res = (char *)malloc(v + 1);
	if (!res)
		return NULL;
	
	res[v] = '\0';

	if (nbr == 0)
		res[0] = '0';
	if (nbr < 0)
		res[0] = '-';
	while (n > 0)
	{
		res[--v] = (n % 10) + '0';
		n /= 10;
	}
	return res;
}



//  text
int main() 
{
    char *s = ft_itoa(-12345);
    printf("%s\n", s);
    free(s);
    return 0;
}
