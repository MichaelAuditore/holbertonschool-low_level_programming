#include "holberton.h"

/**
 * _strstr - locates a substring
 * @haystack: String to evaluate
 * @needle: ocurrence of substring
 * Return: String
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (; *haystack; haystack++)
		{
			if (*haystack == needle[i] && *(haystack + 1) == needle[i + 1])
			{
				return (haystack);
			}
		}
	}
	return (0);
}
