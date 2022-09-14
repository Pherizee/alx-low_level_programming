#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: int number as input
 * Return: int last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	last_digit = abs(last_digit);
	_putchar(last_digit + '0');

	return (last_digit);
}
