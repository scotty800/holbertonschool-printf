#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_integer - Prints an integer
 * @ap: The va_list containing the integer to print
 *
 * Return: void
 */
void print_integer(va_list ap)
{
	printf("%d", va_arg(ap, int));
}
