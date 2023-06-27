/**
 * _atoi - a function that converts string to integer
 * @s: An input string
 * Return: integer from conversion
 */

int _atoi(char *s)
{
	int sign = 1;
	int digit;
	int intFlag = 0;
	unsigned int result = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;

		if (*s >= '0' && *s <= '9')
		{
			intFlag = 1;
			digit = *s - '0';
			result = result * 10 + digit;
		}
		else if (intFlag > 0)
			break;

		s++;
	}

	result *= sign;
	return (result);
}
