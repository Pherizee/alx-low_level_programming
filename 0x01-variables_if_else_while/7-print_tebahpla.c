#include <stdio.h>

/**
 * main - entry point
 * Return: 0 always (success)
 */

int main(void)
{
	char i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}

	putchar('\n');
	return (0);
}
