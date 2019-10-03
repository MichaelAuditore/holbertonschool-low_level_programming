#include "holberton.h"

/**
 * reverse_array - reverse an array
 * @n: Number of elements
 * @a: pointer
 * not retun
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int i = 0;

	n -= 1;
	while (i <= n)
	{
		tmp = a[n];
		a[n] = a[i];
		a[i] = tmp;
		n--;
		i++;
	}
}
