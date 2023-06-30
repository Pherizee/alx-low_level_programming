#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string to be encoded
 * Return: encoded string
*/

char *leet(char *str)
{
	int i = 0, j = 0;
	char alpha[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char code[5] = {'4', '3', '0', '7', '1'};

	while (str[i])
	{
		for (; j < 10; i++)
			if (str[i] == alpha[j])
				str[i] = code[j / 2];

		i++;
	}

	return (str);
}
