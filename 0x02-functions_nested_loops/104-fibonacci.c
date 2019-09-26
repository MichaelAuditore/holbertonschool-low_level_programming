#include <stdio.h>

/**
 * main - print the first 98 Fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long a;
	unsigned long b;
	unsigned long c;

	a = 1;
	b = 2;
	printf("1, 2, ");
	for (i = 0; i < 97; i++)
	{
		c = a;
		a = b;
		b = c + a;
		printf("%lu", b);
		if (i != 96)
			printf(", ");
	}
	putchar('\n');
	return (0);
}
