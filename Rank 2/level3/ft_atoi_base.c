Assignment name  : ft_atoi_base
Expected files   : ft_atoi_base.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str (base N <= 16)
to an integer (base 10) and returns it.

The characters recognized in the input are: 0123456789abcdef
Those are, of course, to be trimmed according to the requested base. For
example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

Minus signs ('-') are interpreted only if they are the first character of the
string.

Your function must be declared as follows:

int	ft_atoi_base(const char *str, int str_base);






int	fei(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (-1);
}
int	ft_atoi_base(const char *str, int str_base)
{
	int v, res = 0, sign = 1;
	
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str)
	{
		v = fei(*str);
		if (v == -1 || v >= str_base)
			break;
		res = res * str_base + v;
		str++;
	}
	return res * sign;
}






// test
#include <stdio.h>


int main()
{
    printf("%d\n", ft_atoi_base("1A", 16));     // 26
    printf("%d\n", ft_atoi_base("-101", 2));    // -5
    printf("%d\n", ft_atoi_base("123", 10));    // 123
    printf("%d\n", ft_atoi_base("7F", 16));     // 127
    printf("%d\n", ft_atoi_base("1101", 2));    // 13
    printf("%d\n", ft_atoi_base("-2F", 16));    // -47
    return 0;
}
