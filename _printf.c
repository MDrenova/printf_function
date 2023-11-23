#include "main.h"

/**
 * _printf - Custom printf function
 * @format: Format string
 * Return: count (number of characters printed)
 */
int _printf(const char *format, ...)
{
	format_t formats[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_int},
		{"i", print_int},
		{NULL, NULL}
	};

	va_list args;
	int i = 0, j = 0, len = 0;

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			j = 0;
			while (formats[j].spec != NULL)
			{
				if (format[i] == *(formats[j].spec))
				{
					len += formats[j].f(args);
					break;
				}
				j++;
			}
			if (formats[j].spec == NULL)
			{
				putchar('%');
				putchar(format[i]);
				len += 2;
			}
		}
		else
		{
			putchar(format[i]);
			len++;
		}
		i++;
	}

	va_end(args);

	return (len);
}
