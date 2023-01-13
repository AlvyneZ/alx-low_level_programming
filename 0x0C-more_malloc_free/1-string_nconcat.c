#include "main.h"
#include <stdlib.h>

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
* _strcpy - Copies a string to another string
 * @dest: Destination to paste string
 * @src: Source string to copy from
 * Return: destination string
 */
char *_strcpy(char *dest, char *src)
{
	char *destCurs, *srcCurs;

	srcCurs = src;
	destCurs = dest;
	for (; (*srcCurs != '\0'); srcCurs++, destCurs++)
		*destCurs = *srcCurs;
	*destCurs = '\0';

	return (dest);
}

/**
* _strncpy - Copies a string (with a max) to another string
 * @dest: Destination to paste string
 * @src: Source string to copy from
 * @n: Maximum bytes of src to be used and bytes to write
 * Return: destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int ind;

	ind = 0;
	for (; ((*(src + ind) != '\0') && (ind < n)); ind++)
		dest[ind] = src[ind];
	for (; ind < n; ind++)
		dest[ind] = '\0';

	return (dest);
}

/**
 * string_nconcat - Concatenates two strings into a new string,
 *  using only a specified length of the second string
 * @s1: First String
 * @s2: Second String
 * @n: Max length of the second string
 * Return: a pointer to the concatenated string, or NULL if
 *  it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *out;
	unsigned int len, l1;

	l1 = 0;
	len = 0;
	if (s1 != NULL)
		l1 = _strlen(s1);
	if (s2 != NULL)
		len = _strlen(s2);
	if (len > n)
		len = n;
	len += l1 + 1;
	out = malloc(len);
	if (out == NULL)
		return (NULL);
	if (s1 != NULL)
		_strcpy(out, s1);
	if (s2 != NULL)
	{
		if (len == n + l1 + 1)
			_strncpy(&(out[l1]), s2, n);
		else
			_strcpy(&(out[l1]), s2);
	}
	out[len] = '\0';
	return (out);
}
