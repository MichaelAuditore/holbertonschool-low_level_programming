#include "holberton.h"

/**
 * swap_int - swaps the values of two variables
 * @a: Is the first address of variable
 * @b: Is the second address of variable
 * not return
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
