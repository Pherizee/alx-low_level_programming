#include "main.h"

/**
 * string_toupper - convert string to upper case
 * @str: the string to be converted
 * Return: the upper case string
*/

char *string_toupper(char *str)
{
	char *start = str;

	while (*str)
	{
		if (*str >= 97 && *str <= 122)
			*str -= 32;

		str++;
	}

	return (start);
}
