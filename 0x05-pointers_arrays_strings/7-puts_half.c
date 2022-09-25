#include "main.h"

/**
 * puts_half - prints second half of a string
 *
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int len, i, n;

	len = 0;
	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		n = (len / 2);
	else
		n = ((len - 1) / 2);

	for (i = len - n; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
