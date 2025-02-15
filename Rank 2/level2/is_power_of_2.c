Assignment name  : is_power_of_2
Expected files   : is_power_of_2.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that determines if a given number is a power of 2.

This function returns 1 if the given number is a power of 2, otherwise it returns 0.

Your function must be declared as follows:

int	    is_power_of_2(unsigned int n);














int is_power_of_2(unsigned int n)
{
    return (n > 0) && !(n & (n - 1));
}





// test
#include <stdio.h>

int    main(void)
{
    unsigned int fei[] = {0, 1, 2, 3, 4, 8, 16, 31, 32, 64, 127, 128, 256, 1024, 2048};
    int size = sizeof(v) / sizeof(fei[0]);

    for (int v = 0; v < size; v++)
    {
        printf("is_power_of_2(%u) = %d\n", fei[v], is_power_of_2(fei[i]));
    }
    return 0;
}

// test 2
int main()
{
    unsigned int n;

    printf("Enter a number: ");
    scanf("%u", &n);

    if (is_power_of_2(n))
        printf("%u is a power of 2.\n", n);
    else
        printf("%u NOT a power of 2.\n", n);
    return 0;
}
