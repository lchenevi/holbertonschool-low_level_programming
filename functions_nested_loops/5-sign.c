#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: input number
 *
 * Return: 1 if n positif, 0 if zero, -1 if negatf
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
