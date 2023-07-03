#include "main.h"

/**
 * print_number - print number
 *
 * @n: number to be printed
 */

void print_number(int n)
{
	unsigned int i;

	/* if n is zero */
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	/* if n is negative */
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	i = n;

	if (i / 10 != 0)
		print_number(i / 10);

	_putchar(i % 10 + '0');
}
