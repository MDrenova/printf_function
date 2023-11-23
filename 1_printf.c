#include "main.h"

/**
 * _printf - print ot stout formated text
 * @format: format specifier
 * Return: Length of printed text
 */ 

int _printf(const char *format, ...)
{
	unsigned int i, len = 0;

	va_list arg;
	
	va_start(arg, format);

	for(i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			_putchar(format[i]);

		if (format[i] == '%' && format[i + 1] == 'c')
		{
			_putchar(va_arg(args, int));
		}
		len++;
	}

	return (len);
}
