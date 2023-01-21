#include "3-calc.h"

/**
 * op_add- Adds two numbers
 * @a: First number
 * @b: Second number
 * Return: result of addition
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub- Subracts a number from another
 * @a: First number
 * @b: Second number
 * Return: result of subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul- Multiplies two numbers
 * @a: First number
 * @b: Second number
 * Return: result of multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div- Divides a number by another
 * @a: First number (numerator)
 * @b: Second number (denominator)
 * Return: result of division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod- Gets remainder of a number divided by another
 * @a: First number (numerator)
 * @b: Second number (denominator)
 * Return: remainder of division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
