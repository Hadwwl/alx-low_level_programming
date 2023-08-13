#include <stdio.h>


/**
 * main - prints all possible different combinations of two digits
 * Return: always (0)
 */

int main(void)
{
	int o = '0';
	int t = '0';

	for (o = 0 ; o <= 9 ; o++)
	{
		for (t = 0 ; t <= 9 ; t++)
		{
			if ((!(o == t) && (t > o)))
			{
				putchar(o + '0');
				putchar(t + '0');
				if (!(o == 9 && t == 8))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
