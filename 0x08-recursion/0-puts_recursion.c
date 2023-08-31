#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string
 * Return: 0 success
 * @s: input
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("\n");
		return;
	}
	printf("%c", *s);
	_puts_recursion(s + 1);
}
