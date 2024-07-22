#ifndef MAIN_H 
#define MAIN_H

#include <limits.h>
#include <stdio.h>
#include "main.h"

typedef struct format_sp
{
		char specifi;
			void (*print_func)(va_list ap);
} sp_t;

void print_char(va_list ap);
void print_float(va_list ap);
void print_integer(va_list ap);
void print_string(va_list ap);
int _printf(const char *format, ...);
int _print_format(char specifier, va_list ap);
#endif
