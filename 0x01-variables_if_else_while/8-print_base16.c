#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char f;

	for (n = 48; n <= 57 ; n++)
	{
		putchar(n);
	}
	for (f = 'a'; f <= 'f'; f++)
	{
		putchar(f);
	}
	putchar('\n');
	return (0);
}
