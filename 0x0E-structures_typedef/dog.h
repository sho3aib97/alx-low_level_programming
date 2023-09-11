#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog struct
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: a collection of dogs name, age and owner
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;

#endif
