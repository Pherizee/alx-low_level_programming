#include "main.h"
void print_num(int n);
void print_spaces(int n);

/**
 * print_times_table - prints times table
 *
 * @n: number of table
 */

void print_times_table(int n)
{
	int i, j, res;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			res = i * j;

			if (j != 0)
			{
				if (res / 10 == 0)
					print_spaces(3);

				else if ((res / 10 > 0) && (res / 10 < 10))
					print_spaces(2);

				else
					print_spaces(1);
			}

			print_num(res);
			if (j != n)
				_putchar(',');
			else
				_putchar('\n');
		}
	}
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

	divisor = 1000;
	while (divisor >= 1)
	{
		if (n / divisor != 0)
			_putchar(((n / divisor) % 10) + '0');

		divisor /= 10;
	}
}

/**
 * print_spaces - print spaces
 *
 * @n: number of spaces
 */

void print_spaces(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar(' ');
}

