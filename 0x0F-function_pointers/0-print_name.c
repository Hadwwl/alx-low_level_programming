#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: name of print
 * @f: function parameter
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
