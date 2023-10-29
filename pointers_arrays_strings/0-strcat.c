#include "main.h"

/**
 *_strcat - displays a string reversed
 *@dest: checked
 *@src: checked
 */
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')/*Find the null terminator of dest*/
		dest++;
	while (*src != '\0')/*Copy the characters from src to dest, including the null terminator*/
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';/*Add a new null terminator to dest*/
	return (dest);
}
