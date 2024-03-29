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
	printf("Name: %s\n", ((d->name == NULL) ?
		"(nil)" : d->name));
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", ((d->owner == NULL) ?
		"(nil)" : d->owner));
}
