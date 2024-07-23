#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_string - Prints a string
 * @args: The va_list containing the string to print
 * Return: The number of characters printed, or 0 if the string is NULL.
 */

int print_non(char num1, char num2)
{
	if (num2  == '%')
	{
		write(1, &num2, 1);
	}
	else
	{
		write(1, &num1, 1);
		write(1, &num2, 1);
	}

	return (0);
}
