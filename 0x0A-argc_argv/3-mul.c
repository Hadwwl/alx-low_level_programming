#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of command line arguments
 * @argv: array containing command line arguments
 * Return: 0 success or 1 error
 */

int main(int argc, char *argv[])
{
	int i, j, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	result = i * j;
	printf("%d\n", result);
	return (0);
}
