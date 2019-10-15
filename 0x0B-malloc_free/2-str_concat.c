#include "holberton.h"
#include <stdlib.h>
/**
 * _strlen - returns the length of a given string
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
 * _strcpy - copies an entire string to a buffer
 * @src: source string to copy
 * @dest: buffer to copy string into
 * Return: returns pointer to copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	char *tmp;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];

	tmp = dest;

	return (tmp);
}

/**
 * str_concat - concatenate two strings in a new pointer
 * @s1: Address of string one
 * @s2: Address of string two
 * Return: New address of the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *ar;
	int i = 0;
	int j = 0;
	int size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size = (_strlen(s1) + _strlen(s2) + 1);

	ar = malloc(size);
	if (ar == NULL)
		return (NULL);
	while (i < (_strlen(s1) + _strlen(s2)))
	{
		if (s1[i] != '\0')
			ar[i] = s1[i];
		if (i >= _strlen(s1) && s2[j] != '\0')
		{
			ar[i] = s2[j];
			j++;
		}
		i++;
	}
	ar[i] = '\0';
	return (ar);
}
