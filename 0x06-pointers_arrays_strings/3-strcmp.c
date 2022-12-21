#include "main.h"

/**
* _strlen - Gets the length of a string
 * @s: String whose length is required
 * Return: Length of string s
 */
int _strlen(char *s)
{
	int ind;

	for (ind = 0; (*(s + ind) != '\0'); ind++)
	;
	return (ind);
}

/**
* _strcmp - Compares two strings
 * @s1: First string
 * @s2: second string
 * Return: Lexicographic difference of the strings
 */
int _strcmp(char *s1, char *s2)
{
	int ind;

	for (ind = 0; ((s1[ind] != '\0') && (s2[ind] != '\0')); ind++)
	{
		if (s1[ind] - s2[ind])
			return (s1[ind] - s2[ind]);
	}

	return (s1[ind] - s2[ind]);
}
