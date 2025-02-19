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


//claude

#include <unistd.h>

void rev_wstr(char *str)
{
    int len = 0;
    int i = 0;
    int start;
    int end;

    // 計算字符串長度
    while (str[len])
        len++;

    // 從後往前遍歷
    while (len > 0)
    {
        // 跳過末尾空格
        while (len > 0 && (str[len - 1] == ' ' || str[len - 1] == '\t'))
            len--;
        
        // 找到單詞末尾
        end = len;
        
        // 找到單詞開頭
        while (len > 0 && str[len - 1] != ' ' && str[len - 1] != '\t')
            len--;
        start = len;
        
        // 輸出單詞
        i = start;
        while (i < end)
            write(1, &str[i++], 1);
            
        // 如果不是最後一個單詞，輸出空格
        if (start > 0)
            write(1, " ", 1);
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        rev_wstr(av[1]);
    }
    write(1, "\n", 1);
    return (0);
}


//gpt 

#include <unistd.h>

void rev_wstr(char *str)
{
    int len = 0;
    int start, end;
    int first_word = 1;  // 标记是否是第一个打印的单词

    // 计算字符串长度
    while (str[len])
        len++;

    // 从后往前遍历
    while (len > 0)
    {
        // 跳过末尾空格
        while (len > 0 && (str[len - 1] == ' ' || str[len - 1] == '\t'))
            len--;

        // 找到单词末尾
        end = len;
        
        // 找到单词开头
        while (len > 0 && str[len - 1] != ' ' && str[len - 1] != '\t')
            len--;
        start = len;
        
        // 如果不是第一个单词，则先输出空格
        if (!first_word)
            write(1, " ", 1);
        first_word = 0;

        // 输出单词
        write(1, &str[start], end - start);
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        rev_wstr(av[1]);
    write(1, "\n", 1);
    return (0);
}
