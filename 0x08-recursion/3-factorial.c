#include "holberton.h"
/**
 * factorial - returns the factorial of an specific number
 * @n: Specific number to factorial
 * Return: The factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
