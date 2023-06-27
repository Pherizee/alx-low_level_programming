/**
 * _strlen - returns the length of a string
 * @s: string address
 *
 * Return: value of string length
 */

int _strlen(char *s)
{
	int n;

	n = 0;
	while (*s != '\0')
	{
		n++;
		s++;
	}

	return (n);
}
