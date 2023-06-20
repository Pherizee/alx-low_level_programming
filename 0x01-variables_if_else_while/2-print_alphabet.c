#include <stdio.h>

/**
 * main - entry point
 * Return: 0 always (success)
 */
int main(void)
{
	char i = 'a';

	do
		putchar(i);
	while (++i <= 'z');

	putchar('\n');
	return (0);
}

