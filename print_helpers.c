#include "main.h"

/**
 * print_char - prints one character
 * @c: character to print
 *
 * Return: number of characters printed
 */
int print_char(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_string - prints a string
 * @str: string to print
 *
 * Return: number of characters printed
 */
int print_string(char *str)
{
	int i;

	if (str == NULL)
		str = "(null)";

	i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}
/**
 * print_number - prints an integer
 * @n: integer to print
 *
 * Return: number of characters printed
 */
int print_number(int n)
{
	int count;
	unsigned int num;

	count = 0;


	if (n < 0)
	{
		print_char('-');
		count++;
		num = -n;
}
	else
	{
		num = n;
	}
	if (num / 10)
		count += print_number(num / 10);
count += print_char((num % 10) + '0');

	return (count);

}
