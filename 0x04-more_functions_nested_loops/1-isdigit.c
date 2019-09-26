#include "holberton.h"

/**
 * _isdigit - start the program
 * @c: Integer parameter
 * Return: 1 is upper 0 is lower
 */
int _isdigit(int c)
{
	int a;

	a = ((c >= 97 && c <= 122) || (c >= 65 && c <=90) ? 0 : 1);
	return (a);
}
