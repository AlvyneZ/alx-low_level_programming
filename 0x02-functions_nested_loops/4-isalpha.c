#include "main.h"

/**
 * _islower- Checks if a character is an alphabetic character
 * @c: Character to be checked
 * Return: 1 if alphabetic & 0 otherwise
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	return (0);
}
