#include "main.h"

/**
 * get_endianness - Checks the system endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned long num;
	unsigned short *mem0, *memX;

	num = 0xAAUL;
	mem0 = (unsigned short *)&num;
	memX = mem0 + (sizeof(unsigned long) / sizeof(unsigned short)) - 1;
	if ((*memX) == 0xAA)
		return (0);
	if ((*mem0) == 0xAA)
		return (1);
	return (0);
}
