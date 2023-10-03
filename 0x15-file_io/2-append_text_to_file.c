#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: points to name of the file
 * @text_content: points to terminated string to add at the end of the file
 * Return: 1 on success & -1 on failure or no file or content
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int openlove, writelove, length = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (length = 0 ; text_content[length];)
			length++;
	}

	openlove = open(filename, O_WRONLY | O_APPEND);
	writelove = write(openlove, text_content, length);

	if (openlove == -1 || writelove == -1)
	{
		return (-1);
	}

	close(openlove);

	return (1);
}
