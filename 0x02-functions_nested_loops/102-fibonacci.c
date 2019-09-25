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
	int c = 1;

	printf("%ld, ", a);
	printf("%ld, ", b);
	while (c < 49)
	{
		if (a < b)
		{
			printf("%ld, ", a + b);
			a = a + b;
		}
		if (b < a)
		{
			if (c == 48)
			{
				printf("%ld", b + a);
				break;
			}
			else
				printf("%ld, ", b + a);
			b = b + a;
		}
		c++;
	}
	printf("\n");
	return (0);
}
