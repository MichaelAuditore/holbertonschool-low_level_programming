#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints info into struct dog
 * @d: Pointer to struct dog
 */
void print_dog(struct dog *d)
{
	struct dog mydog = *d;

	printf("Name: %s\n", mydog.name);
	printf("Age: %f\n", mydog.age);
	printf("Owner: %s\n", mydog.owner);
}
