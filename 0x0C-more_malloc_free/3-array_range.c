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
	int i = max - min;
	int j = 0;
	int *p;

	if (min > max)
		return (NULL);
	p = malloc((i + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	while (min < max)
	{
		p[j] = min;
		min++;
		j++;
	}
	return (p);
}
