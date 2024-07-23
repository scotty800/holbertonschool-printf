#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - Custom implementation of printf function
 * @format: The format string containing format specifiers
 * @...: The values to format and print
 *  Return: The total number of characters printed
 */

static int (*print_format(const char *format)) (va_list)
{
	int jindex = 0;

	sp_t specifiers[] = {
                {'c', print_char},
                {'s', print_string},
                {'%', print_percent},
                {'\0', NULL}

        };

	while (specifiers[jindex].specifi != NULL)
	{
		if (specifiers[jindex].specifi == *format)
		{
			return (specifiers[jindex].print_func);
		}
		jindex++;
	}

	return (NULL);
}

int _printf(const char *format, ...)
{
	va_list args;
	int index = 0, j;
	int count = 0;
	int (*print_func)(va_list args);

	 if (!format)
                return (-1);

	 va_start(args, format);

	while (format && format[index])
	{
		if (format[index] == '%')
		{
			index++;
			if (format[index] == '\0')
			{
				return (-1);
			}

			strfunc = print_format(

			if (specifiers[j].specifi == '\0')
			{
				count = count + print_non('%', format[index]);
			}
		}
		else
			count = count + _putchar(format[index]);
		index++;
	}
	va_end(args);
	return (count);
}
