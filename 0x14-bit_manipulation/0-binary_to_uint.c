#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to string 0 or 1 chars
 * Return: converted num or 0 if b is NULL or there's
 * more chars in b string not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int wow = 0;

	if (!b)
	{
		return (0);
	}
	for (x = 0 ; b[x] != '\0' ; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
	}
	for (x = 0 ; b[x] != '\0' ; x++)
	{
		wow <<= 1;
		if (b[x] == '1')
		{
			wow += 1;
		}
	}
	return (wow);
}
