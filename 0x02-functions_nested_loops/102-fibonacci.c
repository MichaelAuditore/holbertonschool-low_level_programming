#include <stdio.h>

/**
 * main - this executes the program
 *
 * Return: Always 0
 */
int main(void)
{
	long int a = 0;
	long int b = 1;
	long int c = 0;
	long int d = 0;

	while (c <= 49)
	{
		d = a + b;
		printf("%lu", d);
		if (c != 49)
			printf(", ");
		a = b;
		b = d;
		c++;
	}
	printf("\n");
	return (0);
}
