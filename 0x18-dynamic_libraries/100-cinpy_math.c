#include "cinpy_main.h"

/*
 * Compiling command:
 * $ gcc -fPIC -shared -o 100-operations.so 100-cinpy_math.c
 */

/**
 * add - Adds two numbers
 * @x: First number
 * @y: Second number
 * Return: result of addition
 */
int add(int x, int y)
{
	return (x + y);
}

/**
 * sub - Subtracts two numbers
 * @x: First number
 * @y: Second number
 * Return: result of subtraction
 */
int sub(int x, int y)
{
	return (x - y);
}

/**
 * mul - Multiplies two numbers
 * @x: First number
 * @y: Second number
 * Return: result of multiplication
 */
int mul(int x, int y)
{
	return (x * y);
}

/**
 * div - Divides two numbers
 * @x: First number
 * @y: Second number
 * Return: result of division
 */
int div(int x, int y)
{
	return (x / y);
}

/**
 * mod - Gets remainder of division two numbers
 * @x: First number
 * @y: Second number
 * Return: remainder of division
 */
int mod(int x, int y)
{
	return (x % y);
}
