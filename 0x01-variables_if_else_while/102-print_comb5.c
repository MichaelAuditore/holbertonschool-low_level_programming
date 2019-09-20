#include <stdio.h>

/**
 * main - Entry point
 * This function works to print a number succession
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	for (a = 0 ; a < 99 ; a++)
	{
		for (b = 1 ; b < 100 ; b++)
		{
			if ((a % 10 + '0') != (b % 10 + '0') && (a < b))
			{
				putchar(a / 10 + '0');
				putchar(a % 10 + '0');
				putchar(' ');
				putchar(b / 10 + '0');
				putchar(b % 10 + '0');
				if ((a == 98) && (b == 99))
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
