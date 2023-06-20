#include <stdio.h>

/**
 * main - entry point
 * Return: 0 always (success)
 */
int main(void)
{
	char alpha = 'a';

	do {
		if (alpha != 'e' && alpha != 'q')
			putchar(alpha);
	} while (alpha++ < 'z');

	putchar('\n');
	return (0);
}
