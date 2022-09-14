#include "main.h"
#include <stdlib.h>

/**
 * print_num - print numbers to display
 * @num: input number
 * Return: void
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
			_putchar(abs(num % 10) + '0');
		}
	}
}

/**
 * print_to_98 - prints number to 98
 * @n: int input n
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			print_num(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else if (n == 98)
	{
		print_num(n);
	}
	else
	{
		for (; n >= 98; n--)
		{
			print_num(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}

