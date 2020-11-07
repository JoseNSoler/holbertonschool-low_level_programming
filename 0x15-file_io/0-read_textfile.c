#include "holberton.h"


/**
 * read_textfile - Reads a text file and print out
 * @filename: A pointer to the name of the file
 * @letters: The number of characters that function will read
 *
 * Return: 0 - functions fails or filename is NULL
 * writef - number of bytes used in the execution
 *
 */



ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t openf, readf, writef;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	openf = open(filename, O_RDONLY);
	readf = read(openf, buffer, letters);
	writef = write(STDOUT_FILENO, buffer, readf);

	if (writef == -1)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(openf);


	return (writef);
}
