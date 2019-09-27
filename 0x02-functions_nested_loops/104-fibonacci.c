#include <stdio.h>

/**
 * main - print the first 98 Fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long f1;
	unsigned long f2;
	unsigned long f3;
	unsigned long fh1, ft1;
	unsigned long fh2, ft2;
	unsigned long fh3, ft3;

	f1 = 0;
	f2 = 1;
	for (i = 0; i < 90; i++)
	{
		f3 = f2 + f1;
		f1 = f2;
		f2 = f3;
		printf("%lu", f3);
		printf(", ");
	}

	fh1 = f1 / 1000, ft1 = f1 % 1000;
	fh2 = f2 / 1000, ft2 = f2 % 1000;

	for (; i < 98; i++)
	{
		fh3 = fh1 + fh2, ft3 = ft1 + ft2;
		fh3 = fh3 + ft3 / 1000, ft3 = ft3 % 1000;
		fh1 = fh2, ft1 = ft2;
		fh2 = fh3, ft2 = ft3;
		printf("%lu%03lu", fh3, ft3);
		if (i != 97)
			printf(", ");
	}
	putchar('\n');
	return (0);
}
