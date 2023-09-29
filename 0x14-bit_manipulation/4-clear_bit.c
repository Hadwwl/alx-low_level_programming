#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a choosen index
 * @n: pointer ponits to the number to be change
 * @index: bit index to be cleared
 * Return: 1 if worked or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
