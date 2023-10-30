#include "main.h"

/**
 *_strcat - displays a string reversed
 *@dest: checked
 *@src: checked
 *Return: concatenate line
 */
char *_strcat(char *dest, char *src)
{
	char *dest_l = dest;

	while (*dest_l != '\0')/*Find the null terminator of dest*/
		dest_l++;
	while (*src != '\0')/*Copy the characters from src to dest*/
	{
		*dest_l = *src;
		dest_l++;
		src++;
	}
	*dest_l = '\0';/*Add a new null terminator to dest*/
	return (dest);
}
