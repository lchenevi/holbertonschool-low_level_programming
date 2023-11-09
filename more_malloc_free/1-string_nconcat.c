#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - creates array of chars
 * @s1: checked
 * @s2: checked
 * @n: checked
 * Return: Returns a pointer to the array, or NULL if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	unsigned int i, len1 =0, len2 = 0, s1s2 = 0;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n < len2)
		len2 = n;

	s1s2 = len1 + len2 + 1;
	new = malloc(s1s2);
	if (new == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		new[i] = s1[i];
	for (; i < s1s2 - 1; i++)
		new[i] = s2[i - len1];

	new[s1s2 - 1] = 0;
	return (new);
}
