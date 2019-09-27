#include "holberton.h"

/**
 * print_diagonal - prints a diagonal expecting the n spaces
 * @n: The n spaces integer number
 *
 * not return
 */
void print_diagonal(int n)
{
	int a = 1;
	int b = 0;

	if (n <= 0)
		_putchar('\n');
	while (a <= n)
	{
		b = 0;
		while (b < a)
		{
			if (b < (a - 1))
				_putchar(' ');
			else
				_putchar('\\');
			b++;
		}
		_putchar('\n');
		a++;
	}
}
