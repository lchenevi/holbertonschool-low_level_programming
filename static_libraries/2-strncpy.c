#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strncpy - copie un string
 * @dest: pointeur, ou la copie est faite
 * @src: pointeur source constant
 * @n: variable de fin de chaine
 * Return: copie the string pointed
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	/*parcours jusqu'au char nul ou au char n */
	while (src[i] != '\0' && i < n)
	{
	/*marque la fin du string*/
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
