#include "holberton.h"

/**
 * _isupper - start the program
 * @c: Integer parameter
 * Return: 1 is upper 0 is lower
 */
int _isupper(int c)
{
	int a;

	a = ((c >= 65 && c <= 90) ? 1 : 0);
	return (a);
}
