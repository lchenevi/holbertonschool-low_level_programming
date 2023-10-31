#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strcmp - compare 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: compare
 */

int _strcmp(char *s1, char *s2)
{
	/*parcours s1 et s2 jusqu'au '\0'*/
	while (*s1 != '\0' && *s2 != '\0')
	{
		/* calcule la diff entre s1 et s2*/
		if (*s1 - *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
