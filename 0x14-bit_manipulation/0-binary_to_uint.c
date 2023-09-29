#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string of 0 or 1 chars
 * Return: the converted number or 0 if b is NULL or 1 if non binary char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int love = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0 ; b[i] != '\0' ; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		love = love * 2 + (b[i] - '0');
	}
	return (love);
}
