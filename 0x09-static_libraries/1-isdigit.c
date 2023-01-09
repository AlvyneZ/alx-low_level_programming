#include "main.h"

/**
* _isdigit - Checks if a character is in a digit
 * @c: Character to be checked
 * Return: 1 if it is a digit & 0 otherwise
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}
