#include "main.h"

/**
 * _strlen - calculate length of string
 * @str: string to be calculated
 * Return: integer value
*/

int _strlen(char *str)
{
	int n = 0;

	if (!str)
		return (0);
	while (*str++)
		n++;
	return (n);
}

/**
 * append_text_to_file - appends text to a file
 * @filename: file to be created
 * @text_content: new text to be added
 * Return: integer value
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fil;
	ssize_t size = 0, length = _strlen(text_content);

	if (!filename)
		return (-1);
	fil = open(filename, O_WRONLY | O_APPEND);
	if (fil == -1)
		return (-1);
	if (length)
		size = write(fil, text_content, length);
	close(fil);
	return (size == length ? 1 : -1);
}
