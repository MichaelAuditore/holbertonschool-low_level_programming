#include "holberton.h"

/**
* times_table - initialize the program
* This function prints the times table
*
*
*/
void times_table(void)
{
	int a = 0;
	int b;
	int c;

	while (a < 10)
	{
		_putchar('0');
		b = 1;
		while(b < 10)
		{
			c = a * b++;
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			if(c < 10)
			{
				_putchar(c + '0');
			}
			else if(c >= 10 && c < 100)
			{
				_putchar(c / 10 + '0');
				_putchar(c % 10 + '0');
			}
			
		}
		_putchar('\n');
		a++;
	}
}
