#include "main.h"

/**
 * get_spec_func - selects function according to specifier
 * @spec: conversion specifier
 *
 * Return: pointer to printing function or NULL
 */
int (*get_spec_func(char spec))(va_list)
{
	if (spec == 'c')
		return (print_char);
	if (spec == 's')
		return (print_string);
	if (spec == '%')
		return (print_percent);
	if (spec == 'd' || spec == 'i')
		return (print_int);
	if (spec == 'b')
		return (print_binary);
	if (spec == 'u')
		return (print_unsigned);
	if (spec == 'o')
		return (print_octal);
	if (spec == 'x')
		return (print_hex_low);
	if (spec == 'X')
		return (print_hex_up);

	return (NULL);
}