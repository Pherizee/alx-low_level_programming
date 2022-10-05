#include "main.h"
#include <stdio.h>

/**
 * main - print the name of the program
 *
 *@argc: argument count
 *@argv: argument array
 *
 * Return: 0 always
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
