#include "main.h"
#include <stdlib.h>

/**
 * print_num - print numbers to display
 * @num: input number
 */
void print_num(int num)
{
	if ((num / 10) == 0)
	{
		if (num < 0)
			_putchar('-');
		_putchar(abs(num) + '0');
	}
	else
	{
		if (num < 0)
			_putchar('-');
		if ((abs(num) / 10) < 10)
		{
			_putchar(abs(num / 10) + '0');
			_putchar(abs(num % 10) + '0');
		}
		else
		{
			_putchar((abs(num / 10) / 10) + '0');
			_putchar((abs(num / 10) % 10) + '0');
			_putchar((num % 10) + '0');
		}
	}
}
