#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - Custom implementation of printf function
 * @format: The format string containing format specifiers
 * @...: The values to format and print
 *  Return: The total number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int index = 0;
	int count;
	sp_t specifiers[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'\0', NULL}
	};

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				count += _putchar('%');
			break;

			for (; specifiers[index].specifi; index++)
			{
				if (*format == specifiers[index].specifi)
					count += specifiers[index].print_func(args);
				break;
			}

			if (specifiers[index].specifi == '\0')
				count += _putchar('%');
			count += _putchar(*format);
		}
		else
			count += _putchar(*format);
		format++;
	}
	va_end(args);
	return (count);
}
