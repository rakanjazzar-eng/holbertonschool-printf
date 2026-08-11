#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * main - Entry point for testing _printf
 *
 * Return: Always 0
 */
int main(void)
{
	int len1, len2;

	len1 = _printf("Mine: %d, %i\n", 1024, -1024);
	len2 = printf("Orig: %d, %i\n", 1024, -1024);
	printf("Lengths: [%d, %d]\n\n", len1, len2);

	len1 = _printf("Mine Zero & Min: %d, %d\n", 0, INT_MIN);
	len2 = printf("Orig Zero & Min: %d, %d\n", 0, INT_MIN);
	printf("Lengths: [%d, %d]\n", len1, len2);

	return (0);
}