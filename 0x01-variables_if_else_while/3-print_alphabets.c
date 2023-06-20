#include <stdio.h>

/**
 * main - entry point
 * Return: 0 always (success)
 */
int main(void)
{
	char lower = 'a';
	char upper = 'A';

	do
		putchar(lower);
	while (lower++ < 'z');

	do
		putchar(upper);
	while (upper++ < 'Z');

	putchar('\n');
	return (0);
}
