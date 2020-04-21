#include "search_algos.h"
#include <stdlib.h>
#include <math.h>
/**
 * jump_search - search for a value into an array of integers
 * using jump_search algorithm
 * @array: pointer to first position of array
 * @size: length of array
 * @value: value to search into array
 * Return: Index or -1 in case of not find
 */
int jump_search(int *array, size_t size, int value)
{
	int jump = 0, i = 0, flag = 0;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	jump = sqrt(size);
	for (; array[i] <= value;)
	{
		if ((size_t)jump > size)
			break;
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (value <= jump)
		{
			flag = 1;
			break;
		}
		i = jump;
		jump += sqrt(size);
	}
	if (flag == 0)
	{
		printf("Value found between indexes [%d] and [%d]\n", i, jump);
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		return (-1);
	}
	printf("Value found between indexes [%d] and [%d]\n", i, jump);
	for (; array[i] <= value && (size_t)i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	}
	return (i - 1);
}
