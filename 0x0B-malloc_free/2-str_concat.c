#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - concatenate two strings in a new pointer
 * @s1: Address of string one
 * @s2: Address of string two
 * Return: New address of the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *ar;
	int fs = 0;
	int ls = 0;
	int i = 0;
	int sl = 0;

	while (s1[fs])
		fs++;
	while (s2[ls])
		ls++;

	ar = (char *) malloc(((fs + ls) * sizeof(char)) + 1);
	if (ar == NULL)
		return (NULL);
	while (i < fs)
	{
		ar[i] = s1[i];
		i++;
	}
	while (i < (fs + ls))
	{
		ar[i] = s2[sl];
		i++;
		sl++;
	}
	return (ar);
}
