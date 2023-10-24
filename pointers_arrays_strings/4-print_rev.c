#include "main.h"

/**
 *print_rev - displays a string reversed
 *@s: checked
 */
void print_rev(char *s)
{
	int x = 0;
	int y;

	while (s[x] != '\0')
		x++;

	for (y = x - 1; y >= 0; y--)
		_putchar(s[y]);
	_putchar('\n');
}
