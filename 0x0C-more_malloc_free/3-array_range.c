#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: min value of elements
 * @max: max value of elements
 * Return: Array of integers
 */
int *array_range(int min, int max)
{
	int *p;
	int i;
	int size;

	if (min > max)
		return (NULL);

	size = (max - min);

	p = malloc((size + 1) * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		p[i] = min++;
	}
	return (p);
}
