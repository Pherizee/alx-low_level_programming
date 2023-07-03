#include "main.h"

char *_itoa(int n, char *numStr);
/**
 * print_number - print number
 *
 * @n: number to be printed
 */

void print_number(int n)
{
	char numStr[12];

	char *str = _itoa(n, numStr);
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _itoa - convert integer to string
 * @n: number to be converted
 * @numStr: variable to hold the number string
 * Return: string representation of number
*/

char *_itoa(int n, char *numStr)
{
	int dup = n, length = 0, index, digit;

	/* if n is zero */
	if (dup == 0)
	{
		numStr[0] = '0';
		numStr[1] = '\0';
		return (numStr);
	}
	/* get the length of the num str */
	while (dup != 0)
	{
		length++;
		dup /= 10;
	}
	/* if n is negative */
	if (n < 0)
	{
		n = -n;
		length++;
		numStr[0] = '-';
	}

	index = length - 1;
	while (n != 0)
	{
		digit = n % 10;
		numStr[index] = digit + '0';
		n /= 10;
		index--;
	}
	/* add the string termination */
	numStr[length] = '\0';

	return (numStr);
}
