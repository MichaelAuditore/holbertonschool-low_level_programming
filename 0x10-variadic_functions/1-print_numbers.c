#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print all integer arguments
 * @separator: represents the character to separate the numbers to print
 * @n: Represents the number of arguments passed
 * @...: Variadic arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (i != n - 1)
		{
			if (separator != NULL)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(numbers);
}
