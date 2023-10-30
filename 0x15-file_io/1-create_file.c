#include "main.h"

/**
 * _strlen - get length of string
 * @str: string to be calculated
 * Return: integer value
*/

int _strlen(char *str)
{
	int n =  0;

	if (!str)
		return (0);
	while (*str++)
		n++;
	return (n);
}

/**
 * create_file - create a new file
 * @filename: name of new file
 * @text_content: content of file
 * Return: integer value
*/

int create_file(const char *filename, char *text_content)
{
	int fil;
	ssize_t size = 0, length = _strlen(text_content);

	if (!filename)
		return (-1);
	fil = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fil == -1)
		return (-1);
	if (length)
		size = write(fil, text_content, length);
	close(fil);
	return (size == length ? 1 : -1);
}
