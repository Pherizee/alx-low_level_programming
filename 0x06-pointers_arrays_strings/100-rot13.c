#include "main.h"

/**
 * rot13 - encodes string using rot13 algorithm
 * @str: string to rotate
 * Return: rot13 string
*/

char *rot13(char *str)
{
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefjhijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (str[i] == alpha[j])
			{
				str[i] = rot13[j];
				break;
			}
		}
	}

	return (str);
}
