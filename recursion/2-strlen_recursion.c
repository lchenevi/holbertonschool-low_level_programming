#include "main.h"

/**
 *_strlen_recursion - prints a reversed string with newline
 * @s: checked
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')/*Base case: end of the string*/
	{
		return(0);
	}
	return 1 + _strlen_recursion(s + 1);
}
