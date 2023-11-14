#include "dog.h"
#include <stddef.h>

/**
 * print_dog - initializes a variable of type struct dog
 * @d: pointer to the struct dog variable
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %.1f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}

}
