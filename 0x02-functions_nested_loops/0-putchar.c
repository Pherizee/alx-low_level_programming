#include "main.h"

/**
 * main - Entry point into the program
 * description: It prints the word "_putchar", followed by a new line
 * Return: 0
 */
int main(void)
{
	char word[8] = "_putchar";
	int i;

	for (i = 0; word[i] != '\0'; i++)
		_putchar(word[i]);
	_putchar('\n');

	return (0);
}
