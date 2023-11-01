#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string
 * @dest: string destination
 * @src: string source
 *
 * Return: sting destination
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_orig = dest; /*Store the original destination address*/

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0'; /*Add the null terminator to the destination string*/
	return (dest_orig);
}
