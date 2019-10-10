#include "holberton.h"

/**
 * _print_rev_recursion - prints a string in reverse recursively
 * @s: Starter address to print
 * not return value
 */
void _print_rev_recursion(char *s)
{
	if (*s > 0)
		_print_rev_recursion(s + 1);
	if (*s < 0)
		_putchar('\n');
	_putchar(*s);
}
