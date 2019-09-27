#include <stdio.h>

/**
 * main - prints the largest prime factor of an specified number
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long it = 2;
	unsigned long cons = 612852475143;

	while (it < cons)
	{
		if (cons % it == 0)
		{
			cons = cons / it;
			it = 2;
		}
		else
		{
			it++;
		}
	}
	printf("%ld\n", it);
	return (0);
}
