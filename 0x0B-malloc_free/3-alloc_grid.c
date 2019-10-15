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

	int **ar;
	int j = 0;

	ar = (int **) calloc(height, sizeof(int));
	if (ar == NULL)
		return (NULL);
	while (j < height)
	{
		ar[j] = (int *) calloc(width, sizeof(int));
		j++;
	}
	if (ar == NULL)
		return (NULL);
	return (ar);
}
