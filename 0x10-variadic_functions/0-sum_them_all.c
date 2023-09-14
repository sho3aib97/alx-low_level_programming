#include "variadic_functions.h"

/**
 * sum_them_all - return the value of sum of all arguments
 *
 * @n: required argument
 * @...: variable arguments
 *
 * Return: value of sum
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list arg;

	if (!n)
		return (0);

	va_start(arg, n);
	for (i = 0; i < n; i++)
		sum += va_arg(arg, int);

	va_end(arg);
	return (sum);
}
