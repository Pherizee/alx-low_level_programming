#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string to be encoded
 * Return: encoded string
*/

char *leet(char *str)
{
	int i = 0, j;
	char *alpha = "aAeEoOtTlL";
	char *code = "43071";

	while (str[i])
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (str[i] == alpha[j])
				str[i] = code[j / 2];
		}

		i++;
	}

	return (str);
}
