#include "main.h"

/**
 *_strncat - copies the string
 *@dest: string destination
 *@src: string source
 *@n: checked
 * Return: sting destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *dest_l = dest;

	i =  0;

	while (*dest_l != '\0')/*Find the null terminator of dest*/
		dest_l++;
	while (*src != '\0' && i < n)/*Append at most n characters from src to dest*/
	{
		*dest_l = *src;
		dest_l++;
		src++;
		i++;
	}
	*dest_l = '\0';/*Add a new null terminator to dest*/
	return (dest);
}
