#include <stdarg.h>
#include <stdio.h>
#include "holberton.h"

typedef struct specifier {
    char spec;
    void (*func)(va_list);
} specifier_t;

/**
 * _printf - produces output according to a format
 * @format: format string containing the characters and the specifiers
 * 
 * Return: the number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
    int count = 0;
    const char *p;
    va_list args;
    specifier_t specifiers[] = {
        {'c', print_char},
        {'f', print_float},
        {'d', print_integer},
        {'i', print_integer},
        {'s', print_string},
        {'\0', NULL}
    };

    va_start(args, format);

    for (p = format; *p != '\0'; p++) {
        if (*p == '%') {
            p++;
            int i = 0;
            while (specifiers[i].spec != '\0') {
                if (*p == specifiers[i].spec) {
                    specifiers[i].func(args);
                    break;
                }
                i++;
            }
            if (specifiers[i].spec == '\0') {
                putchar('%');
                putchar(*p);
            }
        } else {
            putchar(*p);
        }
        count++;
    }

    va_end(args);
    return count;
}
