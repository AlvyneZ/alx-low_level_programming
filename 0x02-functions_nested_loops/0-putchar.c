#include "main.h"

/**
 * main- Tests out a printf implementation
 * Return: 0
 */
int main(void)
{
	print("_putchar\n");
	return (0);
}

/**
 * print- A printf implementation that prints till '\0'
 * Return: 0
 */
int print(char* str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	return (0);
}
