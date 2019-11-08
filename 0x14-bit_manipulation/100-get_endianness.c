#include "holberton.h"
/**
 * get_endianness - validate if the endian machine's memory allocate
 * the first byte of binary representation first or the last first,
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	return (0);
}
