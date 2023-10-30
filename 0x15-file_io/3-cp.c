#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *make_buff(char *filename);
void closefile(int fd);

/**
 * make_buff - allocates (1024 bytes) for buffer
 * @filename: name of file which buffer is storing character for
 * Return: points to new allocated buffer
 */
char *make_buff(char *filename)
{
	char *lovbuff;

	lovbuff = malloc(sizeof(char) * 1024);

	if (lovbuff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (lovbuff);
}
/**
 * closefile - closes file
 * @fd: file descriptor
 */
void closefile(int fd)
{
	int a;

	a = close(fd);

	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - copies content from file to other
 * @argv: array of pointers points to arrgument
 * @argc: number of arguments
 * Return: 0 if succeeded
 * if if number of argument not correct exit 97
 * if file_from not exist print 98
 * if cannot be created exit 99
 * if cannot close fd exit 100
 */
int main(int argc, char *argv[])
{
	int fromlov, tolov, rlov, wlov;
	char *lovbuff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	lovbuff = make_buff(argv[2]);
	fromlov = open(argv[1], O_RDONLY);
	rlov = read(fromlov, lovbuff, 1024);
	tolov = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fromlov == -1 || rlov == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(lovbuff);
			exit(98);
		}
		wlov = write(tolov, lovbuff, rlov);
		if (tolov == -1 || wlov == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(lovbuff);
			exit(99);
		}
		rlov = read(fromlov, lovbuff, 1024);
		tolov = open(argv[2], O_WRONLY | O_APPEND);
	} while (rlov > 0);

	free(lovbuff);
	closefile(fromlov);
	closefile(tolov);

	return (0);
}
