#include "holberton.h"
#include <stdlib.h>
/**
 * _memset - fills memory with a constant byte
 * @s: The starter address to fill
 * @n: The first memory bytes of the array
 * @b: Constant byte
 * Return: Array
 */
int *_memset(int *s, int b, int n)
{
	int i = b;

	while (i < n)
	{
		s[i] = i;
		i++;
	}
	return (s);
}
/**
 * array_range - creates an array of integers
 * @min: min value of elements
 * @max: max value of elements
 * Return: Array of integers
 */
int *array_range(int min, int max)
{
	int *p;

	if (min > max)
		return (NULL);
	p = malloc(max * sizeof(int));
	if (p == NULL)
		return (NULL);
	while (min < max)
	{
		_memset(p, min, max);
		min++;
	}
	return (p);
}
