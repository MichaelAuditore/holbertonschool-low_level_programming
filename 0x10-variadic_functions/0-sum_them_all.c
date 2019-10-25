#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum all arguments
 * @n: - constant that represents the number of arguments
 * @...: Variable arguments
 * Return: The sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;
	int len = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
