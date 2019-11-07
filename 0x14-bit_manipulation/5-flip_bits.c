#include "holberton.h"
/**
 * flip_bits - return the number of bit to flip
 * to get from one number to another
 * @n: Number to flip
 * @m: Second number to flip
 * Return: the number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int sum = 0;
	unsigned long int mix = 0;

	mix = n ^ m;

	while (mix >= 1)
	{
		if ((mix & 1) == 1)
			sum++;
		mix >>= 1;
	}

	return (sum);
}
