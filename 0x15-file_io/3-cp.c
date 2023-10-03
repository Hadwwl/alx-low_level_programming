#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_file - creates 1024 bytes for buffer
 * @file: name of file tgat stores buffer chars
 * Return: pointer points to new buffer
 */
char *create_buffer(char *file)
{
	char *lovebuffer;

	lovebuffer = malloc(sizeof(char) * 1024);

	if (lovebuffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (lovebuffer);
}

/**
 * close_file - close fd
 * @fd: file discriptor to be closed
 */
void close_file(int fd)
{
	int closelove;

	closelove = close(fd);

	if (closelove == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - function to copy file content to other file
 * @argv: arrays of pointers to arguments
 * @argc: number of arguments
 * @Return: 0 success
 * 97 if arguments incorrect
 * 99 if filefrom not exist or cann't read
 * 100 if cannot close fd
 */
int main(int argc, char *argv[])
{
	int fromlove, tolove, readlove, writelove;
	char *lovebuffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,
			"Usage: cp file_from file_to\n");
			exit(97);
	}

	lovebuffer = create_buffer(argv[2]);
	fromlove = open(argv[1], O_RDONLY);
	readlove = read(fromlove, lovebuffer, 1024);
	tolove = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do{
		if (fromlove == -1 || readlove == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(lovebuffer);
			exit(99);
		}

		writelove = write(tolove, lovebuffer, readlove);

		if (tolove == -1 || writelove == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(lovebuffer);
			exit(99);
		}

		readlove = read(fromlove, lovebuffer, 1024);
		tolove = open(argv[2], O_WRONLY | O_APPEND);
	} while (readlove > 0);

	free(lovebuffer);
	close_file(fromlove);
	close_file(tolove);

	return (0);
}
