#include "holberton.h"

/**
<<<<<<< HEAD
 * print_diagonal - prints a diagonal expecting the n spaces
 * @size: The n spaces integer number
 *
o * not return
 */
void print_diagonal(int size)
=======
 * print_triangle - prints a diagonal expecting the n spaces
 * @size: The n spaces integer number
 *
 * not return
 */
void print_triangle(int size)
>>>>>>> 7600d671e7e92ac191f978ac86b986e26e00a980
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
<<<<<<< HEAD
			if (b >= (a + b))
=======
			if (size >= (a + b))
>>>>>>> 7600d671e7e92ac191f978ac86b986e26e00a980
				_putchar(' ');
			else
				_putchar('#');
			b++;
		}
		_putchar('\n');
		a++;
	}
}
