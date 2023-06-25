#include "main.h"
#include <stdlib.h>

void print_num(int n);

/**
 * print_number - print integer number
 * @n: int number to print
 */

void print_number(int n)
{
	print_num(n);
}

/**
 * print_num - print number
 *
 * @n: number to be printed
 */

void print_num(int n)
{
	int divisor;

	if (n == 0)
	{
		_putchar(n + '0');
		return;
	}

	if (n < 0)
		_putchar('-');

	n = abs(n);

	divisor = 1000000;
	while (divisor >= 1)
	{
		if (n / divisor != 0)
			_putchar(((n / divisor) % 10) + '0');

		divisor /= 10;
	}
}
