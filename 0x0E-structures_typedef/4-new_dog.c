#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creats new  dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: a pointer with the new structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int i, new_name, new_owner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL || !name || !owner)
	{
		free(new_dog);
		return (NULL);
	}
	for (new_name = 0 ; name[new_name] != '\0'; new_name++)
		;
	for (new_owner = 0 ; owner[new_owner] != '\0'; new_owner++)
		;

	new_dog->name = malloc(new_name + 1);
	new_dog->owner = malloc(new_owner + 1);

	if (!new_dog->name || !new_dog->owner)
	{
		free(new_dog->owner);
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	for (i = 0 ; i < new_name ; i++)
		new_dog->name[i] = name[i];

	new_dog->name[i] = '\0';
	new_dog->age = age;

	for (i = 0 ; i < new_owner ; i++)
		new_dog->owner[i] = owner[i];
	new_dog->owner[i] = '\0';
	return (new_dog);
}
