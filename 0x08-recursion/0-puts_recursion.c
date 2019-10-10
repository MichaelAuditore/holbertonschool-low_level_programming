#include "holberton.h"

/**
 * _puts_recursion - prints an string recursively
 * @s: The String to print
 * not return any value
 */
void _puts_recursion(char *s)
{
	if (*s > 0)
	{
		_putchar (*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
