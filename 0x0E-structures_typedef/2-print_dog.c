#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints the details of a dog
 * @d: Pointer to dog structure to be displayed
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s", ((d->name == NULL) ?
		"(nil)" : d->name));
	printf("Age: %f", d->age);
	printf("Owner: %s", ((d->owner == NULL) ?
		"(nil)" : d->owner));
}
