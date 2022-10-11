#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialises the structure called dog
 * @d: pointer to the structure
 * @name: pointer to the name member of the structure
 * @age: pointer to the age member of the structure
 * @owner: pointer to the owner member of the structure
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
