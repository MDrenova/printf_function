#include "main.h"

int _printf(const char *format, ...)
{
    va_list list;
    int i, j, len = 0;

    print_data print_functions[]=
    {
        {"c", print_char},
        {"s", print_string},
        {NULL, NULL}
    };
    va_start(list, format);
    i = 0;
    while (format != NULL && format[i] != '\0')
    {
        if (format[i] == '%' && format[i+1] != '%')
        {
            j = 0;
            while (print_functions[j].type != NULL)
            {
                if (format[i+1] == print_functions[j].type[0])
                {
                    len = len + print_functions[j].print(list);
                    i++;
                }

                j++;
            }
        }
        else if (format[i] == '%' && format[i+1] == '%')
        {
            _putchar('%');
            len++;
            i++;
        }
        else
        {
            _putchar(format[i]);
            len+=1;
        }
        i++;
    }
    return len;
    va_end(list);
}
