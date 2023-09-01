#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 * @argc: number of command line arguments
 * @argv: arry containing command line arguments
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (int i = 1 ; i < argc ; i++)
	{
		int num = 0;
		int j = 0;

		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		num = atoi(argv[i]);
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
