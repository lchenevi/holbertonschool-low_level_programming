#include "main.h"

/**
 *reset_to_98 - reset value of n
 * @n: checked
 */
void reset_to_98(int *n)
{
	int *p = *&n;

	*p = 98;
}
