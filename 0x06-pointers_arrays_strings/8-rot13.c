#include "holberton.h"
/**
 * rot13 - replace the first
 * @c: Array to evaluate
 * Return: An String
 */
char *rot13(char *c)
{
	int i, j;
	char *fl = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char *ll = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; fl[j]; j++)
		{
			if (c[i] == fl[j])
			{
				c[i] = ll[j];
				break;
			}
		}
	}
	return (c);
}
