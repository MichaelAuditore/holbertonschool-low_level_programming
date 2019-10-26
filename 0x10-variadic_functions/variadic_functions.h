#ifndef VARIADIC_F_H
#define VARIADIC_F_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct formats - struct of formats
 * @c: Char to validate waht will I print
 * @f: pointer to function to call the print
 */
typedef struct formats
{
	char c;
	void (*f)();
} form_at;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
