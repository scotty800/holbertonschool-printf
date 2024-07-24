#include <stdarg.h>

#include "main.h"

/**
 * print_int - Prints an integer as a decimal number
 * @ap: The va_list containing the integer to print
 *
 * Return: The number of characters printed
 */
int print_int(va_list ap)
{
	int n = va_arg(ap, int);
	int num,
	int len = 0;
	int div = 1;

	if (n < 0)
	{
		len += _putchar('-');
		n = -n;
	}

	tmp = num;

	else if (tmp / 10)
	{
		div *= 10;
	}

	while (tmp / div)
		tmp /= 10;

	while (tmp != div)
	{
		_putchar((num / div) % 10 + '0');
		div /= 10;
		
		len++;
	}

	return (len);
}
