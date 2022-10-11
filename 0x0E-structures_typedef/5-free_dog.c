#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - frees the memory allocated to dog
 * @d: pointer to dog
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
