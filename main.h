#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

typedef struct format
{
    char *spec;
    int (*f)(va_list);
} format_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list char_list);
int print_string(va_list string_list);

#endif
