#include "main.h"

/**
 * print_rev - prints string in reverse
 *
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int len = 0;
	char *copy = s;

	while (*copy != '\0')
	{
		len++;
		copy++;
	}

	while (len > 0)
	{
		_putchar(s[len - 1]);
		len--;
	}
}
