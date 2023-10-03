#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads text file & prints it to the POSIX standard output
 * @letters: number of letters to read & print
 * @filename: file to be read
 * Return: actual number of letters or 0 if the file can not be opened or read
 * or filename is NULL
 * or write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *love; /* love is buffer */
	ssize_t fd;
	ssize_t readlove;
	ssize_t writelove;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	love = malloc(sizeof(char) * letters);
	readlove = read(fd, love, letters);
	writelove = write(STDOUT_FILENO, love, readlove);

	free(love);
	close(fd);
	return (writelove);
}
