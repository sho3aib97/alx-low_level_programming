#include "main.h"

/**
 * main - a function that returns the num of arguments
 *
 * @argc: num of argumnets
 * @argv: array of strings to the arugments
 *
 * Return: always success (0)
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
