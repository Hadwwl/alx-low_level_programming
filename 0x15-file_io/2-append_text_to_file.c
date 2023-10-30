#include "main.h"

/**
 * append_text_to_file - appends text (string) at end of file
 * @filename: file's name
 * @text_content: string to add at end of file
 * Return: 1 if succeed or -1 if failed(filename is NULL)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int openlov, writelov, length = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (length = 0 ; text_content[length];)
			length++;
	}
	openlov = open(filename, O_WRONLY | O_APPEND);
	writelov = write(openlov, text_content, length);

	if (openlov == -1 || writelov == -1)
		return (-1);

	close(openlov);
	return (1);
}
