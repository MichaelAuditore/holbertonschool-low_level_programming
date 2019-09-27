#include "holberton.h"
/**
 * more_numbers - initialize the program
 * It works to print the only number digits except 2 and 4
 * Not return
 */
void more_numbers(void)
{
	int a = 0;
	int b = 0;
	int c;

	while (a < 10)
	{
		b = 0;
		while (b < 15)
		{
			c = (b / 10 == 1 ? b / 10 : b);
			_putchar(c + '0');
			if ((c == 1) && (b > 9))
				_putchar(b % 10 + '0');
			b++;
		}
		a++;
		_putchar('\n');
	}
}
