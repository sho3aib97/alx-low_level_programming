#include "main.h"

/**
 * main - adds positive numbers
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: the result of addition
*/

int main(int argc, char *argv[])
{
	int n, m, result;
	int *arr;

	if (argc == 1)
		printf("0\n");

	arr = malloc(sizeof(int) * (argc - 1));

	for (n = 1, m = 0; argv[0] != '\0'; n++, m++)
		arr[m] = atoi(argv[n]);

	for (n = 0; n < (argc - 1); n++)
	{
		if (isdigit(arr[n]) == 0)
		{
			printf("Error\n");
			free(arr);
			return (1);
		}
	}

	for (m = 0, result = 0; m < (argc - 1); m++)
		result += arr[m];
	return (result);
}
