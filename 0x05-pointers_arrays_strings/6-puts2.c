#include "holberton.h"

/**
 * puts2 - will print every other character of the string
 * @str: Is the array to evaluate
 * not return
 */
void puts2(char *str)
{
	int i = 0;

	while (i[str] != '\0')
	{
		(i % 2 == 0 ? _putchar(str[i]) : 1);
		i++;
	}
	_putchar('\n');
}
