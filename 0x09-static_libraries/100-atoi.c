#include "main.h"

/**
* _atoi - Converts a string to an integer
 * @s: String to be converted
 * Return: resulting integer value
 */
int _atoi(char *s)
{
	int ret, sign, start;

	start = 0;
	for (ret = 0, sign = 1; (*s != '\0'); s++)
	{
		if (_isdigit(*s))
		{
			start = 1;
			ret *= 10;
			if (sign == 1)
				ret += ((*s) - '0');
			else
				ret -= ((*s) - '0');
		}
		else if (start)
		{
			break;
		}
		else if (*s == '-')
		{
			sign *= -1;
		}
	}
	return (ret);
}
