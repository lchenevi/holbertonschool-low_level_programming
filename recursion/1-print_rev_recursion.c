#include "main.h"

/**
 *_print_rev_recursion - prints a reversed string with newline
 * @s: checked
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')/*Base case: end of the string*/
	{
		return;
	}
	_print_rev_recursion(s + 1);/*Recursively call function for next char*/
	_putchar(*s);/*Print the current character*/
}
