#include "main.h"

/**
 * main - return the muliplication of two numbers
 *
 * @argc: the number of arguments
 * @argv: arraay of strings to arugments
 *
 * Return: the result of the multiplication
*/

int main(int argc; char *argv[])
{
	int x, y, result;

	x = (int)argv[1];
	y = (int)argv[2];

	if (argc == 3)
	{
		result = x * y;
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
