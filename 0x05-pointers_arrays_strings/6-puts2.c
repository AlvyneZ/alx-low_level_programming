#include "main.h"

/**
* puts2 - Prints a string's even indexed characters
 * @str: String whose even indexed characters are to be printed
 */
void puts2(char *str)
{
	int ind;

	for (ind = 0; (*(str + ind) != '\0'); ind++)
	{
		if (!(ind % 2))
			_putchar(*(str + ind));
	}
	_putchar('\n');
}
