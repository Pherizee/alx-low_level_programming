#include "main.h"

/**
 * puts2 - print each string character on new line
 *
 * @str: input sting
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
