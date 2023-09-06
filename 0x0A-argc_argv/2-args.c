#include "main.h"

/**
 * main - print all arguments
 *
 * @argc: number of arguments
 * @argv: array of strings
 *
 * Return: always success (0)
*/

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
