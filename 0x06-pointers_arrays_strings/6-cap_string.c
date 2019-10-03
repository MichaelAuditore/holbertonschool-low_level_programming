#include "holberton.h"
/**
 * cap_string - convert to Capitalize all words
 * @c: Pointer to evaluate
 * Return: a String
 */
char *cap_string(char *c)
{
	int i;
	int j;
	int signals[14] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}',
			   '\t', ' ', '\n'};

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 97 && c[i] <= 122)
		{
			j = 0;
			for (; signals[j] != '\0'; j++)
			{
				if (c[i - 1] == signals[j])
				{
					c[i] = c[i] - 32;
					break;
				}
			}
		}
	}
	return (c);
}
