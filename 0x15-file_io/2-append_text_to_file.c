#include "holberton.h"


/**
 * append_text_to_file - appends text in a file
 * @filename: A pointer to the name of the file
 * @text_content: String to append in the file
 *
 * Return: 1 --Succes | -1 --on failure
 *
 *
 */



int append_text_to_file(const char *filename, char *text_content)
{
	int openf, writef, len;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		for (len = 0; text_content[len];)
			len++;

	openf = open(filename, O_WRONLY | O_APPEND);
	writef = write(openf, text_content, len);

	if (writef == -1)
		return (-1);

	close(openf);

	return (1);
}
