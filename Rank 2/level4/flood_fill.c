Assignment name  : flood_fill
Expected files   : flood_fill.c
Allowed functions: -
--------------------------------------------------------------------------------

Write a function that takes a char ** as a 2-dimensional array of char, a 
t_point as the dimensions of this array and a t_point as the starting point.

Starting from the given 'begin' t_point, this function fills an entire zone 
by replacing characters inside with the character 'F'. A zone is an group of 
the same character delimitated horizontally and vertically by other characters
or the array boundry.

The flood_fill function won't fill diagonally.

The flood_fill function will be prototyped like this:
  void  flood_fill(char **tab, t_point size, t_point begin);

The t_point structure is prototyped like this: (put it in flood_fill.c)







typedef struct s_point
{
    int x;
    int y;
}   t_point;

void fill(char **tab, t_point size, int x, int y, char t)
{
    if (x < 0 || y < 0 || x >= size.x || y >= size.y || tab[y][x] != t)
        return ;
    
    tab[y][x] = 'F';

    fill(tab, size, x + 1, y, t);
    fill(tab, size, x - 1, y, t);
    fill(tab, size, x, y + 1, t);
    fill(tab, size, x, y - 1, t);
}

void flood_fill(char **tab, t_point size, t_point begin)
{
    char t = tab[begin.y][begin.x];
    if (t != 'F')
        fill(tab, size, begin.x, begin.y, t);
}
