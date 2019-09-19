#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48 ; b <= 57 ; b++)
		{
			for (c = 48 ; c <= 57 ; c++)
			{
				if ((a != b) && (b != c) && (a != c) && (a < c) && (b < c) && (a < b))
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if ((a == 55) && (b == 56) && (c == 57))
					{
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
