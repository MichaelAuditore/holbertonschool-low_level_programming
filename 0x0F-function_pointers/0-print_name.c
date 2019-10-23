#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: Address of name to print
 * @f: pointer to function to call
 * Return: callback function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
