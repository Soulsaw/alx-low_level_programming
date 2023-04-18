#include "dog.h"
#include <string.h>
/**
 * _strlen - this function return the length of a string
 *
 * @s: Is the string value
 *
 * Return: The length
 */
int _strlen(char *s)
{
	int cpt;
	int i;

	cpt = 0;
	i = 0;

	while (s[cpt] != '\0')
	{
		cpt++;
		i++;
	}

	return (cpt);

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
	dog->name = (char *) malloc(_strlen(name) + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	strcpy(dog->name, name);

	dog->owner = (char *) malloc(_strlen(owner) + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	strcpy(dog->owner, owner);

	dog->age = age;

	return (dog);
}
