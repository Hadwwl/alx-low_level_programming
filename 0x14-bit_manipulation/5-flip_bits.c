#include "main.h"

/**
 * flip_bits - returns the number of bits
 * needed to filp to get from one number to another
 * @n: number 1
 * @m: number 2
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int t, countcats = 0;
	unsigned long int currentcat;
	unsigned long int excat = n ^ m;

	for (t = 63 ; t >= 0 ; t--)
	{
		currentcat = excat >> t;
		if (currentcat & 1)
		{
			countcats++;
		}
	}
	return (countcats);
}
