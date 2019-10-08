#include "holberton.h"

/**
 * _strstr - locates a substring
 * @haystack: String to evaluate
 * @needle: ocurrence of substring
 * Return: String
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, count;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		count = i;
		while (haystack[i] == needle[j] &&
		      needle[j] != '\0' && haystack[i] != '\0')
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return (haystack + count);
		i = count + 1;
	}
	return (0);
}
