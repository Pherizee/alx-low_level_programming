/**
 * _isdigit - function to check if input is a digit
 * @c: int input
 * Return:
 * 1 if digit
 * 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);
}
