#include "main.h"

/**
 * puts_half - prints second half of a string
 *
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int len, n;

	len = 0;
	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		n = (len / 2);
	else
		n = ((len - 1) / 2);

	/* shift the index of n by 1 into the 2nd half of the string */
	n++;

	for (; n < len; n++)
		_putchar(str[n]);
	_putchar('\n');
}
