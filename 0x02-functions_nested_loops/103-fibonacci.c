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
	long int sum = 0;

	while (c < 50)
	{
		d = a + b;
		if ((d % 2 == 0) && (d < 4000000))
		{
			sum += d;
		}
		a = b;
		b = d;
		c++;
	}
	printf("%lu\n", sum);
	return (0);
}
