#include "main.h"

/**
 * print_line - print straight line
 * @n: int input
 */

void print_line(int n)
{
	int c;

	if (n > 0)
	{
		for (c = 0; c < n; c++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
