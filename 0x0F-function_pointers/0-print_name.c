#include "function_pointers.h"

/**
 * print_name - function to print a string
 *
 * @name: array of chars
 * @f: pointer to specific function
 *
 * Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
