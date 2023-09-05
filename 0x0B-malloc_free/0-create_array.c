#include "main.h"

/**
 * create_array - creates an array with specific size and characters
 *
 * @size: the size of the array
 *
 * @c: the intialization of characters within the array
 *
 * Return: the character value of arr_size
*/

char *create_array(unsigned int size, char c)
{
	char *arr_size;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	arr_size = (char *)malloc(sizeof(char) * size);

	if (arr_size == NULL)
		return (NULL);

	while (i < size)
	{
		arr_size[i] = c;
		i++;
	}

	return (arr_size);
}
