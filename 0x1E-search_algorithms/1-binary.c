#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: the index where value is located or -1
 */
int binary_search(int *array, size_t size, int value)
{
	int l = 0, r = (int)size - 1, m = 0, j = 0;

	if (array == NULL || (int)size == 0)
		return (-1);

	while (l <= r)
	{
		j = l;
		printf("Searching in array: ");
		for (; j <= r; j++)
		{
			if (j == r)
				printf("%d\n", array[j]);
			else
				printf("%d, ", array[j]);
		}
		m = l + (r - l) / 2;

		if (array[m] == value)
			return (m);
		if (array[m] < value)
			l = m + 1;
		else
			r = m - 1;
	}
	return (-1);
}
