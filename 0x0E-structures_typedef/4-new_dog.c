#include "dog.h"

char *_strcpy(char *dest, char *src);
/**
 * _strcpy - copy the string to the dest
 *
 * @dest: the destination copy
 *
 * @src: the source copy
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}

/**
 * new_dog - This function intialize the struct dog
 * @name: The name of dog
 * @age: The age of the dog
 * @owner: The owner of the dogi
 * Return: The new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	_strcpy(dog->name, name);
	dog->age = age;
	_strcpy(dog->owner, owner);
i
	return (dog);
}
