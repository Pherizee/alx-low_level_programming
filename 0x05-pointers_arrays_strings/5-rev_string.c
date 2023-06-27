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

	/* add the length of the string - 1 to get to end of string */
	end += (len - 1);

	for (i = 0; i < len / 2; i++)
	{
		/* store the initial value of begin in a temporary variable */
		tmp = *begin;

		/**
		 *  swap the values of begin and end,
		 *  changing both sides of the array at the same time
		 */

		*begin = *end;
		*end = tmp;

		begin++;
		end--;
	}
}
