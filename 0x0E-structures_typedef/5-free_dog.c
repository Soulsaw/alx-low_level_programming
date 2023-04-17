#include "dog.h"
/**
 * free_dog - This function free the struct dog
 * @d: The dog
 */
void free_dog(dog_t *d)
{
	if (d->name != NULL)
	{
		free(d->name);
	}
	if (d->owner != NULL)
	{
		free(d->owner);
	}
	if (d != NULL)
	{
		free(d);
	}
}