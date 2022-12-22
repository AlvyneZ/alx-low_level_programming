#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @s: String to be edited
 * Return: Edited string
 */
char *rot13(char *s)
{
	char *sCurs;
	int rotted;

	for (sCurs = s; (*sCurs != '\0'); sCurs++)
	{
		rotted = 0;
		if (((*sCurs >= 'n') && (*sCurs <= 'z')) ||
		((*sCurs >= 'N') && (*sCurs <= 'Z')))
		{
			*sCurs -= 13;
			rotted = 1;
		}
		while (!rotted && (((*sCurs >= 'a') && (*sCurs <= 'm')) ||
		((*sCurs >= 'A') && (*sCurs <= 'M'))))
		{
			*sCurs += 13;
			rotted = 1;
		}
	}
	return (s);
}
