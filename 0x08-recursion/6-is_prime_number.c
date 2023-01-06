# include "main.h"

/**
 * sqrt_approach - Recursively converges square-root guesses
 * @n: Number to be square-rooted
 * @a: Guess of square-root
 * Return: Number closer to Square-root of n
 */
int sqrt_approach(int n, int a)
{
	int t;

	t = n / a;
	if ((t - a) >= 0)
	{
		if ((t - a) <= 1)
			return (a);
	}
	else
	{
		if ((a - t) <= 1)
			return (a);
	}
	return (sqrt_approach(n, ((t + a) / 2)));
}

/**
 * prime_chk_ov_five - Checks if a number is divisible by large primes
 * @n: Number whose divisibility is to be tested
 * @p: Prime to start from
 * @sqrt: approximate square-root of n to stop at
 * Return: 0 if the input integer is divisible, 1 otherwise
 */
int prime_chk_large(int n, int p, int sqrt)
{
	if (p > sqrt)
	{
		return (1);
	}
	if ((n % p == 0) || (n % (p + 2) == 0))
	{
		return (0);
	}
	return (prime_chk_large(n, p + 6, sqrt));
}

/**
 * is_prime_number - Checks if a number is prime
 * @n: Number whose primality is to be tested
 * Return: 1 if the input integer is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if ((n == 2) || (n == 3))
	{
		return (1);
	}
	if ((n % 2 == 0) || (n % 3 == 0))
	{
		return (0);
	}
	return (prime_chk_large(n, 5, sqrt_approach(n, n / 2)));
}
