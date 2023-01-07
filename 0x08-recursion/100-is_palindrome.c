# include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: String whose length is required
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome_rec - Checks if a string is a palindrome one
 *  character at a time
 * @s: String to be tested
 * @i: Index to be checked
 * @len: String length
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome_rec(char *s, int i, int len)
{
	if (i >= (len / 2))
	{
		return (1);
	}
	if (s[i] != s[len - 1 - i])
	{
		return (0);
	}
	return (is_palindrome_rec(s, i + 1, len));
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: String to be tested
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len <= 1)
	{
		return (1);
	}
	return (is_palindrome_rec(s, 0, len));
}
