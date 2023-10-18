#include "main.h"

/**
 * print_alphabet_x10 - prints ten times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i <= 9 ; i++)
	{
		for (j = 'a'; j <= 'z' ; j++)
		{
			_putchar (j);
		}
		_putchar (10);
	}
}
