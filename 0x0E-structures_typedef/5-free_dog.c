#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free memory used to allocate the variables
 * @d: Address of string
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
	else
	{
		return;
	}
}
