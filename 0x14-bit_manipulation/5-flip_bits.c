#include "main.h"

/**
 * flip_bits - returns the number of bits to flip
 * @n: the first number
 * @m: the seconed number
 * Return: number of bits changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, love = 0;
	unsigned long int currentlove;
	unsigned long int exlove = n ^ m;

	for (i = 62 ; i >= 0 ; i--)
	{
		currentlove = exlove >> i;
		if (currentlove & 1)
			love++;
	}
	return (love);
}
