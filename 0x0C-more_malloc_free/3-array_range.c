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
	int j = min;
	int size;

	if (min > max)
		return (NULL);
	else if (min < max)
		size = (max - min);
	else
		size = (max - min + 1);
	p = malloc(size * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		p[i] = j;
		j++;
	}
	return (p);
}
