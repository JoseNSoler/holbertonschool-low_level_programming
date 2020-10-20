#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new doggo
 * @name: Name of new doggo
 * @age: Age of new doggo
 * @owner: Owner of this new doggo
 *
 * Return: pointer to new doggo
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;
	unsigned int len1 = 0, len2 = 0, x, y;

	while (name[len1])
		len1++;
	while (owner[len2])
		len2++;
	doggo = malloc(sizeof(dog_t));

	if (doggo == NULL)
		return (NULL);

	doggo->name = malloc(sizeof(char) * (len1 + 1));
	if (doggo->name == NULL)
	{
		free(doggo);
		return (NULL);
	}
	for (x = 0; x <= len1; x++)
		doggo->name[x] = name[x];
	doggo->age = age;

	doggo->owner = malloc(sizeof(char) * (len2 + 1));
	if (doggo->owner == NULL)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}
	for (y = 0; y <= len2; y++)
		doggo->owner[y] = owner[y];

	return (doggo);
}
