#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer points to number to be changed
 * @index: bit index to be set to 1
 * Return: 1 if worked or -1 if error happened
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
