#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - returns the length of a given string
 *
 *
 * @s: string to check the length of
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * _strcpy - store a copy of a pointer into another pointer
 * @dest: Pointer one
 * @src: Pointer two
 * Return: Pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
/**
 * _strdup - reallocate an array in newly allocated space in memory
 * @str: starter address to reallocate
 * Return: New address of array
 */
char *_strdup(char *str)
{
	char *nstr;

	if (str == NULL)
		return (NULL);
	nstr = malloc(_strlen(str) + 1);
	if (nstr == NULL)
		return (NULL);
	_strcpy(nstr, str);
	return (nstr);
}
/**
 * new_dog - creates a new dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Ownership of dog
 * Return: A new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	if (name == NULL || owner == NULL)
		return (NULL);
	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	new->name = _strdup(name);
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}
	new->age = age;
	new->owner = _strdup(owner);
	if (new->owner == NULL)
	{
		free(new);
		free(name);
		return (NULL);
	}
	return (new);
}
