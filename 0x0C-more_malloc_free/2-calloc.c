#include "main.h"

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

	array = malloc(size * nmemb);

	if (array == NULL)
		return (NULL);

	return (array);
}
