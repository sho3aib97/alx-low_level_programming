#include "main.h"

/**
 * main - a function that return its name
 *
 * @argc: number arguments taken on terminal
 * @argv: array of strings of the arguments
 *
 * Return: always sucess (0)
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; argv[0][i] != '\0'; i++)
		printf("%s", argv[0][i]);
	_putchar('\n');

	return (0);
}
