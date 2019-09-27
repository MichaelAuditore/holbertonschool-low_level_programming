#include "holberton.h"

/**
 * print_square - prints a square by dimensions
 * @size: represents the dimension of square
 *
 * not return
 */
void print_square(int size)
{
	int a = 1;
	int b = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	while (a <= size)
	{
		b = 0;
		while (b < size)
		{
			_putchar('#');
			b++;
		}
		_putchar('\n');
		a++;
	}

}
