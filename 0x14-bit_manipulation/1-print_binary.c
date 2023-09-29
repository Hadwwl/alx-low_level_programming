#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * n: number to be presented in binary
 * Return: voide
 */
void print_binary(unsigned long int n)
{
	int love, i = 0;
	unsigned long int currentlove;

	for (i = 63 ; i >= 0 ; i--)
	{
		currentlove = n >> i;

		if (currentlove & 1)
		{
			_putchar('1');
			love++;
		}
		else if (love)
			_putchar('0');
	}
	if (!love)
		_putchar('0');
}
