#include "holberton.h"
/**
 * get_bit - get bit at a given index
 * @n: Number to get the bit
 * @index: index to get the bit
 * Return: The bit at a given position
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit = 0;

	if (n > 0)
	{
		bit = (n >> index) & 1;
	}
	return (bit);
}
