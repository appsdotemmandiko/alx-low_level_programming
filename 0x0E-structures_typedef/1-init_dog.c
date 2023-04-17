#include "dog.h"

/**
 * init_dog - initialize dog struct
 *
 * @d: input pointer to struct dog
 * @name: input param for dog name
 * @age: input param for dog age
 * @owner: input param for dog owner
 *
 * Return: nothing
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
