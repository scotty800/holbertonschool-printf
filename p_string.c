#include <stdio.h>
#include <stdlib.h>

/**
 * print_string - Prints a string
 * @ap: The va_list containing the string to print
 *
 * Return: void
 */
void print_string(va_list ap)
{
	char *s = va_arg(ap, char *);

	if (!s)
		s = "(nil)";
	printf("%s", s);
}
