Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(const char *str);













int	ft_atoi(const char *str)
{
	int	res = 0;
	int	sign = 1;

	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign = -1;
	while (*str >= '0' && *str <= '9')
		res = res * 10 + (*str++ - '0');
	return res * sign;
}










//test
#include <stdio.h>

int main() {
    printf("%d\n", ft_atoi("123"));
    printf("%d\n", ft_atoi("-456")); 
    printf("%d\n", ft_atoi("  +789"));
    printf("%d\n", ft_atoi("  -42abc"));
    return 0;
}