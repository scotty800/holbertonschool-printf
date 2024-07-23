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
	int index = 0, j;
	int count = 0;

	sp_t specifiers[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'\0', NULL}
	};

	va_start(args, format);

	while (format && format[index])
	{
		if (format[index] == '%')
		{
			index++;
			j = 0;
			while (specifiers[j].specifi)
			{
				if (format[index] == specifiers[j].specifi)
				{
					count = count + specifiers[j].print_func(args);
					break;
				}
				j++;
			}

			if (specifiers[j].specifi == '\0')
			{
				count = count + print_non('%', '%');
				count = count + _putchar(format[index]);
			}
		}
		else
			count = count + _putchar(format[index]);
		index++;
	}
	va_end(args);
	return (count);
}
