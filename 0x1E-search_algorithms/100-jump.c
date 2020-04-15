#include "search_algos.h"
#include <stdlib.h>
#include <math.h>
/**
 * jump_search - searches for a value in
 * a sorted array of integers using the Jump search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: valute to search for
 * Return: index where value is located or -1 if it isn't found
 */
int jump_search(int *array, size_t size, int value)
{
	int step, prev = 0, tmp = 0;

	step = sqrt(size);
	while (array[prev] < value)
	{
		tmp = prev;
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[step] > value || step >= (int)size)
			break;
		else
		{
			prev = step;
			step = step + sqrt(size);
		}
	}

	while (array[prev] < value)
		tmp = 1, prev++;
	if (tmp == 1)
	{
		printf("Value found between indexes [%d] and [%d]\n", step - 3,
		       step), step = step - 3;
	}
	else
	{
		printf("Value found between indexes [%d] and [%d]\n", tmp, prev);
		step = tmp;
	}
	while (step < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", step,
		       array[step]);
		if (array[step] == value)
			break;
		step++;
	}
	if (array[prev] == value)
		return (prev);
	return (-1);
}
