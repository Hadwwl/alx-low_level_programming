#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads text file and prints it to POSIX standard output
 * @filename: name of the file
 * @letters: letter of name of the file
 * Return: actual number of letters or 0 if file cann't be open
 * or filename is NULL or write function fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_desc;
	ssize_t readlov;
	ssize_t writelov;
	char *lovbuff;

	file_desc = open(filename, O_RDONLY);

	if (file_desc == -1)
	{
		return (0);
	}
	lovbuff = malloc(sizeof(char) * letters);
	readlov = read(file_desc, lovbuff, letters);
	writelov = write(STDOUT_FILENO, lovbuff, readlov);

	free(lovbuff);
	close(file_desc);
	return (writelov);
}
