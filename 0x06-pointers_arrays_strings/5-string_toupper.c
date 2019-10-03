#include "holberton.h"
/**
 * string_toupper - convert all lowercase into upper
 * @c: pointer to evaluate
 * Return: A string
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; i[c] != '\0'; i++)
	{
		if (c[i] >= 97 && c[i] <= 122)
		{
			c[i] -= 32;
		}
	}
	return (c);
}
