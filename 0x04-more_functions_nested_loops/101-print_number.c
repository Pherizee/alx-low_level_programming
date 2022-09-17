#include "main.h"
#include <stdlib.h>

/**
 * check_number - check number size
 * @n: int number to be checked
 * Return: exponent to 10 of num
 */

int check_number(int n)
{
	if (abs(n) / 10 == 0)
		return (0);
	else if ((abs(n) / 10 >= 1) && (n / 10 < 10))
		return (1);
	else if ((abs(n) / 10 >= 10) && (n / 10 < 100))
		return (2);
	else if ((abs(n) / 10 >= 100) && (n / 10 < 1000))
		return (3);
	else if ((abs(n) / 10 >= 1000) && (n / 10 < 10000))
		return (4);
	return (0);
}

/**
 * print_number - print integer number
 * @n: int number to print
 */

void print_number(int n)
{
	int size;

	size = check_number(n);

	if (n < 0)
		_putchar('-');
	if (size == 0)
		_putchar(n + '0');
	else if (size == 1)
	{
		_putchar((abs(n) / 10) + '0');
		_putchar((abs(n) % 10) + '0');
	}
	else if (size == 2)
	{
		_putchar(((abs(n) / 10) / 10) + '0');
		_putchar(((abs(n) / 10) % 10) + '0');
		_putchar((abs(n) % 10) + '0');
	}
	else if (size == 3)
	{
		_putchar(((abs(n) / 100) / 10) + '0');
		_putchar(((abs(n) / 100) % 10) + '0');
		_putchar(((abs(n) % 100) / 10) + '0');
		_putchar(((abs(n) % 100) % 10) + '0');
	}
}
