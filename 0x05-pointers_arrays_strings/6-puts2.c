#include "main.h"

/**
 * puts2 - print each string character on new line
 *
 * @str: input sting
 */

void puts2(char *str)
{
	char *ptr;

	ptr = str;
	while (*ptr != '\0')
	{
		_putchar(*ptr);
		ptr += 2;
	}
	_putchar('\n');
}
