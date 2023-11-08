#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - copies an array
 * @s1: checked
 * @s2: checked
 * Return: Returns the copy
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int string1, string2, i, j;

	string1 = 0;
	string2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[string1] != '\0')
		string1++;
	while (s2[string2] != '\0')
		string2++;

	concat = malloc(string1 + string2 + 1);
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < string1; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; j < string2; j++)
	{
		concat[i + j] = s2[j];
	}

	concat[i + j] = '\0';
	return (concat);
}
