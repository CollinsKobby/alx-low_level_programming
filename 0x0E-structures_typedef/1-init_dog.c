#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes dog
 * @d: pointer to dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
