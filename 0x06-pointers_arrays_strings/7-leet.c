#include "main.h"

/**
 * leet - encodes string using leet encode
 * @s: string to be coded
 * Return: encoded string
 */
char *leet(char *s)
{
	int i, j;
	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0 ; j < 10 ; j++)
	{
		if (s[i] == a[j])
			s[i] = b[j];
	}
	return (s);
}
