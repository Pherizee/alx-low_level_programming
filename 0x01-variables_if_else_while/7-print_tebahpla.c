#include <stdio.h>

/**
 * main - entry point
 * Return: 0 always (success)
 */
int main(void)
{
	char lower[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 25; i >= 0; i--)
		putchar(lower[i]);
	putchar('\n');
	return (0);
}
