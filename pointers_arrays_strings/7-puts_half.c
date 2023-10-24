#include "main.h"

/**
 *puts_half - displays a string reversed
 *@str: checked
 */
void puts_half(char *str)
{
	int len = 0;
	int index;
	int i;

	/*find the length of the string*/
	while (str[len] != '\0')
		len++;
	if (len % 2 == 0)
		/*string length is even*/
		index = len / 2;
	else
		/*string length is odd*/
		index = (len - 1) / 2;
	/*prints the second half of the string*/
	for (i = index; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
