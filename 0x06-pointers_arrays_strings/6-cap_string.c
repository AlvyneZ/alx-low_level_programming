#include "main.h"

/**
 * cap_string - Capitalzes all words in a string
 * @s: String to be edited
 * Return: Edited string
 */
char *cap_string(char *s)
{
	char *sCurs;
	int start;

	sCurs = s;
	start = 0;
	for (; (*sCurs != '\0'); sCurs++)
	{
		if ((*sCurs == ',') || (*sCurs == ';') || (*sCurs == '.') ||
		(*sCurs == '!') || (*sCurs == '?') || (*sCurs == '\"') ||
		(*sCurs == '(') || (*sCurs == ')') || (*sCurs == '{') ||
		(*sCurs == '}') || (*sCurs == ' ') || (*sCurs == '\t') ||
		(*sCurs == '\n'))
		{
			start = 1;
		}
		else
		{
			if ((start) && (*sCurs >= 'a') && (*sCurs <= 'z'))
				*sCurs = *sCurs - 32;
			start = 0;
		}
	}
	return (s);
}
