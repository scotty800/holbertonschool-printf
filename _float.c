#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_float - Prints a float
 * @ap: The va_list containing the float to print
 *
 * Return: void
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}
