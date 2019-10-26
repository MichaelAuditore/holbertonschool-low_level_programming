#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
* print_strings - print all strings arguments
* @separator: Represents the character to separate the strings
* @n: Number of arguments passed
* @...: Variadic arguments
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	int i;
	char *str;

	if (n < 1)
	{
		printf("\n");
		return;
	}
	va_start(strings, n);

	for (i = 0; i < (int) n; i++)
	{
		str = va_arg(strings, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if (i != (int) n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
