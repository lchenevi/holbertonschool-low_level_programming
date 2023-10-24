#include "main.h"

/**
 *_puts - displays a string
 *@str: checked
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
			str++;
	}
	_putchar('\n');
}
