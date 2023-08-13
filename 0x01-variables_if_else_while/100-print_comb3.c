#include <stdio.h>


/**
 * main - prints all possible different combinations of two digits
 * Return: always (0)
 */

int main(void)
{
	int o;
	int t;

	for (t = 0 ; t <= 9 ; t++)
	{
		for (o = t + 1 ; o <= 9 ; o++)
		{
			putchar(t + '0');
			putchar(o + '0');

			if (t < 8 || o < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
