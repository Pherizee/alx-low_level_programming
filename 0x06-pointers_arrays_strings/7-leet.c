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
	char code[10] = {'4', '4', '3', '3', '0', '0', '7, '7', '1', '1'};

	while (str[i])
	{
		for (; j < 10; i++)
		{
			if (str[i] == alpha[j])
				str[i] = code[j];
		}

		i++;
	}

	return (str);
}
