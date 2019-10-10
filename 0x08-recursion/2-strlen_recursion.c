#include "holberton.h"
/**
 * _strlen_recursion - prints the length of a string recursively
 * @s: Starter address of a String to evaluate
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
	if (*s > 0)
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	return (0);
}
