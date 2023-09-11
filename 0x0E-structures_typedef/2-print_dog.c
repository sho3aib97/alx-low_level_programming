#include "dog.h"

/**
 * print_dog - print struct dog
 *
 * @d: pointer to dog
 *
 * Return: void
*/

void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: (nil)");
	printf("%s\n", d->name);

	printf("%f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)");
	printf("%s\n", d->owner);
}
