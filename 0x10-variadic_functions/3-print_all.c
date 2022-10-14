#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <string.h>

void print_action(char f, va_list args, int i, int len);
void separate(int i, int n);

/**
 * print_all - prints anything
 *
 * @format: format for what to print
 */

void print_all(const char * const format, ...)
{
	int format_len, i;
	char f;
	va_list args;

	format_len = strlen(format);
	va_start(args, format);

	i = 0;
	while (i < format_len)
	{
		f = format[i];
		print_action(f, args, i, format_len);		
		i++;
	}
	printf("\n");
}

/**
 * print_action - prints the string
 *
 * @f: format string
 * @args: args
 * @i: position of string
 * @len: number of strings
 * Return: nothing
 */

void print_action(char f, va_list args, int i, int len)
{
	int int_var;
	char char_var;
	char *string;
	double float_var;

	switch (f)
	{
		case 'c':
			char_var = va_arg(args, int);
			printf("%c", char_var);
			separate(i, len);
			break;
		case 'i':
			int_var = va_arg(args, int);
			printf("%d", int_var);
			separate(i, len);
			break;
		case 'f':
			float_var = va_arg(args, double);
			printf("%f", float_var);
			separate(i, len);
			break;
		case 's':
			string = va_arg(args, char *);
			if (string != NULL)
				printf("%s", string);
			else
				printf("(nil)");
			separate(i, len);
			break;
		default:
			break;
	}
}

/*
 * separate - prints separator to strings
 *
 * @i: position of string
 * @n: number of strings
 * Return: Nothing
 */

void separate(int i, int n)
{
	if (i + 1 < n)
		printf(", ");
}
