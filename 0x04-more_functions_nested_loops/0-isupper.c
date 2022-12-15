#include "main.h"

/**
* _isupper - Checks if a letter is in upper case
 * @c: Character to be checked
 * Return: 1 if upper case & 0 otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}
