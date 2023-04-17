#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog with prev name & owner
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 *
 * Return: struct pointer dog
 *         NULL if function fails
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog;
	int lenName = 0, lenOwn = 0, i = 0;

	while (name[lenName] != '\0')
		lenName++;
	while (owner[lenOwn] != '\0')
		lenOwn++;
	new_dog = malloc(sizeof(struct dog));

	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	lenName = lenName + 1;

	new_dog->name = malloc(lenName);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}

	lenOwn = lenOwn + 1;

	new_dog->owner = malloc(lenOwn);
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		free(new_dog->owner);
		return (NULL);
	}

	for ( ; i <= lenName; i++)
		new_dog->name[i] = name[i];
	for ( ; i <= lenOwn; i++)
		new_dog->owner[i] = owner[i];

	new_dog->age = age;

	return (new_dog);
}
