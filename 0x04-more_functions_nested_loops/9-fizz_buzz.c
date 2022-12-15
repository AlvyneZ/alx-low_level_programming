#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print- A printf implementation that prints till '\0'
 * @str: Pointer to input character array too be printed
 * Return: 0
 */
int print(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	return (0);
}

/**
 * print_number_simple - Print a multiple digit number
 * @n: Number to print
 */
void print_number_simple(int n)
{
	int max;
	int zeros;

	zeros = 0;
	for (max = 1000000000; max >= 1; max /= 10)
	{
		if (max == 1)
		{
			zeros = 1;
		}
		if (n < max)
		{
			if (zeros)
				_putchar('0');
		}
		else
		{
			zeros = 1;
			_putchar('0' + (n / max));
			n %= max;
		}
	}
}

/**
 * main - Prints out numbers from 1 to 100 replacing multiples
 *  of 3 with Fizz and multiples of 5 with Buzz
 * Return: 0
 */
int  main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (!(num % 15))
		{
			print("FizzBuzz");
		}
		else if (!(num % 3))
		{
			print("Fizz");
		}
		else if (!(num % 5))
		{
			print("Buzz");
		}
		else
		{
			print_number_simple(num);
		}
		if (num != 100)
		{
			_putchar(' ');
		}
	}
	_putchar('\n');

	return (0);
}
