#include "main.h"

/**
 * is_prime_number - checks prime numbers
 * is_prime_helper - helper function to check if a number is prime
 * @n: number
 * Return: 1 if the number is prime or 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - helper function to check if a number is prime
 * @n: number
 * @i: current divisor to check
 * Return: 1 if number is prime or 0 otherwise
 */
int is_prime_helper(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, i + 1));
			}
