#include "holberton.h"
#include <stdio.h>

/**
 * verify_palindrome - function to determine a palindrome
 *
 * @l: length of my initial pointer
 * @i: initial counter
 * @s: My pointer address of string to evaluate
 * Return: 1 for palindrome, 0 if not
 */
int verify_palindrome(char *s, int l, int i)
{
	if (s[i] == s[l] && l != i)
		return (verify_palindrome(s, --l, ++i));
	if (s[i] == s[l] || i >= l)
		return (1);
	if (s[i] != s[l])
		return (0);
	return (1);
}

/**
 * strlen_recursion - returns the strlen recursively
 * @s: string to gets the strlen
 * @i: initial counter
 * Return: mplete, or length
 */
int strlen_recursion(char *s, int i)
{
	if (s[i] != '\0')
		return (strlen_recursion(s, ++i));
	return (--i);
}

/**
 * is_palindrome - determines if number inside string is a palindrome or not
 * @s: string to check
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int length;

	length = strlen_recursion(s, 0);
	return (verify_palindrome(s, length, 0));
}
