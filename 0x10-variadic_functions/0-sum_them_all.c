#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums of all its parameters
 * @n: number of parameters
 * @...: variable numbers of parameters to be calculated
 * Return: 0 if n == 0 or sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0 ; i < n ; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
