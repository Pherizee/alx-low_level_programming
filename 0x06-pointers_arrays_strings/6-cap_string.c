#include "main.h"

int check_sep(char c);

/**
 * cap_string - capitalizes all words in a string
 * @str: the string to be capitalized
 * Return: the capitalized string
*/

char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i == 0 && str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;

		if (check_sep(str[i]) && str[i + 1] >= 97 && str[i + 1] <= 122)
			str[i + 1] -= 32;

		i++;
	}

	return (str);
}

/**
 * check_sep - Separators of words: space, tabulation, new line,
 * ,, ;, ., !, ?, ", (, ), {, and }
 * @c: an input character
 * Return: 1 if seperator, 0 otherwise
 */

int check_sep(char c)
{
	int i = 0;

	char sep[13] = ",;.!?\"(){}\t\n ";

	for (; i < 13; i++)
	{
		if (c == sep[i])
			return (1);
	}

	return (0);
}
