#include "dog.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_dog - initializes a variable of type struct dog
 * @d: pointer to the struct dog variable
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		/*Free memory for name and owner strings*/
		free(d->name);
		free(d->owner);

		/*Free memory for the dog_t structure*/
		free(d);
	}
}
