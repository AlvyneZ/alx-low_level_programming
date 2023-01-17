#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Clears the heap memory used to store a dog
 * @d: Pointer to dog structure to be cleared from heap
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);
}
