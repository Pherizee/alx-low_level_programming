/**
 * _isupper - function to check if input is uppercase
 * @c: char input
 * Return:
 * 1 if uppercase
 * 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	return (0);
}	
