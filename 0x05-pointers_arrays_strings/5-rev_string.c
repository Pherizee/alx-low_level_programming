#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int len, i;
	char tmp, *begin, *end;

	/* begin and end will have the address of the first character in s */
	begin = s;
	end = s;
	len = 0;
	/* find the length of s */
	while (s[len] != '\0')
		len++;

	/* end will be the begin point plus string length */
	end += (len - 1);

	for (i = 0; i < len / 2; i++)
	{
		tmp = *begin;
		*begin = *end;
		*end = tmp;

		begin++;
		end--;
	}
}
