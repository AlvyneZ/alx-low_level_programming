#include "main.h"

/**
 * _islower- Checks if a character is lower case
 * @c: Character to be checked
 * Return: 1 if lower case & 0 otherwise
 */
int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}
