#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct specifier
{
	char *spec;
	int (*f)(va_list);
} spec_t;

int _printf(const char *format, ...);

int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_int(va_list args);
int print_binary(va_list args);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hex_low(va_list args);
int print_hex_up(va_list args);

int (*get_spec_func(char spec))(va_list);

#endif