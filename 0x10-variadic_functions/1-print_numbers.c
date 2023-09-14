#include "variadic_functions.h"

/**
 * print_numbers - print arguments numbers
 *
 * @separator: separator betweeen numbers
 * @n: number of variable arguments
 * @...: integers arguments
 *
 * Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int m = n;
	va_list arg;

	if (!n)
	{
		_putchar('\n');
		return;
	}

	va_start(arg, n);
	while (m--)
		printf("%d%s", va_arg(arg, int),
				m ? (separator ? separator : "") : "\n");

	va_end(arg);

}
