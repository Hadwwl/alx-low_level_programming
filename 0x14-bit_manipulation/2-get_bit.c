#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: bit index
 * Return: value of the bit at index or -1 if error happened
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int love;

	if (index > 63)
		return (-1);

	love = (n >> index) & 1;

	return(love);
}
