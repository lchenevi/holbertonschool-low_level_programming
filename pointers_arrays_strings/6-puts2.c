#include "main.h"

/**
 *puts2 - displays a string reversed
 *@str: checked
 */
void puts2(char *str)
{
	int len = 0;
	int i;

	/*Find the length of the string*/
	while (str[len] != '\0')
		len++;
	/*To take a number on two starting with 0*/
	for (i = 0; i < len; i = i + 2)
		_putchar(*(str + i));
	_putchar('\n');
}
