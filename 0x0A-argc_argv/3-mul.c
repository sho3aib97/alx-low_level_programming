#include "main.h"

/**
 * main - multiplies to arguments
 *
 *@argc: num of arguments
 *@argv: array of strings
 *
 * Return: success (0)
*/

int main(int argc, char *argv[])
{
	int result;

	if (argc == 3)
	{
		result = (int)argv[1] * (int)argv[2];
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
