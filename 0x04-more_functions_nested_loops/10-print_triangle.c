#include "holberton.h"

/**
 * print_triangle - prints a diagonal expecting the n spaces
 * @size: The n spaces integer number
 *
 * not return
 */
void print_triangle(int size)
{
	int a = 1;
	int b = 1;

	if (size <= 0)
		_putchar('\n');
	while (a <= size)
	{
		b = 1;
		while (b <= size)
		{
			if (size >= (a + b))
				_putchar(' ');
			else
				_putchar('#');
			b++;
		}
		_putchar('\n');
		a++;
	}
}
