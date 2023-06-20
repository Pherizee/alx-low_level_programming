#include <stdio.h>

/**
 * main - entry point
 * Return: 0 always (success)
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}

	putchar('\n');
	return (0);
}
