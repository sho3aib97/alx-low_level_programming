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
	int i;
	int *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = 0;

	while (i--)
	{
		if (arr[i] != 0)
		free(arr);
	}
	return (arr);
}
