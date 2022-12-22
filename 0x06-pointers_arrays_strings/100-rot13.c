#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @s: String to be edited
 * Return: Edited string
 */
char *rot13(char *s)
{
	char *sCurs;

	for (sCurs = s; (*sCurs != '\0'); sCurs++)
	{
		if (((*sCurs >= 'n') && (*sCurs <= 'z')) ||
		((*sCurs >= 'N') && (*sCurs <= 'Z')))
		{
			*sCurs -= 13;
		}
		else
		{
			while (((*sCurs >= 'a') && (*sCurs <= 'm')) ||
			((*sCurs >= 'A') && (*sCurs <= 'M')))
			{
				*sCurs += 13;
				break;
			}
		}
	}
	return (s);
}
