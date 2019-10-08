#include "holberton.h"

/**
 * _strstr - locates a substring
 * @haystack: String to evaluate
 * @needle: ocurrence of substring
 * Return: String
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;
		while (haystack[j] == neeedle[j] &&
		      needle[j] != '\0' && haystack[i] != '\0')
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return (haystack + 0);
		i = start + 1;
	}
	return (0);
}
