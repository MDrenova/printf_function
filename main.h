#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/** 
 * Struct for format specifiers and corresponding print functions 
 */
typedef struct format
{
    char *spec;
    int (*f)(va_list);
} format_t;

/** 
 * Function prototypes 
 */
int _printf(const char *format, ...);
int print_char(va_list list);
int print_string(va_list list);
int print_int(va_list list);

#endif 
