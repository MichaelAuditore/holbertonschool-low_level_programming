#include "holberton.h"
/**
 * prime_factor - allows to know if the number if prime or not
 * @n: prime number
 * @p: first prime number of all that variate with the conditions
 * Return: 1 or 0
 */
int prime_factor(int n, int p)
{
	if (n % p == 0)
		return (0);
	if (p > n / 2)
		return (1);
	return (prime_factor(n, ++p));
}

/**
 * is_prime_number - returns a 1 or 0 if number is prime or not
 * @n: parameter to evaluate
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	if (n % 2 == 0)
		return (0);
	if (n == 1)
		return (0);
	return (prime_factor(n, 3));
}
