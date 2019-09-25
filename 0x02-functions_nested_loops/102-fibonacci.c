#include <stdio.h>

/**
 * main - start the program
 * This function displays the first 50 fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	long a = 1;
	long b = 2;
	long fi = 3;
	int c = 1;

	printf("%ld, ", a);
	printf("%ld, ", b);
	while (c < 47)
	{
		printf("%ld, ", fi);
		a = b;
		b = fi;
		fi = a + b;
		c++;
	}
	printf("%ld\n", fi);
	return (0);
}
