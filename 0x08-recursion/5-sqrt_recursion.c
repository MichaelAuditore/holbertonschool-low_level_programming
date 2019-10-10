#include "holberton.h"
/**
 * sqrt_root - Its the way to know if the number has square root or not
 * @n: the number to evaluate
 * @r: square root number
 * Return: The square
 */
int sqrt_root(int n, int r)
{
	int mul;

	mul = r * r;
	if (mul == n)
		return (r);
	else if (n < mul)
		return (-1);
	return (sqrt_root(n, ++r));
}


/**
 * _sqrt_recursion - returns a square root of a number
 * @n: parameter to evaluate
 * Return: Square root of @n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (sqrt_root(n, 2));
}
