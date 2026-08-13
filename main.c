#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned int ui = (unsigned int)INT_MAX + 1024;

	_printf("u:[%u]\n", ui);
	printf("u:[%u]\n", ui);
	_printf("o:[%o]\n", ui);
	printf("o:[%o]\n", ui);
	_printf("x:[%x]\n", ui);
	printf("x:[%x]\n", ui);
	_printf("X:[%X]\n", ui);
	printf("X:[%X]\n", ui);
	return (0);
}
