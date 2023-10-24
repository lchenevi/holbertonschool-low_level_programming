#include "main.h"

/**
 *rev_string - displays a string reversed
 *@s: checked
 */
void rev_string(char *s)
{
	int len = 0;
	int i;
	int j;

    /*Find the length of the string*/
	while (s[len] != '\0')
		len++;

    /*Reverse the string in-place*/
	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		char temp = s[i];

		s[i] = s[j];
		s[j] = temp;
	}
}
