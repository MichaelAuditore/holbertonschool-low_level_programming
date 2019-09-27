#include <stdio.h>

/**
 * main - prints the largest prime factor of an specified number
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long it;
	unsigned long cons = 612852475143;

	for (it = 2 ; it <= cons ; )
	{
		if (cons % it == 0)
		{
			cons = cons / it;
			it = it;
		}
		else
		{
			it++;
		}
		if (cons == 1)
		{
			printf("%ld", it);
		}
	}
	if (cons == 1)
	{
		printf("%ld\n", it);
	}
	return (0);
}
