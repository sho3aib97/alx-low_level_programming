#include "main.h"

/**
 * factorial - a function to return a factorial of a number
 *
 * @n: integer number
 *
 * Return: the value of factorial of n
*/

int factorial(int n)
{
	unsigned int x;

	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);

	x = x * factorial(n - 1);
	return (x);
}
