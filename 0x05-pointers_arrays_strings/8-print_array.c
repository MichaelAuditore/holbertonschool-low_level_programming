#include "holberton.h"
#include <stdio.h>

/**
 * print_array - print a length of array
 * @a: pointer to evaluate
 * @n: length to print
 * not return
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d\n", a[i]);
		else
			printf("%d, ", a[i]);
	}
}
