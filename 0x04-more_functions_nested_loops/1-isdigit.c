#include "holberton.h"

/**
 * _isdigit - start the program
 * @c: Integer parameter
 * Return: 1 is upper 0 is lower
 */
int _isdigit(int c)
{
	int a;
	a = ((c >= 48 && c <= 57) ? 1 : 0);
	return (a);
}
