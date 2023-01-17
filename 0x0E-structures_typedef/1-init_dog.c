#include "dog.h"
#include <string.h>

/**
 * init_dog - Initializes a dog structure with
 *  details of the dog
 * @d: Pointer to dog structure to be initialized
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	memset(d, 0, sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
