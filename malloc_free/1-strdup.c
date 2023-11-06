#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - copies an array
 * @str: checked
 * Return: Returns the copy
 */

 char *_strdup(char *str)
 {
	char *duplicate;

	if (str == NULL)
		return (NULL);

	duplicate = malloc(sizeof(char) * sizeof(str) + 1);
	if (duplicate == NULL)
		return (NULL);
	strcpy(duplicate, str);
	return (duplicate);
 }
