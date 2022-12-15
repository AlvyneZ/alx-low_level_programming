# include <stdio.h>
# include <math.h>

/**
 * biggest_prime - Gets the biggest prime factor of a number
 * @n: Number whose prime factor is calculated
 * Return: Biggest prime factor
 */
long biggest_prime(long n)
{
	long b;
	long i;

	b = 0;
	while ((n % 2) == 0)
	{
		b = 2;
		n /= 2;
	}
	for (i = 3; i <= sqrt(n); i += 2)
	{
		while ((n % i) == 0)
		{
			b = i;
			n /= i;
		}
	}
	b = n;
	return (b);
}

/**
 * main - Prints the biggest prime factor of 612852475143
 * Return: 0
 */
int main(void)
{
	printf("%ld\n", biggest_prime(612852475143));
	return (0);
}
