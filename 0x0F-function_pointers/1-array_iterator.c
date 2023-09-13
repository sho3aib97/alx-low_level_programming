#include "function_pointers.h"

/**
 * array_iterator - perform several processes on array elements
 *
 * @array: array of integers
 * @size: size of the array
 * @action: function pointer to do specific task
 *
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
