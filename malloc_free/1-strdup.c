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
	unsigned int length, index;

	/*Check if str is NULL*/
	if (str == NULL)
		return (NULL);

	/*Calculate the length of the input string*/
	length = 0;
	while (str[length] != '\0')
		length++;

	/*Allocate memory for the duplicate string*/
	duplicate = malloc(length + 1);

	/*Check if memory allocation failed*/
	if (duplicate == NULL)
		return (NULL);

	/*Manually copy the characters from str to duplicate*/
	for (index = 0; index < length; index++)
		duplicate[index] = str[index];

	return (duplicate);
}
