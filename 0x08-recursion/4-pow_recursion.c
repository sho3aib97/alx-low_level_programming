#include "main.h"

/**
 * _pow_recursion - a function returns x to the power of y
 *
 * @x: base integer
 * @y: power integer
 *
 * Return: the value of result
*/

int _pow_recursion(int x, int y)
{
	int result;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	result = x * _pow_recursion(x, (y - 1));
	return (result);
}
