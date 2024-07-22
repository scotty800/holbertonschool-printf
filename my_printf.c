#include <stdarg.h>
#include <unistd.h>
#include "main.h"

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
	va_list ap;
	sp_t specifiers[] = {
		{'c', print_char},
		{'d', print_integer},
		{'i', print_integer},
		{'s', print_string},
		{'%', print_percent},
		{'\0', NULL}
	};

	va_start(ap, format);

	for (p = format; *p != '\0'; p++) {
		if (*p == '%') {
			p++; // Skip '%'
			if (*p == '\0') {
				// If '%' is the last character, print '%'
				count += _putchar('%');
				break;
			}
			int i = 0;
			while (specifiers[i].specifi != '\0') {
				if (*p == specifiers[i].specifi) {
					count += specifiers[i].print_func(ap);
					break;
				}
				i++;
			}
			if (specifiers[i].specifi == '\0') {
				count += _putchar('%');
				count += _putchar(*p);
			}
		} else {
			count += _putchar(*p);
		}
	}

	va_end(ap);
	return count;
}
