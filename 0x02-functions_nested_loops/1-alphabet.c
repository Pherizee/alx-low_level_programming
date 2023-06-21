#include "main.h"

/**
 * print_alphabet - this prints all the lower
 * case alphabets followed by a new line
 * args: void
 * Return: void
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
