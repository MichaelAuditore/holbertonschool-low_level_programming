#include "dog.h"
/**
 * init_dog - initialize an instance for struct dog
 * @d: My pointer to struct dog
 * @name: Name of Dog
 * @age: Age of Dog
 * @owner: The ownership of Dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
