#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_char - Prints a character
 * @ap: The va_list containing the character to print
 *
 * Return: void
 */
void print_char(va_list ap)
{
	_putchar(va_arg(ap, int));
	return (1);
}
