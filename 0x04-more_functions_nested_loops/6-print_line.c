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
	if(n > 0)
	{
		while (a <= n)
		{
			if (a == n)
				_putchar('\n');
			else
				_putchar('_');
			a++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
