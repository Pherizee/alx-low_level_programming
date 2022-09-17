#include "main.h"

/**
 * print_triangle - print triangle using #;
 *
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (size > 1)
			{
				for (j = size - i - 1; j > 0; j--)
					_putchar(' ');
			}
			for (k = 0; k < i + 1; k++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
