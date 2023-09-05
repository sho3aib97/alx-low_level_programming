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

	array = malloc(height * sizeof(*array));

	if (width <= 0 || height <= 0 || array == 0)
		return (NULL);
	for (h = 0; h < height; h++)
	{
		array[h] = malloc(width * sizeof(**array));
		if (array[h] == 0)
		{
			while (h--)
				free(array[h]);
			free(array);
			return (NULL);
		}
		for (w = 0; w < width; w++)
			array[h][w] = 0;
	}
	return (array);
}
