#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * reverse_array - reverser array
 * @a: pointeur de st
 * @n: variable
 * Return: reverse array
 */

void reverse_array(int *a, int n)
{
	int *beg = a;
	int *end = a + n - 1;

	while (beg < end)
	{
	/*swap st et end*/
		int temp = *beg;

		*beg = *end;
		*end = temp;
		beg++;
		end--;
	}
}
