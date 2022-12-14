#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers with a separator
 *
 * @separator: separate each number
 * @n: number of integers
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		printf("%d", x);
		if (i + 1 < n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
