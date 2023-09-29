#include "main.h"

/**
 * get_endianness - checks the endianness size
 * Return: 0 if big or 0 if little
 */
int get_endianness(void)
{
	unsigned int loveindex = 1;
	char *c = (char *) &loveindex;

	return (*c);
}
