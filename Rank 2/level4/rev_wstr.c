#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        char *s = av[1];
        int v = 0, start, first = 1;

        while (s[v]) v++;
        v--;

        while (v >= 0)
        {
            while (v >= 0 && (s[v] == ' ' || s[v] == '\t')) v--;
            
            start = v;
            while (v >= 0 && s[v] != ' ' && s[v] != '\t') v--;           
            if (start > v)
            {
                if (!first) write(1, " ", 1);
                write(1, &s[v + 1], start - v);
                first = 0;
            }
        }
    }
    write(1, "\n", 1);
    return 0;
}
