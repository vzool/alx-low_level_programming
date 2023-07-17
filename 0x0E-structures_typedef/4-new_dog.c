#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	if (name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = name;
	dog->age = age;

	if (owner == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = owner;

	return (dog);
}
