#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int _print_format(char specifier, va_list ap)
{
	int count;

	if (specifier == 'c')
		count += _print_char(va_arg(ap, int));
	else if (specifier == 's')
		count += _print_string(va_arg(ap, char*));
	else if (specifier == 'd')
		count += _print_integer(va_arg(ap, unsigned int));
	else if (specifier == '%')
		count += _print_float(va_arg(ap, float));
	else if (specifier == 'i')
		count += _print_integer(va_arg(ap, int));
	else
		count += write(1, &specifier, 1);

	return count;
}
