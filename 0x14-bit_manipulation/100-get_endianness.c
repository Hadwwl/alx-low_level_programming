#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 for big endian or 1 for small endian
 */
int get_endianness(void)
{
	int t = 1;
	char *bu;

	bu = (char *)&t;

	return (*bu);
}
