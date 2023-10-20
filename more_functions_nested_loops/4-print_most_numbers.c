#include "main.h"
#include <stdio.h>
/**
 *print_most_numbers - print numbers
 * Return: always 0
 */
void print_most_numbers(void)
{
	int x = '0';

	for (x = '0'; x <= '9'; x++)
	{
		if (x != '2' && x != '4')
			_putchar(x);
	}
	_putchar('\n');
}
