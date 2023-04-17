#include "dog.h"
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

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
