#include "main.h"
/**
 * bow - calculates b ^ p
 * @b: base
 * @p: power
 * Return: value of b ^ p
 */
unsigned long int bow(unsigned int b, unsigned int p)
{
	unsigned int x;
	unsigned long int love = 1;

	for (x = 1 ; x <= p ; x++)
	{
		love *= b;
	}
	return (love);
}

/**
 * print_binary - prints binary representation of num
 * @n: number to be presented
 */
void print_binary(unsigned long int n)
{
	unsigned long int wow, tow;
	char meow = 0;

	wow = bow(2, sizeof(unsigned long int) * 8 - 1);

	while (wow != 0)
	{
		tow = n & wow;

		if (tow == wow)
		{
			meow = 1;
			_putchar('1');
		}
		else if (meow == 1 || wow == 1)
		{
			_putchar('0');
		}
		wow >>= 1;
	}
}
