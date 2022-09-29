#include "main.h"

/**
 * _strlen_recursion - counts length of string
 *
 * @str: string to be counted
 * Return: number of character
 */

int _strlen_recursion(char *str)
{
	if (!*str)
		return (0);

	return (1 + _strlen_recursion(str + 1));
}
