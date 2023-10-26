#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to number
 * @index: index
 * Return: 1 if worked or -1 if error happened
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setlovw;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	setlovw = 1 << index;
	*n = *n | setlovw;
	return (1);
}
