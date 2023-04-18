#include "dog.h"
/**
 * free_dog - This function free the struct dog
 * @d: The dog
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
