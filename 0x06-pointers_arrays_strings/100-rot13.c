#include "main.h"

/**
 * rot13 - encodes string using rot13 algorithm
 * @str: string to rotate
 * Return: rot13 string
*/

char *rot13(char *str)
{
	char *alpha[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefjhijklmnopqrstuvwxyz";
	char *rot13[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0, j = 0;

	while (str[i])
	{
		for (; j < 26; j++)
		{
			if (str[i] == alpha[j])
				str[i] = rot13[j];
		}

		i++;
	}

	return (str);
}
