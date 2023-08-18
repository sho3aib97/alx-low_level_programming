#include "main.h"

/**
 *main - prints numbers and fizz and buzz and fizzbzzz in some cases
 *
 *Return: Always 0 (success)
*/

int main(void)
{
	int n;

	for (n = 1; n <= 100; i++)
	{
		if (n % 3 == 0 && !(n % 5 == 0))
			printf("Fizz");
		else if (n % 5 == 0 && !(n % 3 == 0))
			printf("Buzz");
		else if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", n);

		if (n != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
