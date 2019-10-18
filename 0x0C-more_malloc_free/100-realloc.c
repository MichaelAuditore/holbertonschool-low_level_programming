#include "holberton.h"
#include <stdlib.h>
/**
 * _realloc - copy the content of an address to other address generating
 * a new amount size of memory
 * @ptr: Address of Array to evaluate
 * @old_size: Is the number of bytes used to initialize the array
 * @new_size: Is the number of bytes to be used to initialize the new array
 * Return: Array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	int i;
	char *pr = ptr;

	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < old_size; i++)
		p[i] = *(pr + i);
	free(ptr);
	return (p);
}
