#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0 if there is an invalid character or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);  /*Return 0 if the input string is NULL*/
	}

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);  /*Return 0 if there is an invalid character in the string*/
		}
		result = result * 2 + (*b - '0');
		b++;
	}
	return (result);
}
