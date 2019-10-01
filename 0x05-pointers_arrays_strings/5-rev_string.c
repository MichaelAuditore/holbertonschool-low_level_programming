#include "holberton.h"

/**
 * rev_string - prints a string in reverse
 * @s: This is the string to evalu
 * not return
 */
void rev_string(char *s)
{
	int i = 0;
	char word;
	int si = 0;

	while (s[i] != '\0')
		i++;
	i -= 1;
	while (i > si)
	{
		word = s[i];
		s[i] = s[si];
		s[si] = word;
		si++;
		i--;
	}
}
