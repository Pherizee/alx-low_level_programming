#include "main.h"

void print_num(int num);

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
			print_num(n);
	}
	else if (n == 98)
		print_num(n);
	else
	{
		for (; n >= 98; n--)
			print_num(n);
	}

	_putchar('\n');
}

/**
 * print_num - print numbers to display
 * @num: input number
 * Return: void
 */

void print_num(int num)
{
	if (num < 0)
		_putchar('-');

	if (_abs(num) > 10)
	{
		if (_(abs(num) / 10) < 10)
			_putchar(_abs(num / 10) + '0');
		else
		{
			_putchar((_abs(num / 10) / 10) + '0');
			_putchar((_abs(num / 10) % 10) + '0');
		}
	}
	
	_putchar((_abs(num) % 10) + '0');
	
	if (n != 98)
	{
		_putchar(',');
		_putchar(' ');
	}
}
