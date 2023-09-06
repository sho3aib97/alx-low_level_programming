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
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
