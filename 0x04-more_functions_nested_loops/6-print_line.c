#include "holberton.h"

/**
 * print_line - start the program
 * draws a straight line by number of n
 * @n: Lines to draw
 * not return
 */
void print_line(int n)
{
	int a = 1;

	while (a <= n)
	{
		_putchar('_');
		if (a == n)
			_putchar('\n');
		a++;
	}
	if (n <= 0)
		_putchar('\n');
}
