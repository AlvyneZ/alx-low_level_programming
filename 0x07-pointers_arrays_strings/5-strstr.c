#include "main.h"
#define NULL ((void *)0)

/**
 * _strstr - Finds the first occurrence of the substring needle
 *   in the string haystack
 * @haystack: String to be searched through
 * @needle: Substring to be located
 * Return: Pointer to beginning of the located substring or
 *  NULL if substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int curs, found;
	char *hCurs;

	for (hCurs = haystack; *hCurs != '\0'; hCurs++)
	{
		found = 1;
		for (curs = 0; ((needle[curs] != '\0') &&
			(hCurs[curs] != '\0')); curs++)
		{
			if (needle[curs] != hCurs[curs])
			{
				found = 0;
				break;
			}
		}
		if ((found) && (needle[curs] == '\0'))
			return (hCurs);
	}
	return (NULL);
}
