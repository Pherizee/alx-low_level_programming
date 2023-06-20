#include <stdio.h>

/**
 * main - entry point of program
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = '0'; i <= '7'; i++)
	{
		j = i + 1;
		for (; j <= '8'; j++)
		{
			k = j + 1;
			for (; k <= '9'; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == '7' && j == '8' && k == '9')
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
