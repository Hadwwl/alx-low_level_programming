#include "main.h"

/**
 * get_bit - return value of bit at given index
 * @n: number
 * @index: index
 * Return: value of the bit at index or -1 if there's error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int wow, love;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	wow = 1 << index;
	love = n & wow;
	if (love == wow)
	{
		return (1);
	}
	return (0);
}
