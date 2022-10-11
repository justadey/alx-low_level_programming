#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog -pPrints a struct dog.
 * @d: pointer to struct.
 *
 * Return: void.
 */

void print_dog(struct dog *d)
{
	if (d == 0)
	{
		return;
	}
	else
	{
		if (d->name == NULL)
			prinf("Name: (nil)\n");
		else
			prinf("Name: %s\n", d->name);

		prinf("Age: %f\n", d->age);

		if (d->owner == NULL)
			prinf("Owner: (nil)\n");
		else
			prinf("Owner: %s\n", d->owner);
	}
}
