#include <stddef.h>
#include "lists.h"
#include <unistd.h>
#include <string.h>
#include <stdio.h>

/**
* print_list - prints all the elements of a list_t list
* @h: pointer to the head of the linked list
* Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		char len_str[20];

		int len = snprintf(len_str, sizeof(len_str), "%d", h->len);

		if (h->str == NULL)
		{
			write(1, "[0] (nil)\n", 11);
		}
		else
		{
			write(1, "[", 1);
			write(1, len_str, len);
			write(1, "] ", 2);
			write(1, h->str, strlen(h->str));
			write(1, "\n", 1);
		}
	count++;
	h = h->next;
	}
	return (count);
}
