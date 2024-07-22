#include <stdio.h>
#include <stdlib.h>
/**
 * print_char - Prints a character
 * @ap: The va_list containing the character to print
 *
 * Return: void
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}
