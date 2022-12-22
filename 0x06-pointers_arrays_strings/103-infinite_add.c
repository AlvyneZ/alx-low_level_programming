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
* rev_string - Reverses a string
 * @s: String to be reversed
 */
void rev_string(char *s)
{
	int len, ind;
	char tmp;

	len = _strlen(s) - 1;
	for (ind = 0; ind <= (len / 2); ind++)
	{
		tmp = *(s + len - ind);
		*(s + len - ind) = *(s + ind);
		*(s + ind) = tmp;
	}
}

/**
* infinite_add - Adds two numbers provided in string form
 * @n1: First string
 * @n2: second string
 * @r: result buffer
 * @size_r: buffer size
 * Return: 0 if result cannot be stored, otherwise buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i1, i2, ir, l1, l2;
	int a, b, c, s;

	l1 = _strlen(n1);
	l2 = _strlen(n2);
	if ((l1 >= size_r) || (l2 >= size_r))
		return (0);
	i1 = l1 - 1;
	i2 = l2 - 1;
	ir = 0;
	c = 0;
	while ((i1 >= 0) || (i2 >= 0) || (c != 0))
	{
		if (ir >= size_r - 1)
			return (0);
		a = 0;
		b = 0;
		if (i1 >= 0)
		{
			a = n1[i1] - '0';
			i1--;
		}
		if (i2 >= 0)
		{
			b = n2[i2] - '0';
			i2--;
		}
		s = a + b + c;
		r[ir] = '0' + (s % 10);
		c = s / 10;
		ir++;
	}
	r[ir] = '\0';
	rev_string(r);
	return (r);
}
