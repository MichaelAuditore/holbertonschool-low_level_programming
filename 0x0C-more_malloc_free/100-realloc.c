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
	if (ptr != NULL && new_size <= 0)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size * sizeof(char));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (p);
	}
	if (new_size > old_size)
	{
		for (i = 0; *(pr + i) != '\0'; i++)
		{
			p[i] = *(pr + i);
		}
	}
	free(ptr);
	return (p);
}
