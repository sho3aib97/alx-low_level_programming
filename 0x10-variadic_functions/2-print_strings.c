#include "variadic_functions.h"

/**
 * print_strings - print string arguments
 *
 * @separator: separator between arguments
 * @n: number of arguments
 * @...: variable arguments
 *
 * Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	int m = n;
	char *string;
	va_list arg;

	if (!n)
	{
		_putchar('\n');
		return;
	}

	va_start(arg, n);
	while (m--)
		printf("%s%s", (string = va_arg(arg, char *)) ? string : "(nil)",
				m ? (separator ? separator : "") : "\n");

	va_end(arg);
}
