#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenate a n bytes of a string into another
 * @s1: First Address of string
 * @s2: Second Address of string
 * @n: Number of bytes
 * Return: A pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int j = 0;

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	if (n >= len2)
		n = len2;

	str = malloc((len1 + n + 1) * sizeof(char));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	str[0] = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (j < n && s2[j] != '\0')
	{
		str[len1 + j] = s2[j];
		j++;
	}
	str[len1 + j] = '\0';
	return (str);
}
