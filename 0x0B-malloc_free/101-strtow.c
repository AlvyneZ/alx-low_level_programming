#include "main.h"
#include <stdlib.h>

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
 * _strchr - Locates a character in a string
 * @s: String to be searched through
 * @c: Character to be searched for
 * Return: Pointer to first occurence of c or
 *  NULL if c is absent
 */
char *_strchr(char *s, char c)
{
	char *sCurs;

	sCurs = s;
	for (; (*sCurs != '\0'); sCurs++)
	{
		if (*sCurs == c)
			return (sCurs);
	}
	if (c == '\0')
		return (sCurs);
	return (NULL);
}

/**
 * strtow - Splits a string into words
 * @str: Input string
 * Return: a pointer to an array of the words in the
 *  input string, or NULL if it fails or the input string
 *  is invalid
 */
char **strtow(char *str)
{
	char **out, *w1, *w2;
	int wCount, ind, len;

	if ((str == NULL) || (_strlen(str) == 0))
		return (NULL);
	for (wCount = 0, w2 = str; w2 != NULL;)
	{
		w1 = (*w2 == ' ') ? w2 + 1 : w2;
		w2 = _strchr(w1, ' ');
		if (((w2 == NULL) ? _strlen(w1) : w2 - w1) > 0)
			wCount++;
	}
	if (wCount == 0)
		return (NULL);
	out = malloc((wCount + 1) * sizeof(char *));
	if (out == NULL)
		return (NULL);
	out[wCount] = NULL;
	for (ind = 0, w2 = str; ((w2 != NULL) && (ind < wCount));)
	{
		w1 = (*w2 == ' ') ? w2 + 1 : w2;
		w2 = _strchr((w1), ' ');
		len = (w2 == NULL) ? _strlen(w1) : w2 - w1;
		if (len > 0)
		{
			w2 = w1;
			w1 = malloc(len + 1);
			if (w1 == NULL)
			{
				while (ind > 0)
					free(out[--ind]);
				free(out);
				return (NULL);
			}
			out[ind++] = w1;
			_strncpy(w1, w2, len);
			w2 += len;
		}
	}
	return (out);
}
