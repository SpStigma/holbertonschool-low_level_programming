#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 * @d: struct to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		if (d->name == NULL)
		{
			printf("NAME: (nil)\n");
		}
		else
		{
			printf("NAME: %s\n", d->name);
		}
		if (d->age < 0)
		{
			printf("AGE: (nil)\n");
		}
		else
		{
			printf("AGE: %f\n", d->age);
		}
		if (d->owner == NULL)
		{
			printf("OWNER: (nil)\n");
		}
		else
		{
			printf("OWNER: %s\n", d->owner);
		}
	}
}
