#include "main.h"
int print_char(va_list list)
{
    putchar(va_arg(list, int));
    return (1);
}

int print_string(va_list list)
{
    char *str = va_arg(list, char *);
    int i = 0;

    while (str[i])
    {
        putchar(str[i]);
        i++;
    }

    return (i);
}

void print_number(int n)
{
    if (n / 10)
        print_number(n / 10);
    putchar((n % 10) + '0');
}

int print_int(va_list list)
{
    int num = va_arg(list, int);
    int count = 0;

    if (num < 0)
    {
        putchar('-');
        num = -num;
    }

    print_number(num);
    count++;

    return (count);
}
