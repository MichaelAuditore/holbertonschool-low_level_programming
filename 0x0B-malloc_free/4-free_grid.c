#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - free memory of an array
 * @grid: the address of array in memory
 * @height: height of the array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
