#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - Selects the correct function to perform
 *  a given operation
 * @s: Operation whose function is required
 * Return: The pointer to the function that performs the
 *  required operation, or NULL if the function is not
 *  coded for
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while ((s != NULL) && (i < 5))
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
