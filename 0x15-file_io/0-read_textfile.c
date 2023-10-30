#include "main.h"

/**
 * read_textfile - reads a string from a file
 * @filename: name of the file
 * @letters: amount of bytes
 * Return: bytes to be read
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fil;
	ssize_t size;
	char rd[1024 * 8];

	if (!filename || !letters)
		return (0);
	fil = open(filename, O_RDONLY);

	if (fil == -1)
		return (0);
	size = read(fil, &rd[0], letters);
	size = write(STDOUT_FILENO, &rd[0], size);
	close(fil);
	return (size);
}
