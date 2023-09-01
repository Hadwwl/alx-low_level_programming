#include <stdio.h>

/**
 * main - entry point
 * @argv: array containing command line argument
 * @argc: number of command line arguments
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
