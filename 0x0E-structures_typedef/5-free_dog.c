#include "dog.h"
#include <stdlib.h>


/**
 * free_dog - free memory of the doggo
 *
 * @d: pointer of memory doggo to be free
 **/

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
