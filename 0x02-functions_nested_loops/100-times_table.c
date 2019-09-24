#include "holberton.h"

/**
* print_times_table - initialize the program
* This function prints the times table
* @n: first integer
*
*/
void print_times_table(int n)
{
	int a = 0;
	int b;
	int c;

	if (n >= 0 && n <= 15)
	{
		n++;
		while (a < n)
		{
			_putchar('0');
			b = 1;
			while (b < n)
			{
				c = a * b++;
				_putchar(',');
				_putchar(' ');
				if (c < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(c + '0');
				}
				else if (c >= 10 && c < 100)
				{

					_putchar(' ');
					_putchar(c / 10 + '0');
					_putchar(c % 10 + '0');
				}
				else
				{
					_putchar(c / 100 + '0');
					_putchar(c / 10 % 10 + '0');
					_putchar(c % 10 + '0');
				}
			}
			_putchar('\n');
			a++;
		}
	}
}
