#include "dog.h"
/**
 * print_dog - This function print the info about dog
 * @d: The dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
	{
		printf("nil\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
	{
		printf("nil\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}