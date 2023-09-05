#include "main.h"

/**
 * alloc_grid - return a pointer to 2d array
 *
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: pointer of value of type int
*/

int **alloc_grid(int width, int height)
{
	int w, h;
	int **array;

	array = (int *)malloc(width * height * sizeof(int));

	if (width <= 0 || height <= 0 || array == 0)
		return (NULL);

	for (h = 1; h <= height; h++)
	{
		for (w = 1; w <= width; w++)
			_putchar('0');
		_putchar('\n');
	}
	return (array);
}
