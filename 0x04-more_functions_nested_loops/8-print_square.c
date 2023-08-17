#include "main.h"

/**
 * print_square - print a square from #
 *
 * @size: size of the square (input)
 *
 * Return: Always 0 (success)
*/

void print_square(int size)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		i = size;

		while (i--)
		{
			while (size--)
				_putchar('#');
			_putchar('\n');
		}
	}
}
