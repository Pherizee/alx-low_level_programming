#include "main.h"

/**
 * _puts_recursion - print a character followed by new line
 *
 * @s: string to be printed
 *
 */

void _puts_recursion(char *s)
{
	if (!*s)
		return;

	_putchar(*s);
	_putchar('\n');

	_puts_recursion(s + 1);
}
