#include "main.h"

/**
 *swap_int - swap the value of two integers
 *@a: checked
 *@b: checked
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
