#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - frees the memory allocated to dog
 * @d: pointer to dog
 */
void free_dog(dog_t *d)
{
	if (d->name != NULL)
		free(d->name);
	if (d->age != NULL)
		free(d->age);
	if (d->owner != NULL)
		free(d->owner);
	if (d != NULL)
		free(d);
	Return(NULL);
}
