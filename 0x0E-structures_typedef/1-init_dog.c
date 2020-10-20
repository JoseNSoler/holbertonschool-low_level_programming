#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initialize doggo structure
 * @d: doggo strcture
 * @name: name of doggo
 * @age: age of doggo
 * @owner: owner of doggo
 *
 * Return: void function
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
