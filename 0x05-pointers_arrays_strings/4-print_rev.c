#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 * @s: This is the string to evaluate
 * Return: Quantity of characters into a string
 */
void print_rev(char *s)
{
	int i = 0;

	while (i[s] != '\0')
		i++;
	i-=1;
	while (i[s] > 0)
	{
		_putchar(i[s]);
		i--;
	}
	_putchar('\n');
}
