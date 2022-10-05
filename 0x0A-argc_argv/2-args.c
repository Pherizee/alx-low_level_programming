#include <stdio.h>

/**
 * main - print all arguments
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Success 0
 */

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}
