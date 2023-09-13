#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: array of integers
 * @size: size of array
 * @cmp: pointer function
 *
 * Return: element of array that matches or -1 if fails
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, index;

	if (size <= 0)
		index = -1;
	else
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) > 0)
			{
				index = i;
				break;
			}
			else
			{
				if (i == (size - 1))
					index = -1;
				else
					continue;
			}
		}
	}

	return (index);
}
