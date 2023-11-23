#include "main.h"
#include <stdio.h>

/**
 * print_char - Prints a character
 * @list: va_list of arguments
 * Return: 1 (number of characters printed)
 */
int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	
	return (1);
}

/**
 * print_string - Prints a string
 * @list: va_list of arguments
 * Return: i (number of characters printed)
 */
int print_string(va_list list)
{
	char *str = va_arg(list, char *);
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	return (i);
}

/**
 * print_number - Prints an integer
 * @n: Integer to print
 */
void print_number(int n)
{
	if (n / 10)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}

/**
 * print_int - Prints an integer from a va_list
 * @list: va_list of arguments
 * Return: count (number of characters printed)
 */
int print_int(va_list list)
{
	int num = va_arg(list, int);
	int len = 0;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	print_number(num);
	len++;
	
	return (len);
}
