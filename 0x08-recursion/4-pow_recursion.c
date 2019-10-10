#include "holberton.h"
/**
 * _pow_recursion - returns the value of a number raised to the power or other
 * @x: The number to power
 * @y: The raised number
 * Return: the value of a power operation
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, --y));
}
