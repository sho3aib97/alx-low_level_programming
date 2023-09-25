#include "main.h"

/**
 * _memset - assign memory to zero bytes
 * @str: pointer to memory
 * @zero: zero bytes
 * @i: size of memory
 * Return: pointer to first element
*/

char *_memset(char *str, char zero, unsigned int i)
{
	char *pointer = str;

	while (i--)
		*str++ = zero;

	return (pointer);
}

/**
 * _calloc - allocate memory to an array and set it to 0
 *
 * @nmemb: number of the elements within the array
 * @size: size of each element
 *
 * Return: pointer to the array, NULL if fails
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(sizeof(int) * nmemb);

	if (array == NULL)
		return (NULL);
	_memset(array, 0, sizeof(int) * nmemb);
	return (array);
}
