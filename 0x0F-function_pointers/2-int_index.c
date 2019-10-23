#include <stdlib.h>
/**
 * int_index - search for an integer number into array
 * @array: Address of array to search
 * @size: Size of array
 * @cmp: function to callback
 * Return: 1, 0, -1 if found a pattern or not
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	if (array == NULL || cmp == NULL)
		return (0);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return(i);
		}
	}
	return (-1);
}
