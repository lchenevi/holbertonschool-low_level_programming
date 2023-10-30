#include "main.h"

/**
 *_puts_recursion - prints a string with newline
 * @s: checked
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')/*Base case: end of the string*/
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);/*Print the current character*/
	_puts_recursion(s + 1);/*Recursively call function for next char*/
}
