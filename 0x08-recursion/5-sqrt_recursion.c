#include "main.h"

/**
 * _sqrt_finder - Recursively converges square-root guesses
 * @n: Number to be square-rooted
 * @a: Guess of square-root
 * Return: Number closer to Square-root of n
 */
int _sqrt_finder(int n, int a)
{
	int t;

	if ((n == 0) || (n == 1))
		return (n);
	if (a == 0)
		return (-1);
	t = n / a;
	if (t == a)
	{
		if ((a * a) == n)
			return (a);
		else
			return (-1);
	}
	return (_sqrt_finder(n, ((t + a) / 2)));
}

/**
 * _sqrt_recursion - Returns the natural square-root of a number
 * @n: Number to be square-rooted
 * Return: Square-root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_finder(n, n / 2));
}
