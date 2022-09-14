#include "main.h"

/**
 * times_table - prints up to 9 times table
 * Return: void
 */
void times_table(void)
{
	int i, j, product;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			product = i * j;
			if ((product / 10) > 0)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
					continue;
				}
			}
			else
			{
				if (j != 0)
					_putchar(' ');
				_putchar(product + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
					continue;
				}
			}
			_putchar('\n');

		}
	}
}
