#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - generates the sums of the diagonal values of a matrix
 *
 * @a: matrix to get diagonals of
 * @size: size of matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int add = 0;
	int add2 = 0;
	int i = 0;
	int max = 0;

	max = size * size;

	while (i < max)
	{
		add += a[i];
		i = i + size + 1;
	}
	i = size - 1;
	while (i < (max - 1))
	{
		add2 += a[i];
		i = i + (size - 1);
	}

	printf("%d, %d\n", add, add2);
}
