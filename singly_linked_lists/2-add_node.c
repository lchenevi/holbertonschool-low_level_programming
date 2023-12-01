#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <unistd.h>
#include <string.h>
#include "lists.h"


/**
* add_node - adds a new node at the beginning of a list_t list
* @head: pointer to the head of the linked list
* @str: string to be duplicated and stored in the new node
* Return: the address of the new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
	{
		return (NULL);  /*Return NULL if the input string is NULL*/
	}

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);  /*Return NULL if memory allocation fails*/
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);  /*Return NULL if strdup fails*/
	}

	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}