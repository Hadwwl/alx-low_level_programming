#include "main.h"

/**
 * create_file - makes file
 * @filename: name of file to be created
 * @text_content: string to be written in file
 * Return: 1 if succeed or -1 if failed( filename is NULL,
 * file can not be created, .. etc)
 */

int create_file(const char *filename, char *text_content)
{
	int file_desc, length, writelov = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	file_desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_desc == -1)
		return (-1);
	if (!text_content)
		text_content = " ";
	for (length = 0 ; text_content[length] ; length++)
		writelov = write(file_desc, text_content, length);
	if (writelov == -1)
		return (-1);

	close(file_desc);
	return (1);
}
