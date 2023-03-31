#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: pointer to a char for name of dog
 * @age: age of dog
 * @owner: pointer to a char for owner of dog
 *
 * Return: pointer to a new dog of type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int nameLen = 0, ownerLen = 0, i = 0;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	while (name[nameLen++] || owner[ownerLen++])
		;
	new_dog->name = malloc(sizeof(new_dog->name) * nameLen);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (; i <= nameLen; i++)
		new_dog->name[i] = name[i];
	new_dog->age = age;
	new_dog->owner = malloc(sizeof(new_dog->owner) * ownerLen);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (; i <= ownerLen; i++)
		new_dog->owner[i] = owner[i];
	return (new_dog);
}
