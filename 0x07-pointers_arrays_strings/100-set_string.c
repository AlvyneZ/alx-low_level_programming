#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: Address of string (pointer to char) to be set
 * @to: New string (pointer to char)
 */
void set_string(char **s, char *to)
{
	s = &to;
}
