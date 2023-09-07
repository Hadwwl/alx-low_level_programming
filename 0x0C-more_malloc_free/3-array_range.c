#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of integers
 * @min: min value
 * @max: max value
 * Return: ineger value
 */
int *array_range(int min, int max)
{
	int i, size;
	int *a;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	a = malloc(sizeof(int) * size);
	if (a == NULL)
		return (NULL);
	for (i = 0 ; min <= max ; i++)
		a[i] = min++;

	return (a);
}
