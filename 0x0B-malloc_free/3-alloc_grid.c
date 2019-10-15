#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - creates a two dimensional array
 * initialized each position with 0
 * @width: the width of the array
 * @height: the height of the array
 * Return: An Integer array of two dimensions
 */
int **alloc_grid(int width, int height)
{
	int **ar, i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);


	ar = malloc(height * sizeof(int *));

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(width * sizeof(int));
		if (ar[i] == NULL)
		{
			ar[i] = 0;
		}
	}

	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
			ar[j][k] = 0;
	}

	if (ar == NULL)
		return (NULL);
	return (ar);
}
