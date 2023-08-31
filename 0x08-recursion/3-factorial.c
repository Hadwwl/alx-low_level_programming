#include "stdio.h"

/**
 * factorial - returns the factorial of number
 * @n: number
 * Return: The factorial of the number, or -1 if there is an error
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
