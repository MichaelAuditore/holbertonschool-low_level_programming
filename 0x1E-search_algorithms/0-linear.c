#include "search_algos.h"
#include "stdio.h"
/**
 * linear_search - searches for a value in an array of integers
 * using the linear search algorithm
 * @array: array of integers used to look for a value into
 * @size: number of elements in array
 * @value: value to search into array
 * Return: index of value or -1 if it fails
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if(array == NULL || (int)size == 0)
		return (-1);

	for (i=0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n",(int)i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
