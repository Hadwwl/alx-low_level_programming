#include "main.h"

/**
 * clear_bit - sets the value of bit to 0 at index
 * @n: number
 * @index: index
 * Return: 1 if worked or 0 if error happened
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (1);
}
