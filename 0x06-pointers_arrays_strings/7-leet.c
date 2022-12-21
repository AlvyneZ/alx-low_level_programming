#include "main.h"

/**
 * leet - Performs leet character replacements on a string
 * @s: String to be edited
 * Return: Edited string
 */
char *leet(char *s)
{
	char *sCurs, *repCurs;
	char rep[] = "aA4eE3oO0tT7lL1";

	for (sCurs = s; (*sCurs != '\0'); sCurs++)
	{
		for (repCurs = rep; (*repCurs != '\0'); repCurs += 3)
		{
			if ((*sCurs == repCurs[0]) || (*sCurs == repCurs[1]))
				*sCurs = repCurs[2];
		}
	}
	return (s);
}
