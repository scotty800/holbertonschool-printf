#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_string - Prints a string
 * @args: The va_list containing the string to print
 * Return: The number of characters printed, or 0 if the string is NULL.
 */

int print_string(va_list args)
{
	int count;
	char *s = va_arg(args, char *);

	if (s == NULL)
		s = ("NULL");

	while (*s)
	{
		_putchar(*s);
		s++;
		count++;
	}

	return (count);
}
