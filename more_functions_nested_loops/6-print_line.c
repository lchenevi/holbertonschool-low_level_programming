#include "main.h"
#include <stdio.h>
/**
 *print_line - checks for uppercase characters
 *@n: character checked
 * Return: always 0
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
