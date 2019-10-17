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
	int size = max - min;
	int i = 0;
	int j = min;
	int *p;

	if (min > max)
		return (NULL);
	p = malloc((size) * sizeof(int));
	if (p == NULL)
		return (NULL);
	while (i < size)
	{
		p[i] = j;
		i++;
		j++;
	}
	return (p);
}
