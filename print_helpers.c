include "main.h"

/**
 * print_unsigned - prints an unsigned integer
 * @n: unsigned integer to print
 * Return: number of characters printed
 */
int print_unsigned(unsigned int n)
{
    int count = 0;
    char c;

    if (n / 10)
        count += print_unsigned(n / 10);
    
    c = (n % 10) + '0';
    count += write(1, &c, 1);
    return (count);
}

/**
 * print_octal - prints an unsigned int in octal format
 * @n: unsigned integer to print
 * Return: number of characters printed
 */
int print_octal(unsigned int n)
{
    int count = 0;
    char c;

    if (n / 8)
        count += print_octal(n / 8);
    
    c = (n % 8) + '0';
    count += write(1, &c, 1);
    return (count);
}

/**
 * print_hex_low - prints an unsigned int in lowercase hex
 * @n: unsigned integer to print
 * Return: number of characters printed
 */
int print_hex_low(unsigned int n)
{
    int count = 0;
    char c;
    char *hex = "0123456789abcdef";

    if (n / 16)
        count += print_hex_low(n / 16);
    
    c = hex[n % 16];
    count += write(1, &c, 1);
    return (count);
}

/**
 * print_hex_upp - prints an unsigned int in uppercase hex
 * @n: unsigned integer to print
 * Return: number of characters printed
 */
int print_hex_upp(unsigned int n)
{
    int count = 0;
    char c;
    char *hex = "0123456789ABCDEF";

    if (n / 16)
        count += print_hex_upp(n / 16);
    
    c = hex[n % 16];
    count += write(1, &c, 1);
    return (count);
}
