#include "holberton.h"

/**
 * puts_half - will print every other character of the string
 * @str: Is the array to evaluate
 * not return
 */
void puts_half(char *str)
{
	int i = 0;
	int j;

	while (i[str] != '\0')
		i++;
	(i % 2 == 0 ? (j = i / 2) : (j = ((i / 2) + 1)));
	while (j < i)
	{
		_putchar(j[str]);
		j++;
	}
	_putchar('\n');
}
