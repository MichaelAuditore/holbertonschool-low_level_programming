#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - reallocate an array in newly allocated space in memory
 * @str: starter address to reallocate
 * Return: New address of array
 */
char *_strdup(char *str)
{
	char *nstr;
	int i = 0;
	int j = 0;

	while (str[i])
		i++;
	if (str == NULL)
		return (NULL);

	nstr = (char *) malloc(i + 1 * sizeof(char));
	if (nstr == NULL)
		return (NULL);
	while (j < i)
	{
		nstr[j] = str[j];
		j++;
	}
	nstr[i] = '\0';
	if (nstr == NULL)
		return (NULL);
	return (nstr);
}
