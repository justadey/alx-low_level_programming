#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Prints a struct dog.
 * @d: The struct dog to be printed.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		prinf("Name: (nil)\n");
	else
		prinf("Name: %s\n", d->name);

	if (d->age < 0)
		prinf("Age: (nil)\n");
	else
		prinf("Age: %f\n", d->age);
	if (d->owner == NULL)
		prinf("Owner: (nil)\n");
	else
		prinf("Owner: %s\n", d->owner);
}
