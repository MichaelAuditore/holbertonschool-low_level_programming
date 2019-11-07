#include "holberton.h"
/**
 * set_bit - set the value of a bit at a given position
 * @n: Pointer with the number
 * @index: index to set the value to 1
 * Return: 1 if its works or -1 it's not ocurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int i = 1;

	if (index > sizeof(n) * 8)
		return (-1);

	i <<= index;
	*n |= i;

	return (1);
}
