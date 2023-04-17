#include "dog.h"
/**
 * init_dog - This function intialize the struct dog
 * @d: Is the dog
 * @name: The name of dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
