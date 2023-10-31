#include "main.h"

/**
 *factorial - factorial numbers
 * @n: checked
 *Return: the factorial value of 'n'
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	/*If y is negative, return -1 as specified*/
	{
		return (-1);
	}
	if (y == 0)
	/*Base case: x^0 is always 1*/
	{
		return (1);
	}
	if (y == 1)
	/*Base case: x^1 is always x*/
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));
	/*Recursively calculate x^(y-1) and multiply it by x to get x^y*/
}
