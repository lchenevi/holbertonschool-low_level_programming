#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - creates array of chars
 * @nmemb: checked
 * @size: checked
 * Return: Returns a pointer to the array, or NULL if it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size, *m_alouer, index;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	total_size = nmemb * size;
	m_alouer = malloc(total_size);
	if (m_alouer == NULL)
		return (NULL);

	for (index = 0; index < total_size; index++)
		m_alouer[index] = 0;

	return (m_alouer);
}
