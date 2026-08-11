#include "main.h"

/**
 * _printf - prints formatted output
 * @format: format string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i;
	int count;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	i = 0;
	count = 0;

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			count += print_char(format[i]);
		}
		else
		{
			i++;

			if (format[i] == '\0')
			{
				va_end(args);
				return (-1);
			}

			if (format[i] == 'c')
				count += print_char(va_arg(args, int));
			else if (format[i] == 's')
				count += print_string(va_arg(args, char *));
			else if (format[i] == '%')
				count += print_char('%');
			else if (format[i] == 'd' || format[i] == 'i')
				count += print_number(va_arg(args, int));
			else
			{
				count += print_char('%');
				count += print_char(format[i]);
			}
		}

		i++;
	}

	va_end(args);

	return (count);
}
