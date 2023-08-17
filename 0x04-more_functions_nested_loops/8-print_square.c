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
	int i, v;

	i = size;
	v = size;

	if (size <= 0)
		_putchar('\n');
	else
	{
		while (i--)
		{
			while (v--)
			{	
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
