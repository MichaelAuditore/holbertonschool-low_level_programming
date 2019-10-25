#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * split - split each string
 * @i: position of iterator
 * @n: const of number of elements
 * @separator: It's the character to separate
 */
void split(unsigned int i, const unsigned int n, const char *separator)
{
	if (i != n - 1)
	{
		if (separator != NULL)
			_putchar(*separator);
		_putchar(' ');
	}
	else
		_putchar('\n');
}
/**
* print_strings - print all strings arguments
* @separator: Represents the character to separate the strings
* @n: Number of arguments passed
* @...: Variadic arguments
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	int j;
	int ic;
	char *str;

	if (n == 0)
		return;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		j = 0;
		str = va_arg(strings, char *);
		if (str == NULL)
			str = "(nil)";
		while (str[j] != '\0')
			j++;
		if (j > 1)
		{
			for (ic = 0; ic < j; ic++)
			{
				_putchar(str[ic]);
			}
			split(i, n, separator);
		}
		else
		{
			_putchar(str[j]);
			_putchar(' ');
		}
	}
	va_end(strings);
}
