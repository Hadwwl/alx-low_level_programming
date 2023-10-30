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
	if (text_content != NULL)
	{
		for (length = 0 ; text_content[length];)
			length++;
	}
	file_desc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	writelov = write(file_desc, text_content, length);

	if (text_content == NULL)
		text_content = " ";

	if (file_desc == -1 || writelov == -1)
		return (-1);

	close(file_desc);
	return (1);
}
