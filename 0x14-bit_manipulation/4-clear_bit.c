#include "holberton.h"
/**
 * clear_bit - set the value of a bit 0 at a given position
 * @n: Pointer with the number
 * @index: index to set the value to 1
 * Return: 1 if its works or -1 it's not ocurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int i = 1;

	if (index > sizeof(n) * 8)
		return (-1);

	i <<= index;
	*n = ~*n;
	*n |= i;
	*n = ~*n;

	return (1);
}
