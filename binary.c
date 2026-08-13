#include "main.h"

/**
 * print_binary - prints an unsigned int in binary
 * @n: the unsigned int to convert and print
 *
 * Return: number of characters printed
 */
int print_binary(unsigned int n)
{
	int count;

	count = 0;
	if (n / 2)
		count += print_binary(n / 2);
	count += print_char((n % 2) + '0');
	return (count);
}
