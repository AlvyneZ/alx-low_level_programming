#include "main.h"

/**
 * string_toupper - Converts lower case letters in astring to upper case
 * @s: String to be edited
 * Return: Edited string
 */
char *string_toupper(char *s)
{
	char *sCurs;

	sCurs = s;
	for (; (*sCurs != '\0'); sCurs++)
	{
		if ((*sCurs >= 'a') && (*sCurs <= 'z'))
			*sCurs = *sCurs - 32;
	}
	return (s);
}
